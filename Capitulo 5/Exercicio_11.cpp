#include<stdio.h> // Responsavel pelo comando printf

main() {
	/* Criar em linguagem C e utilizando o comando WHILE e / ou DO WHILE aninhado, um programa conforme imagem abaixo.*/
	
	int linha = 1, coluna; // Declarando as variaveis do tipo inteiro para linha e para coluna
    
    while(linha <= 4) {  // Enquanto 'linha' for menor ou igual a 4, mantem dentro do laco
    	
    	coluna = 1;  // coluna sempre e redefinido para 1, pois ele precisara ser multiplicado pela linha novamente a cada iteracao
    	
    	while(coluna <= 4) {  // Enquanto 'coluna' for menor ou igual a 4, mantem dentro do laco
    		printf("%d ", linha * coluna); // Na primeira iteracao, sera linha 1 x col 1, linha 1 x col 2, linha 1 x col 3 ... 
    		coluna++;  // Incremento... permite que o valor da coluna aumente a cada iteracao, para a multiplicacao citada acima ser correta
		}
		printf("\n");  // Apos iterar por todas as colunas dentro de uma linha, ele da uma quebra pra linha de baixo
		linha++;  // Incremento... agora ele aumenta o numero da linha, e na proxima iteracao as multiplicacoes terao o resultado diferente
	}	
}
