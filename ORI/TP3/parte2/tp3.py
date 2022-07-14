import string
import unidecode
import math
import numpy
import re
import nltk


def abreArquivo(nomeArquivo):
  fp = open(nomeArquivo, 'r')
  texto = fp.read()
  return texto

#abre o arquivo, faz o unidecode, remove pontuação, separa os termos, ordena os termos, remove duplicatas e 
#retorna a lista de termos
def separaArquivo(nomeArquivo):
  texto = abreArquivo(nomeArquivo)
  termos = separaString(texto)
  termos.sort()
  termos = list(dict.fromkeys(termos))

  return termos

#abre o arquivo, faz o unidecode, remove pontuação, separa os termos, ordena os termos, mas não remove duplicatas
def listaArquivo(nomeArquivo):
  texto = abreArquivo(nomeArquivo)
  termos = separaString(texto)

  return termos

#stopwords tratadas
def getStopwords():
  nltk.download('stopwords')
  stopwords = nltk.corpus.stopwords.words('portuguese')
  stopwordsUni = []
  for i in stopwords:
    stopwordsUni.append(unidecode.unidecode(i))
  stopwordsUni = list(dict.fromkeys(stopwordsUni))

  return stopwordsUni

stopwords = getStopwords()
def separaString(texto):
  texto = unidecode.unidecode(texto)
  pontuacao = string.punctuation
  for i in pontuacao:
    texto = texto.replace(i,"")
  
  texto = re.sub(r'\d+', '', texto)
  termos = texto.lower().split()

  for i in stopwords:
    while i in termos:
      termos.remove(i)

  return termos

  
def comparaTermos(vocabulario, documento):
  bagOfWords = []
  for i in vocabulario:
    if i in documento:
      bagOfWords.append(1)
    else:
      bagOfWords.append(0)

  return bagOfWords

def frequenciaTermos(vocabulario, documento):
  bagOfWords = []
  for i in vocabulario:
    for j in documento:
      if j in vocabulario:
        contador = documento.count(i)
        bagOfWords.append(contador)
        break
      else:
        bagOfWords.append(0)
        break

  return bagOfWords

def calculaTF(bagOfWords):
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

def calculaIDF(lista):
  vocabulario = geraVocabulario(lista)
  idf = []
  for i in vocabulario:
      contador = 0
      for j in lista:
          documento = separaArquivo(j)
          if i in documento:
              contador = contador + 1
      idf.append(contador)
  idf = [round(math.log(len(lista)/i, 2),3) for i in idf]

  return idf

def calculaTFIDFLista(vocabulario, lista):
  idf = calculaIDF(lista)
  listaTFIDF = []
  for i in lista:
    tfidf = []
    documento = listaArquivo(i)
    bagOfWords = frequenciaTermos(vocabulario, documento)
    tf = calculaTF(bagOfWords)
    tfidf = [round(tf[j]*idf[j], 3) for j in range(len(tf))]
    listaTFIDF.append(tfidf)
  
  return listaTFIDF

def calculaTFIDFConsulta(vocabulario, lista, consulta):
  termosConsulta = separaString(consulta)
  bag = frequenciaTermos(vocabulario, termosConsulta)
  idf = calculaIDF(lista)
  tf = calculaTF(bag)
  tfidf = [round(tf[j]*idf[j], 3) for j in range(len(tf))]

  return tfidf
  

def mostraDadosListaArquivos(vocabulario, lista):
  for i in lista:
    bagOfWords = []
    documento = listaArquivo(i)
    print(f'\nDocumento: {documento}')
    bagOfWords = frequenciaTermos(vocabulario, documento)
    print(f'Bag of Words: {bagOfWords}')
    tf = calculaTF(bagOfWords)
    print(f'TF: {tf}')


def geraVocabulario(lista):
    vocabulario = []
    for i in lista:
        documento = separaArquivo(i)
        vocabulario = vocabulario + documento
    vocabulario = list(dict.fromkeys(vocabulario))
    vocabulario.sort()

    return vocabulario

def escreveVocabulario(lista):
    vocabulario = geraVocabulario(lista)
    fp = open('vocabulario.txt', 'w')
    for i in vocabulario:
        fp.write(i + '\n')

def calculaSimilaridade(vetorA, vetorB):
  produtoInterno = 0
  for i in range (len(vetorA)):
    temp = vetorA[i]*vetorB[i]
    produtoInterno = produtoInterno + temp

  normaVetorA = numpy.linalg.norm(vetorA)
  normaVetorB = numpy.linalg.norm(vetorB)
  produtoNorma = normaVetorA*normaVetorB
  if produtoNorma!=0:
    similaridade = produtoInterno/produtoNorma
  else:
    similaridade = 0

  return similaridade

def calculaSimilaridadeLista(tfidf, vetorConsulta):
  vetorSimilaridades = []
  for i in range(len(tfidf)):
    vetorSimilaridades.append(calculaSimilaridade(tfidf[i], vetorConsulta))

  return vetorSimilaridades

def mostraVetor(vetor):
  print('\n'.join('{}: {}'.format(*k) for k in enumerate(vetor, 1)))

def mostraNomeVetor(vetor, lista):
  for i in range(len(vetor)):
    print(f'{lista[i]}: {vetor[i]}')

def mostraDocSimilar(vetorSimilaridade, lista):
  maiorSim = max(vetorSimilaridade)

  if maiorSim == 0:
    print(f'\nNao existe documento similar na colecao')
    return

  posDoc = vetorSimilaridade.index(maiorSim)
  print(f'\nDocumento mais Similar: {lista[posDoc]}')
  print(abreArquivo(lista[posDoc]))

def inputCalculaConsulta(vocabulario, lista, tfidf):
  while(1):
    consulta = input("\nDigite a consulta ('!' para terminar): ")
    if consulta == '!':
      break

    vetorConsulta = calculaTFIDFConsulta(vocabulario, lista, consulta)

    vetorSimilaridade = calculaSimilaridadeLista(tfidf, vetorConsulta)

    print('\nGrau de Similaridade')
    mostraNomeVetor(vetorSimilaridade, lista)

    mostraDocSimilar(vetorSimilaridade, lista)


listaDoc = ['hinoAtleticoMG.txt', 'hinoCorinthians.txt', 'hinoFlamengo.txt', 'hinoFluminense.txt',
            'hinoInternacional.txt', 'hinoPalmeiras.txt', 'hinoSantos.txt', 'hinoSaoPaulo.txt']


vocabulario = geraVocabulario(listaDoc)

print(f'StopWords: {stopwords}')
print(f'\nVocabulario: {vocabulario}')