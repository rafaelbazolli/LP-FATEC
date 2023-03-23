#include<stdio.h> // Responsavel pelos comandos printf e scanf
#include<conio.h> // Responsavel pelo comando getch
#include<windows.h> // Responsavel pelo comando system

main() {
	float nota1, nota2, nota3, nota4, media;  // Declarando as variaveis tipo real(ponto flutuante)
	
	menu:    // Local para onde o goto aponta, caso o valor da idade esteja fora do range considerado valido
	system("cls");  // Limpa a tela do prompt
	printf("Programa que calcula media das notas!\n\n"); // Imprime o texto na tela
	printf("Digite a primeira nota: ");   // Imprime o texto na tela
	scanf("%f", &nota1);  // Recebe primeira nota
	printf("Digite a segunda nota: ");   // Imprime o texto na tela
	scanf("%f", &nota2);  // Recebe segunda nota
	printf("Digite a terceira nota: ");   // Imprime o texto na tela
	scanf("%f", &nota3);  // Recebe terceira nota
	printf("Digite a quarta nota: ");   // Imprime o texto na tela
	scanf("%f", &nota4);  // Recebe quarta nota
	
	media = (nota1 + nota2 + nota3 + nota4) / 4;  // Calcula a media das 4 notas
	
	if(media >= 6) { 
		printf("\nMedia = %.2f\nSituacao: APROVADO", media);  // Imprime na tela a media, e a mensagem com a situacao do aluno
	} 
	else if((media >= 3) && (media < 6)) { 
		printf("\nMedia = %.2f\nSituacao: RECUPERACAO", media);  // Imprime na tela a media, e a mensagem com a situacao do aluno
	}  
	else if(media <3) { 
		printf("\nMedia = %.2f\nSituacao: REPROVADO", media);  // Imprime na tela a media, e a mensagem com a situacao do aluno
	}
	else {   // Caso a idade seja menor que 5, executa o bloco abaixo
		printf("Desculpe! Alguma das notas informadas estava incorreta ou fora dos parametros aceitaveis.\nTente digita-las novamente.");  // Imprime a mensagem na tela
		Sleep(5000);  // Aguarda 5 segundos antes de seguir para a proxima instrucao
		goto menu;  // Retorna para o menu(linha 9), e solicita novamente as notas para o usuario
	}	
	getch();  // Aguarda o usuario digitar uma tecla qualquer para encerrar a execucao do programa
}

