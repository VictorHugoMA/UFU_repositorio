#leitura de uma string separa em vetor de char, 25 letras do alfabedo e imprime a letra que falta

def leitura():
    string = input()

    return list(string)

def letraFaltante(vetor):
    letras = "abcdefghijklmnopqrstuvwxyz"
    for i in range(len(letras)):
        if letras[i] not in vetor:
            return letras[i]

vetor = leitura()
print("Letra faltante: ", letraFaltante(vetor))