
livros = []; contagem = 0
qtdLivros = int(input())
livrosFinal = str(input())

livrosOrdenado = sorted(livrosFinal)

while livrosFinal != livrosOrdenado:
    for i in range(qtdLivros - 1):
        if livrosFinal[i] > livrosFinal[i+1]:
            livrosFinal = livrosFinal[:i] + livrosFinal[i+1] + livrosFinal[i] + livrosFinal[i+2:]
            contagem += 1

print(contagem)
