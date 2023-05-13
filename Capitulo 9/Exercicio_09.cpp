#include <stdio.h>

void exibirNumeros(int *vetor) {
    // Exibindo o vetor, cada elemento + 5
    printf("\n\nVetor apos a conversao: [");
    for(int i = 0; i < 5; i++) {
        printf(" %d", vetor[i] + 5);
    }
    printf(" ]");
}

int main() {
    int numeros[5], i;

    for(i = 0; i < 5; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
    }

    exibirNumeros(numeros);
}
