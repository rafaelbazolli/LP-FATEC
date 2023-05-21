#Cruzamento perigoso

posicaoVeiculos = []
entrada = str(input())
linhas, colunas, numVeiculos = map(int, entrada.split())

for veiculo in range(numVeiculos):
    entrada = str(input())
    posX, posY, direcao = entrada.split()
    posX = int(posX); posY = int(posY)
    
    if(direcao == 'N'):
        aux = []
        aux.append([posX, posY])
        for i in range(posY, 0):
            aux.append([posX, i])
        posicaoVeiculos.append(aux)
    elif(direcao == 'S'):
        aux = []
        aux.append([posX, posY])
        for i in range(posY, linhas):
            aux.append([posX, i])
        posicaoVeiculos.append(aux)
    elif(direcao == 'L'):
        aux = []
        aux.append([posX, posY])
        for i in range(posX, colunas):
            aux.append([posX, i])
        posicaoVeiculos.append(aux)
    elif(direcao == 'O'):
        aux = []
        aux.append([posX, posY])
        for i in range(posX, 0):
            aux.append([posX, i])
        posicaoVeiculos.append(aux)
print(posicaoVeiculos)
    
