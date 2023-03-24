#include<stdio.h> // Responsavel pelos comandos printf e scanf
#include<conio.h> // Responsavel pelo comando getch
#include<windows.h> // Responsavel pelo comando system

main() {
	/* Crie um programa em C, usando FOR, para receber as notas de 10 alunos, e ao final exibir quantos deles estão de recuperacao, e quantos ja estao aprovados.
	Considerar que estao de recuperacao os alunos com notas inferiores a 6, e os aprovados com as notas iguais ou superiores a 6.  */
	
	float nota;  // Declarando a variavel do tipo real(ponto flutuante)
	int alunosAprovados = 0, alunosRecuperacao = 0;  // Declarando as variaveis do tipo inteiro
	
	for(int i = 1; i <= 10; i++) {
		system("cls");  // Limpa a tela do prompt 
		printf("Programa para contabilizar alunos Aprovados / Reprovados!\n\n");  // Imprime a mensagem na tela
		printf("Digite a nota do aluno %d: ", i);  // Imprime a mensagem na tela, e o numero do aluno atual
		scanf("%f", &nota);	 // Recebe a nota do aluno atual, fornecido pelo usuario
		
		if(nota >= 6) {  // Se o aluno foi aprovado
			alunosAprovados += 1;  // Acumulador de alunos aprovados
		} else {  // Se o aluno ficou de recuperacao
			alunosRecuperacao += 1;  // Acumulador de alunos de recuperacao
		}
	}
	
	printf("\nTotal de alunos Aprovados: %d", alunosAprovados);  // Imprime a mensagem na tela com os alunos aprovados
	printf("\nTotal de alunos de Recuperacao: %d", alunosRecuperacao);  /// Imprime a mensagem na tela com os alunos de recuperacao
		
	getch();  // Aguarda o usuario digitar uma tecla qualquer para encerrar a execucao do programa
}
