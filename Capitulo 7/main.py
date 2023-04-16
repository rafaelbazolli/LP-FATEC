import time, os

def aguardarLimpar():
    time.sleep(3) 
    os.system("cls")

def receberNumeros():
    num1 = float(input("Digite o primeiro numero: "))
    num2 = float(input("Digite o segundo numero: "))
    return [num1, num2]

def somar():
    a, b = receberNumeros()
    resultado = a + b
    print(f"{resultado}")

def subtrair():
    a, b = receberNumeros()
    resultado = a - b
    print(f"{resultado}")

def multiplicar():
    a, b = receberNumeros()
    resultado = a * b
    print(f"{resultado}")

def dividir():
    a, b = receberNumeros()
    resultado = a / b
    print(f"{resultado}")

print("Calculadora\n\n1 - SOMA\n2 - SUBTRACAO\n3 - MULTIPLICACAO\n4 - DIVISAO\n0 - sair\n\n ")
while(True):
    opcao = int(input("\nDigite a operacao desejada:"))

    if(opcao == 1): somar(); aguardarLimpar()
    elif(opcao == 2): subtrair(); aguardarLimpar()
    elif(opcao == 3): multiplicar(); aguardarLimpar()
    elif(opcao == 4): dividir(); aguardarLimpar()
    else: print("\nOpcao invalida! Tente novamente!")
