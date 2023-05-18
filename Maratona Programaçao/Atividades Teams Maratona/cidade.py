# Dados inúteis para a saída: numero do concurso, data do sorteio
listaEntrada = []; i = 0

def registrarEntradas(numGanhadores, cidade, estado, valorFinal):
    novaLista = [int(numGanhadores), cidade, estado, float(valorFinal)]
    listaEntrada.append(novaLista)

while(True):
    entrada = str(input())
    if entrada == '0': break
    
    concurso, data, numGanhadores, cidade, estado, valorRateio = entrada.split(';')
    valorFinal = int(numGanhadores) * float(valorRateio)
    cidadeEncontrada = False
    
    for item in listaEntrada:
        if (item[1] == cidade) and (item[2] == estado):  # Validando se a cidade já existe dentro da tupla
            item[3] += valorFinal
            cidadeEncontrada = True
            break
    
    if not cidadeEncontrada:
        registrarEntradas(numGanhadores, cidade, estado, valorFinal)

listaOrdenada = sorted(listaEntrada, key=lambda cadaLista: cadaLista[-1], reverse=True)   # Vai ordenar pelo último elemento das listas

for item in listaOrdenada:
    print(f'{item[1]} {item[2]} {int(item[3])}')
    i += 1
    if i == 3: break