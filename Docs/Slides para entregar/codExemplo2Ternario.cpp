#include <stdio.h>

int main() {
    /* Criar um laço FOR para contar quantos numeros pares e divisiveis
    por 3 existem entre 1 e 20. */
    int contador = 0;

    for(int i = 1; i <= 20; i++) {
        contador += ((i % 2 == 0) && (i % 3 == 0)) ? 1 : 0;
    }

    /* Podem ser feitas mais de uma comparação dentro da 'condição', desde
    que, o resultado dessas comparações possam ser verdadeiro ou falso. */
    printf("\nNumeros pares e divisiveis por 3 entre 1 e 20.\n");
    printf("Existem %d numeros que satisfazem essa condicao.", contador);

}
