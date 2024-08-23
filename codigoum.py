import os
nome =(input("Insira seu nome: "))
print("Nome: {0}".format(nome))

numero = int (input('Digite o número na chamada: '))
print("Número do Aluno: {0}".format(numero))

while True:
    nota1 = float(input('Insira a nota 1: '))
    if nota1 > 10 or nota1 < 0:
        print("Nota Inválida. Insira Novamente!!!")
        continue
    else:
        print("Nota 1: {0}".format(nota1))
    break

while True:
    nota2 = float(input('Insira a nota 2: '))
    if nota2 > 10 or nota2 < 0:
        print("Nota Inválida. Insira Novamente!!!")
        continue
    else:
        print("Nota 2: {0}".format(nota2))
    break

media = (nota1 + nota2) / 2
print("Sua Média foi: {0}".format(media))

os.system("cls")
print("Nome e número: {0} {1}".format(nome,numero))
print("Nota 1: {0}".format(nota1))
print("Nota 2: {0}".format(nota2))
print("Sua Média foi: {0}".format(media))