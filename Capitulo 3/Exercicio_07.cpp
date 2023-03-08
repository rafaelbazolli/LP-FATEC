#include<stdio.h>
#include<windows.h>
#include<conio.h>

main(){
	/* Criar um programa em linguagem C que leia um numero positivo do teclado e informar se ele e divisivel 
	por 10, por 5, por 2 ou se nao e divisivel por nenhum deles. */
	
	bool por2, por5, por10;
	int num;
	
	printf("Programa para verificar se o numero e divisivel por 2, 5 ou 10");
	printf("\nDigite um numero: ");
	scanf("%d", &num);
	
	por2 = num % 2; // Retorna o resto 0 caso a divisao seja bem sucedida
	por5 = num % 5;
	por10 = num % 10;
	
	if((por2 == 0) && (por5 == 0) && (por10 == 0)) { // Se for divisivel por todos
		printf("\n\nO numero e divisivel por 2, 5 e 10.");
	}
	else
		if((por2 == 0) && (por5 == 0) && (por10 == 1)) { // Se nao for divisivel apenas pelo 10
			printf("\n\nO numero e divisivel por 2 e 5.");
		}
		else 
			/* Somente divisivel por 2 e 10, ou por 5 e 10 sao desnecessarios, pois se for divisivel por 10
			   obrigatoriametne ele sera por 2 tambem. Da mesma forma, se for divisivel por 10, por 2 ele tambem sera */
			if((por2 == 1) && (por5 == 1) && (por10 == 1)) {
				printf("\n\nO numero nao e divisivel por 2, por 5 nem por 10.");
			}
			else // Aqui serao tratados os que somente sao divisiveis por um unico numero
				if(por2 == 0) {
					printf("\n\nO numero e divisivel somente por 2.");
				}
				else
					if(por5 == 0) {
						printf("\n\nO numero e divisivel somente por 5.");
					} 
					// Somente divisivel por 10 nao pode ser colocado, pois ele obrigatoriamente seria divisivel por 2 e por 5
	getch();
}
