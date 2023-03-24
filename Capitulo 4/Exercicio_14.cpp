#include<stdio.h> // Responsavel pelos comandos printf e scanf
#include<conio.h> // Responsavel pelo comando getch
#include<windows.h> // Responsavel pelo comando system

main() {
	/* Uma empresa possui um total de saldo de R$ 200000,00 para pagar o salario de seus 15 funcionarios. Desenvolva um progrma em C, usando FOR, 
	para receber o salario de cada um desses funcionarios, e verificar se o saldo da empresa e suficiente para pagar todos. 
	Exibir no final uma mensagem se o saldo foi ou nao foi suficiente, e o saldo restante. */
	
	float salario, totalSalarios = 0, saldo = 200000, diferenca;
	
	for(int i = 1; i <= 15; i++) {  // Enquanto o contador for menor ou igual a 15, mantem o laco FOR
		system("cls");  // Limpa a tela do prompt
		printf("Programa para verificar saldo da Empresa!\n\n"); // Imprime a mensagem na tela
		printf("Digite o salario do funcionario %d: ", i);  // Imprime a mensagem na tela, com o numero atual do contador 
		scanf("%f", &salario);  // Recebe o salario do funcionario atual
		
		totalSalarios += salario;  // Acumulador, armazena o total dos salarios. Seria o mesmo que o comando totalSalarios = totalSalarios + salario
	}
	
	diferenca = saldo - totalSalarios;  // Calcula a diferenca entre o saldo da empresa e o total dos salarios informados, e armazena na variavel 'diferenca'

	if(diferenca < 0) {   // Se a diferenca for negativa, significa que os salarios foram mais altos que o saldo disponivel na empresa, e inicia a execucao do bloco
		printf("\nO saldo da empresa NAO FOI SUFICIENTE para pagar todos os funcionarios!\nFaltaram: R$ %.2f.", diferenca);  // Imprime a mensagem na tela, com o valor da diferenca final
	} 
	else {  // Se a diferenca for maior ou igual a zero, significa que o saldo foi suficiente para pagar, e inicia a execucao do bloco abaixo
		printf("\nO saldo da empresa FOI SUFICIENTE para pagar todos os funcionarios!\nSaldo Restante: R$ %.2f", diferenca); // Imprime a mensagem na tela, com o valor da diferenca final
	}
	getch();  // Aguarda o usuario digitar uma tecla qualquer para encerrar a execucao do programa
}
