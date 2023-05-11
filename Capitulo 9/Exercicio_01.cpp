#include <stdio.h>

main()
{
    int num, *ptr_num, x, soma;

    printf("Digite um numero: ");
    scanf("%d", &num);

    // Armazenando no ponteiro a posicao na memoria onde num se encontra
    ptr_num = &num;

    // Atribuindo a variavel 'y' o valor de num+1, pegando o valor de num atravez de seu ponteiro
    x = 1 + *ptr_num;

    // Somando num + x
    soma = num + x;

    printf("\n%d + %d = %d", num, x, soma);  // Exibindo a soma
    printf("\nEnderecos de memoria:\n%d: %d\n%d: %d", num, ptr_num, x, &x);  // Exibindo os numeros e enderecos de memoria 
}
