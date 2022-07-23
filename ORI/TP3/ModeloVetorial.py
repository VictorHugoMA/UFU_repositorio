import string
import unidecode
import math
import numpy
import re
import nltk
from nltk.stem import PorterStemmer

class ModeloVetorial:
 #variaveis da classe
  stopwords = []
  listaArquivos = []
  vocabulario = []
  idf = []
  
  def __init__(self, listaArquivos):
    self.setStopwords()
    self.stemmer = PorterStemmer()
    self.setListaArquivos(listaArquivos)
    self.setVocabulario()
    self.setIDF()
  
  def setListaArquivos(self, listaArquivos):
    self.listaArquivos = listaArquivos

  def abreArquivo(self, nomeArquivo):
    fp = open(nomeArquivo, 'r')
    texto = fp.read()
    return texto

  #abre o arquivo, faz o unidecode, remove pontuação, separa os termos, ordena os termos, remove duplicatas e 
  #retorna a lista de termos
  def separaArquivo(self, nomeArquivo):
    texto = self.abreArquivo(nomeArquivo)
    termos = self.separaString(texto)
    termos.sort()
    termos = list(dict.fromkeys(termos))

    return termos

  #abre o arquivo, faz o unidecode, remove pontuação, separa os termos, ordena os termos, mas não remove duplicatas
  def termosArquivo(self, nomeArquivo):
    texto = self.abreArquivo(nomeArquivo)
    termos = self.separaString(texto)

    return termos

  #stopwords tratadas
  def setStopwords(self):
    nltk.download('stopwords')
    stopwords = nltk.corpus.stopwords.words('portuguese')
    stopwordsUni = []
    for i in stopwords:
      stopwordsUni.append(unidecode.unidecode(i))
    stopwordsUni = list(dict.fromkeys(stopwordsUni))

    self.stopwords = stopwordsUni



  def separaString(self, texto):
    texto = unidecode.unidecode(texto)
    pontuacao = string.punctuation
    for i in pontuacao:
      texto = texto.replace(i,"")
    
    texto = re.sub(r'\d+', '', texto)
    termos = texto.lower().split()

    for i in self.stopwords:
      while i in termos:
        termos.remove(i)

    """
    termosRad = []
    for i in range(len(termos)):
      termosRad.append(self.stemmer.stem(termos[i]))
    """

    return termos

  def normalizaConsulta(self, consulta):
    termosConsulta = self.separaString(consulta)
    termos = []
    for i in termosConsulta:
      if i in self.vocabulario:
        termos.append(i)

    return termos

    
  def comparaTermos(self, documento):
    bagOfWords = []
    for i in self.vocabulario:
      if i in documento:
        bagOfWords.append(1)
      else:
        bagOfWords.append(0)

    return bagOfWords

  def frequenciaTermos(self, documento):
    bagOfWords = []
    for i in self.vocabulario:
      for j in documento:
        if j in self.vocabulario:
          contador = documento.count(i)
          bagOfWords.append(contador)
          break
        else:
          bagOfWords.append(0)
          break

    return bagOfWords

  def calculaTF(self, bagOfWords):
    tf = []
    log = 0
    for i in bagOfWords:
      num = int(i)
      if num!=0:
        log = math.log(num, 2)
        tf.append(round(1+log, 3))
      else:
        tf.append(0)

    return tf

  def setIDF(self):
    idf = []
    for i in self.vocabulario:
        contador = 0
        for j in self.listaArquivos:
            documento = self.separaArquivo(j)
            if i in documento:
                contador = contador + 1
        idf.append(contador)
    idf = [round(math.log(len(self.listaArquivos)/i, 2),3) for i in idf]

    self.idf = idf

  def calculaTFIDFLista(self):
    idf = self.idf
    listaTFIDF = []
    for i in self.listaArquivos:
      tfidf = []
      documento = self.termosArquivo(i)
      bagOfWords = self.frequenciaTermos(documento)
      tf = self.calculaTF(bagOfWords)
      tfidf = [round(tf[j]*idf[j], 3) for j in range(len(tf))]
      listaTFIDF.append(tfidf)
    
    return listaTFIDF

  def calculaTFIDFConsulta(self, consulta):
    termosConsulta = self.normalizaConsulta(consulta)
    bag = self.frequenciaTermos(termosConsulta)
    idf = self.idf
    tf = self.calculaTF(bag)
    tfidf = [round(tf[j]*idf[j], 3) for j in range(len(tf))]

    return tfidf
    

  def mostraDadosListaArquivos(self):
    for i in self.listaArquivos:
      bagOfWords = []
      documento = self.termosArquivo(i)
      print(f'\nDocumento: {documento}')
      bagOfWords = self.frequenciaTermos(documento)
      print(f'Bag of Words: {bagOfWords}')
      tf = self.calculaTF(bagOfWords)
      print(f'TF: {tf}')


  def setVocabulario(self):
      vocabulario = []
      for i in self.listaArquivos:
          documento = self.separaArquivo(i)
          vocabulario = vocabulario + documento
      vocabulario = list(dict.fromkeys(vocabulario))
      vocabulario.sort()

      self.vocabulario = vocabulario

  def escreveVocabulario(self):
      fp = open('vocabulario.txt', 'w')
      for i in self.vocabulario:
          fp.write(i + '\n')

  def calculaSimilaridade(self, vetorA, vetorB):
    produtoInterno = 0
    produtoNorma = 0
    if(len(vetorA)>0 and len(vetorB)>0):
      for i in range (len(vetorA)):
        temp = vetorA[i]*vetorB[i]
        produtoInterno = produtoInterno + temp

      normaVetorA = numpy.linalg.norm(vetorA)
      normaVetorB = numpy.linalg.norm(vetorB)
      produtoNorma = normaVetorA*normaVetorB
      
    if produtoNorma!=0 and produtoInterno!=0:
      similaridade = produtoInterno/produtoNorma
    else:
      similaridade = 0

    return similaridade

  def calculaSimilaridadeLista(self, tfidf, vetorConsulta):
    vetorSimilaridades = []
    for i in range(len(tfidf)):
      vetorSimilaridades.append(self.calculaSimilaridade(tfidf[i], vetorConsulta))

    return vetorSimilaridades

  def mostraVetor(self, vetor):
    print('\n'.join('{}: {}'.format(*k) for k in enumerate(vetor, 1)))

  def mostraNomeVetor(self, vetor):
    for i in range(len(vetor)):
      print(f'{self.listaArquivos[i]}: {vetor[i]}')

  def mostraDocSimilar(self, vetorSimilaridade):
    maiorSim = max(vetorSimilaridade)

    if maiorSim == 0:
      print(f'\nNao existe documento similar na colecao')
      return

    posDoc = vetorSimilaridade.index(maiorSim)
    print(f'\nDocumento mais Similar: {self.listaArquivos[posDoc]}')
    print(self.abreArquivo(self.listaArquivos[posDoc]))

  def inputCalculaConsulta(self):
    tfidf = self.calculaTFIDFLista()
    while(1):
      consulta = input("\nDigite a consulta ('!' para terminar): ")
      if consulta == '!':
        break

      vetorConsulta = self.calculaTFIDFConsulta(consulta)

      vetorSimilaridade = self.calculaSimilaridadeLista(tfidf, vetorConsulta)

      print('\nGrau de Similaridade')
      self.mostraNomeVetor(vetorSimilaridade)

      self.mostraDocSimilar(vetorSimilaridade)




"""   listaDoc = [ 'hinoAmericaMG.txt', 'hinoAthletico.txt', 'hinoAtleticoGO.txt', 'hinoAtleticoMG.txt', 'hinoAvai.txt',
            'hinoBotafogo.txt', 'hinoBragantino.txt', 'hinoCeara.txt', 'hinoCorinthians.txt', 'hinoCoritiba.txt',
            'hinoCuiaba.txt', 'hinoFlamengo.txt', 'hinoFluminense.txt', 'hinoFortaleza.txt', 'hinoGoias.txt',
            'hinoInternacional.txt', 'hinoJuventude.txt','hinoPalmeiras.txt', 'hinoSantos.txt', 'hinoSaoPaulo.txt'] 
  vocabulario = geraVocabulario(listaDoc)

  tfidf = calculaTFIDFLista(vocabulario, listaDoc)
  inputCalculaConsulta(vocabulario, listaDoc, tfidf) """