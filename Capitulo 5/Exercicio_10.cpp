#include<stdio.h> // Responsavel pelo comando printf

main() {
	/* Criar em linguagem C e utilizando o comando WHILE e / ou DO WHILE aninhado, um programa conforme imagem abaixo. *\n**\n***\n...*/
	
	int linhas = 8, i = 1, j; // Declarando as variaveis do tipo inteiro
	// Foi definido o numero de linhas como 8, e 'i' = 1, o 'j' representara o contador de asteriscos para cada linha
    
    while (i <= linhas) {  // Enquanto i for menor ou igual oa numero de linhas, o laco sera mantido
    	
        j = 1;  // 'j' precisou ser inicializado como 1, pois a quantidade de asteriscos exibidos depende dele, e o a piramide comeca com 1
        
        while (j <= i) {  // Dentro de cada linha('i'), ira ser percorrido esse while
        	// O numero de asteriscos deve ser o mesmo que o numero da linha, ou seja, seria o mesmo que i * j
        	
            printf("* "); // Esse laco vai exibir um asterisco, enquanto a quantidade de asteriscos('j') for menor que o tamanho da linha
            j++;  // Incremento do numero de asteriscos
        }
        printf("\n");  // Imprime uma quebra de linha apos o while que mostrou os asteriscos(linhas 15 a 19)
        i++;  // Incremento do numero de linhas
    }		
}
