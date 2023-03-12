#include<stdio.h>
#include<conio.h>
#include<windows.h>

main() {
	/* Criar em programa em linguagem C, que efetue a PA conforme imagem abaixo,utilizando FOR: */
	float soma = 0, a, aux, razao;
	int n;
	
	printf("Programa para calcular Progressao Aritmetica(PA)\n\n");
	printf("Digite o primeiro termo da PA: ");
	scanf("%f", &a);
	printf("Digite a razao: ");
	scanf("%f", &razao);
	printf("Digite o numero de termos da PA: ");
	scanf("%i", &n);

	aux = a; // A variavel auxiliar assume o valor de a
	for(int i = 1;i <= n; i++) { // 'i' vai iterar ate chegar no numero de termos da PA, que e 'n'
		soma = soma + aux; // Na primeira iteracao, vai somar 0 com o valor de 'aux', que e o primeiro termo
		aux = aux + razao; // Ainda na primeira iteracao, aux deve ser somado a razao, para obter o proximo termo da PA
		// Na proxima iteracao, 'aux' ja tera o valor do proximo termo, e ira acumular dentro de 'soma'
	} 
	
	printf("\nSoma dos termos \nS = %.2f", soma);
	
	getch();
}

