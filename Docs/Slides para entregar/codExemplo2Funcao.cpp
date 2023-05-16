#include <stdio.h>

int somar(int a, int b) {
    int resp = a + b;
    return resp;
}

int main() {
    int num1 = 5, num2 = 10, num3, resultado;

    // Variavel 'num3' recebe o valor de retorno da funcao somar()
    num3 = somar(num1, num2);

    /* Como esse valor foi retornado e armazenado em uma variavel,
    ele pode ser manipulado normalmente como qualquer outra.
    No caso, abaixo, usamos o valor de num3 para realizar uma outra soma. */

    resultado = num3 + 2;

    printf("\nSoma: %d + %d = %d", num1, num2, num3);
    printf("\nResultado: %d + 2 = %d", num3, resultado);
}
