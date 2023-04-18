# Definição dos modelos de venda
def modelo1(produtos, qtdVendida):  ## Compra mais antiga
    totalVenda = 0
    for linha in produtos:
        totalVenda += linha[2]
    return totalVenda - (float(produtos[0][1]) * int(qtdVendida)) ## Lucro


def modelo2(produtos, qtdVendida):  ## Compra mais recente
    totalVenda = 0
    for linha in produtos:
        totalVenda += linha[2]
    return totalVenda - (float(produtos[-1][1]) * int(qtdVendida)) ## Lucro

def modelo3(produtos, qtdVendida):  ## Média das compras
    totalVenda = 0
    quantosProdutos = len(produtos)
    for linha in produtos:
        totalVenda += linha[2]
    return totalVenda - ((totalVenda / quantosProdutos) * int(qtdVendida)) ## Lucro


produtos = []  ## Será um array multi, [[quantidade, valorUnitario, totalVenda], [quantidade2, valorUnitario2, totalVenda2]]...
i = -1

while(True):
    i += 1
    entrada = str(input())

    if ' ' in entrada:  ## Se tiver espaço é porque o usuario inseriu produtos
        qtd, valor = map(float, entrada.split())
        custo = float(qtd) * float(valor)
        produtos.append([qtd, valor, custo])
    
    elif entrada.startswith('V'):  ## Nesse caso ele inseriu a string para venda V{inteiro}
        qtdVendida = entrada[1:]
        
        M1 = modelo1(produtos, qtdVendida)
        M2 = modelo2(produtos, qtdVendida)
        M3 = modelo3(produtos, qtdVendida)
        
        if(M1 == M2 and M2 == M3): 
            saida = f'TODOS IGUAIS = R${M1:.0f},00'
        elif(M1 < M2 and M1 < M3): 
            saida = f'M1 = R${M1:.0f},00'
        elif(M2 < M1 and M2 < M3): 
            saida = f'M2 = R${M2:.0f},00'
        elif(M3 < M1 and M3 < M2): 
            saida = f'M3 = R${M3:.0f},00'
        elif(M1 < M2 and M1 == M3): 
            saida = f'M1 ou M3 = R${M1:.0f},00'
        elif(M2 < M1 and M2 == M3): 
            saida = f'M2 ou M3 = R${M2:.0f},00'
        elif(M1 < M3 and M1 == M2): 
            saida = f'M1 ou M2 = R${M2:.0f},00'
        else:
            print('teste')
        print(saida); break
