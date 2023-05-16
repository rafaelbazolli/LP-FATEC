#include <stdio.h>

int main() {
    /* Criar um laço FOR para contar quantos numeros pares 
    há entre 1 e 20. */
    int contador = 0;

    for(int i = 1; i <= 20; i++) {
        contador += (i % 2 == 0) ? 1 : 0;
    }

    /* O operando '+=' faz a atribuição composta, a cada iteração ele vai
    somar o valor da expressão(à direita do sinal) ao valor já 
    existente em 'contador'.
    
    O oeprador ternário nesse caso validou se i é par ou não, e caso seja par
    ele retornará 1 para o contador e ele aumentará. Caso contrário, retornará 0
    para o contador e o valor da contagem não irá mudar.*/

    printf("Existem %d numeros pares entre 2 e 20.", contador);
}

