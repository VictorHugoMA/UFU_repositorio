#leitura de duas strings e verifica se sao anagramas, se for imprime 1 senao imprime 0

def leitura():
    string1 = input()
    string2 = input()

    return list(string1), list(string2)

def anagrama(string1, string2):
    string1.sort()
    string2.sort()
    if string1 == string2:
        return 1
    return 0

string1, string2 = leitura()
print(anagrama(string1, string2))