# Todas as luzes começam desligadas
while(True):
    entrada = str(input())
    
    if entrada == 0: break
    qtdSalas, qtdNumerosInformados = map(int, entrada.split())
    salas = [0] * qtdSalas

    for numero in range(qtdNumerosInformados):
        num = int(input())           # Entrada de cada linha com o número de luzes a ser modificada
        
        for x in range(qtdSalas):    # De 0 até a quantidade de salas informada
            if((x+1) % num) == 0:    # Se a divisão der resto 0, ou seja, se o numero for divisivel por..
                #print(f"Repetiu {x + 1} vezes")
                if salas[x] == 0:    # Validando se a posição atual de salas é o valor 0, se for, troca para 1, senão, troca de 1 pra 0
                    salas[x] = 1
                else:
                    salas[x] = 0
            
    for i in range(qtdSalas):
        print('L' if salas[i] == 1 else 'D', end='')
