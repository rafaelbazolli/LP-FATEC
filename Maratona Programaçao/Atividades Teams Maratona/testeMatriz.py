# Cada elemento sendo soma de linha x coluna
novaMatriz = []

for i in range(3):
    aux = []
    for j in range(3):
        soma = sum(matriz[i]) + sum(matriz[k][j] for k in range(3)) - matriz[i][j]
        aux.append(soma)
    novaMatriz.append(aux)
