#leitura de um vetor de inteiro e ordenacao em cresencte e decrecente

#funcao para ordenar em ordem crescente
def crescente(vetor):
    for i in range(len(vetor)):
        for j in range(i+1, len(vetor)):
            if vetor[i] > vetor[j]:
                aux = vetor[i]
                vetor[i] = vetor[j]
                vetor[j] = aux
    return vetor

def decrescente(vetor):
    for i in range(len(vetor)):
        for j in range(i+1, len(vetor)):
            if vetor[i] < vetor[j]:
                aux = vetor[i]
                vetor[i] = vetor[j]
                vetor[j] = aux
    return vetor

#funcao para ler um vetor de inteiros ate a quebra de linha
def leitura():
    vetor = []
    while True:
        try:
            vetor.append(int(input()))
        except:
            break
    return vetor

vetor = leitura()
print("Vetor em ordem crescente: ", crescente(vetor))
print("Vetor em ordem decrescente: ", decrescente(vetor))