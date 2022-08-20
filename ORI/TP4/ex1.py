from fnmatch import translate
import os
import string
import unidecode
import math
import csv
import re
import demoji
from unicodedata import normalize
from googletrans import Translator
import json
from textblob import TextBlob 

diretorio = r"C:\Users\Zorak\OneDrive\Documentos\Faculdade\TP4docs"

os.chdir(diretorio)

#ler e processar coluna de arquivo .csv
def ler_arquivo(arquivo):
    with open(arquivo, 'r',encoding='utf8') as f:
        reader = csv.reader(f, delimiter=';')
        linha = 0
        tweet =[]
        contador = 1
        translator= Translator()
        translator.raise_Exception = True
        for coluna in reader:
            if linha == 0:
                linha += 1
            else:
                linha += 1
                texto = unidecode.unidecode(coluna[0])
                texto = demoji.replace(texto)
                texto = re.sub(r'http\S+', '', texto)
                texto = translator.translate(texto).text
                texto = json.dumps(texto)
                pontuacao = string.punctuation
                for i in pontuacao:
                    texto = texto.replace(i,"")
                texto = re.sub(r'\d+', '', texto)
                tweet.append(texto)
                print(contador)
                contador += 1
        return tweet

#avalia o array de tweets
def avalia_tweets(tweets):
    polaridade = []
    for tweet in tweets:
        analise = TextBlob(tweet)
        polaridade.append(analise.sentiment.polarity)
    return polaridade

#salva em um novo arquivo .csv
def salva_arquivo(arquivo, tweets, polaridade):
    with open(arquivo, 'w',encoding='utf8') as f:
        writer = csv.writer(f, delimiter=';')
        writer.writerow(['tweet','polaridade'])
        for i in range(len(tweets)):
            writer.writerow([tweets[i], polaridade[i]])




tweets = ler_arquivo('reforma_previdencia_rotulado.csv')

avaliacao= avalia_tweets(tweets)

salva_arquivo('resultados.csv', tweets, avaliacao)

