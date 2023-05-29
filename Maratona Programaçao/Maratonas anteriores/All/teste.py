posicoes = []
linhas = 5; colunas = 6
entrada = str(input())
posX, posY = entrada.split()
posX = int(posX); posY = int(posY)

# Pro Leste
for i in range(posY, -1, -1):
    posicoes.append([posX, i])
    
print(posicoes)