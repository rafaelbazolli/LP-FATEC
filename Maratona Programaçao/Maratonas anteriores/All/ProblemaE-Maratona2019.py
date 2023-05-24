# Problema E - Exibição de Peixes
# mover peixe, e transformar peixe, nessa ordem, uma vez ao dia
# ver qual tem a maior qtd de femeas, somar o restante das femeas dos outros. Elas devem ser a qtd de movimentos ****
# se houver só machos num tanque, a formula é (qtd femeas para mover + qtd machos -1)
# se houver machos no tanque que as femeas ficarão, a formula é (qtd femeas para mover + qtdmachos + 1)
vetorPeixes = []; movimentos = 0
qtdTanques = int(input())

for tanque in range(qtdTanques):        
    entrada = str(input())
    vetorPeixes.append(list(map(int, entrada.split())))

vetorPeixesOrdenado = sorted(vetorPeixes, key=lambda elemento: elemento[-1], reverse=True)



print(movimentos)
    

