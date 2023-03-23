#include<stdio.h> // Responsavel pelos comandos printf e scanf
#include<conio.h> // Responsavel pelo comando getch
#include<windows.h> // Responsavel pelo comando system

main() {
	int idade;  // Declarando as variaveis tipo inteiro
	
	menu:    // Local para onde o goto aponta, caso o valor da idade esteja fora do range considerado valido
	system("cls");  // Limpa a tela do prompt
	printf("Programa que classifica competidores por categoria!\n\n"); // Imprime o texto na tela
	printf("Digite a idade do competidor: ");   // Imprime o texto na tela
	scanf("%i", &idade);  // Recebe a idade do competidor
	
	if((idade >= 5) && (idade <= 7)) { 
		printf("\nIdade: %d anos.\nCategoria Infantil A.", idade);
	} 
	else if((idade >= 8) && (idade <= 10)) { 
		printf("\nIdade: %d anos.\nCategoria Infantil B.", idade);
	}  
	else if((idade >= 11) && (idade <= 13)) { 
		printf("\nIdade: %d anos.\nCategoria Juvenil A.", idade);
	}
	else if((idade >= 14) && (idade <= 17)) { 
		printf("\nIdade: %d anos.\nCategoria Juvenil A.", idade);
	}
	else if(idade >= 18) { 
		printf("\nIdade: %d anos.\nCategoria Adulto.", idade);
	} else {   // Caso a idade seja menor que 5, executa o bloco abaixo
		printf("Desculpe! A idade digitada esta incorreta ou a idade e insuficiente para que ele possa competir. Tente novamente.");
        // O comando acima imprime a mensagem na tela
		Sleep(5000);  // Aguarda 5 segundos antes de seguir para a proxima instrucao
		goto menu;  // Retorna para o menu(linha 9), e solicita novamente as notas para o usuario
	}	
	getch();  // Aguarda o usuario digitar uma tecla qualquer para encerrar a execucao do programa
}

