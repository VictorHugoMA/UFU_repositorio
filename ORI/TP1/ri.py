import string
import unidecode

def abreArquivo(nomeArquivo):
  fp = open(nomeArquivo, 'r')
  texto = fp.read()
  return texto

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
  
def comparaTermos(vocabulario, documento):
  bagOfWords = []
  for i in vocabulario:
    if i in documento:
      bagOfWords.append(1)
    else:
      bagOfWords.append(0)

  return bagOfWords

def comparaInputArquivos(vocabulario):
  nomeDocumento=''
  print('DIGITE ! PARA FINALIZAR')
  while(1):
    bagOfWords = []
    nomeDocumento=input('\nDigite o nome do documento: ')
    
    if(nomeDocumento=='!'):
      break
    
    documento = separaArquivo(nomeDocumento)
    print(f'\nDocumento: {documento}\n')
    bagOfWords = comparaTermos(vocabulario, documento)
    print(f'Bag of Words: {bagOfWords}')

def comparaListaArquivos(vocabulario, lista):
  for i in lista:
    bagOfWords = []
    documento = separaArquivo(i)
    print(f'\nDocumento: {documento}\n')
    bagOfWords = comparaTermos(vocabulario, documento)
    print(f'Bag of Words: {bagOfWords}')
  

vocabulario = separaArquivo('vocabulario.txt')
print(f'Vocabulário: {vocabulario}\n')
lista = ['documento01.txt', 'Hino.txt']
comparaListaArquivos(vocabulario, lista)