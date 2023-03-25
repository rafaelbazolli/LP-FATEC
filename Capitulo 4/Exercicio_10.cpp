#include<stdio.h> // Responsavel pelos comandos printf e scanf
#include<conio.h> // Responsavel pelo comando getch


main() {
	/* Criar em programa em linguagem C, que efetue a SOMA da P.A. conforme imagem abaixo,utilizando FOR: */
	float soma = 0, a, aux, razao;  // Declarando as variaveis do tipo real(ponto flutuante)
	int n;  // Declarando a variavel do tipo inteiro
	
	printf("Programa para calcular Progressao Aritmetica(PA)\n\n");  // Imprime a mensagem na tela
	printf("Digite o primeiro termo da PA: ");  // Imprime a mensagem na tela
	scanf("%f", &a);  // Recebe o primeiro termo da PA, fornecido pelo usuario
	printf("Digite a razao: ");  // Imprime a mensagem na tela
	scanf("%f", &razao);  // Recebe o valor da razao da PA, fornecido pelo usuario
	printf("Digite o numero de termos da PA: ");  // Imprime a mensagem na tela
	scanf("%i", &n);  // Recebe o numero de termos da PA< fornecido pelo usuario

	aux = a; // A variavel auxiliar assume o valor de a
	for(int i = 1;i <= n; i++) { // 'i' vai iterar ate chegar no numero de termos da PA, que e 'n'
		soma = soma + aux; // Na primeira iteracao, vai somar 0 com o valor de 'aux', que e o primeiro termo
		aux = aux + razao; // Ainda na primeira iteracao, aux deve ser somado a razao, para obter o proximo termo da PA
		// Na proxima iteracao, 'aux' ja tera o valor do proximo termo, e ira acumular dentro de 'soma'
	} 
	
	printf("\nSoma dos termos \nS = %.2f", soma);  // Imprime a mensagem na tela contendo a soma dos termos da PA
	
	getch();  // Aguarda o usuario digitar uma tecla qualquer para encerrar a execucao do programa
}

