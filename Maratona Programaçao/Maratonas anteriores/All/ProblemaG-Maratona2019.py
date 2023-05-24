# Problema G - Guardando Enfeites
vetorEntradas = []; vetorOrdenado = []
qtdEnfeites = int(input())

for enfeite in range(qtdEnfeites):
    entrada = str(input())
    vetorEntradas.append(list(map(int, entrada.split())))

for i in range(qtdEnfeites):
    indiceMaior = 0; maior = 0

    for j, enfeite in enumerate(vetorEntradas):
        primeiro = enfeite[i]

        if primeiro > maior:
            if(j+1) in vetorOrdenado:
                continue
            else:
                maior = primeiro
                indiceMaior = j+1           
    vetorOrdenado.append(indiceMaior)

print(vetorOrdenado)

#### ta invertido, a anaise deve ser feita em linha nao em coluna