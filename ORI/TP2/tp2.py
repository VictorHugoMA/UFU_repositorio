import string
import unidecode
import math

def abreArquivo(nomeArquivo):
  fp = open(nomeArquivo, 'r')
  texto = fp.read()
  return texto

#abre o arquivo, faz o unidecode, remove pontuação, separa os termos, ordena os termos, remove duplicatas e 
#retorna a lista de termos
def separaArquivo(nomeArquivo):
  texto = abreArquivo(nomeArquivo)
  
  texto = unidecode.unidecode(texto)
  pontuacao = string.punctuation
  for i in pontuacao:
    texto = texto.replace(i,"")
  
  termos = texto.lower().split()
  termos.sort()
  termos = list(dict.fromkeys(termos))

  return termos

#abre o arquivo, faz o unidecode, remove pontuação, separa os termos, ordena os termos, mas não remove duplicatas
def listaArquivo(nomeArquivo):
  texto = abreArquivo(nomeArquivo)
  
  texto = unidecode.unidecode(texto)
  pontuacao = string.punctuation
  for i in pontuacao:
    texto = texto.replace(i,"")
  
  termos = texto.lower().split()

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

def calculaTFIDF(lista):
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

    

lista = ['d1.txt', 'd2.txt', 'd3.txt', 'd4.txt']
""" lista = [ 'hinoAmericaMG.txt', 'hinoAthletico.txt', 'hinoAtleticoGO.txt', 'hinoAtleticoMG.txt', 'hinoAvai.txt',
          'hinoBotafogo.txt', 'hinoBragantino.txt', 'hinoCeara.txt', 'hinoCorinthians.txt', 'hinoCoritiba.txt',
          'hinoCuiaba.txt', 'hinoFlamengo.txt', 'hinoFluminense.txt', 'hinoFortaleza.txt', 'hinoGoias.txt',
          'hinoInternacional.txt', 'hinoJuventude.txt','hinoPalmeiras.txt', 'hinoSantos.txt', 'hinoSaoPaulo.txt'] """
#escreveVocabulario(lista)
#vocabulario = separaArquivo('vocabulario.txt')

vocabulario = geraVocabulario(lista)
print(f'Vocabulario: {vocabulario}')
mostraDadosListaArquivos(vocabulario, lista)

idf = calculaIDF(lista)
print(f'\nIDF: {idf}\n')

tfidf = calculaTFIDF(lista)

print('TF-IDF')
print('\n'.join('{}: {}'.format(*k) for k in enumerate(tfidf, 1)))





