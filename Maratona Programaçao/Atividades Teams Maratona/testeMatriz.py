matriz = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
novaMatriz = []

for i in range(3):
    aux = []
    for j in range(3):
        soma = sum(matriz[i]) + sum(matriz[k][j] for k in range(3)) - matriz[i][j]
        aux.append(soma)
    novaMatriz.append(aux)

for linha in novaMatriz:
    print(linha)