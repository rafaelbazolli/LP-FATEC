#include <stdio.h>

main()
{
    int a = 2, b = 3, *ptr_a = &a, *ptr_b = &b;

    printf("Ponteiro de a(%d): %d", a, *ptr_a);
    printf("\nPonteiro de b(%d): %d", b, *ptr_b);

    // Atribuindo um ponteiro a outro
    *ptr_a = *ptr_b;

    // Exibindo os ponteiros apos a atribuicao
    printf("\n\nValor dos ponteiros apos a atribuicao:");
    printf("\nPonteiro de a: %d\nPonteiro de b: %d", *ptr_a, *ptr_b);

    // Atribuindo um inteiro a um ponteiro ja usado
    *ptr_b = 33;

    // Atribuindo uma variavel a outra
    a = b;

    // Imprimindo os ponteiros e suas variaveis novamente
    printf("\n\nPonteiro de a(%d): %d", a, *ptr_a);
    printf("\nPonteiro de b(%d): %d", b, *ptr_b);
}
