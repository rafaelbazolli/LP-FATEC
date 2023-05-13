#include <stdio.h>

void converterNumeros(int *vetor) {
    for(int i = 0; i < 7; i++) {
        vetor[i] = (vetor[i] % 2 == 0) ? 0 : 1;
    }
}

int main() {
    int numeros[7], i;

    for(i = 0; i < 7; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
    }

    converterNumeros(numeros);
    
    // Exibir o vetor de números após a conversão
    printf("\n\nVetor apos a conversao: ");
    for(i = 0; i < 7; i++) {
        printf("%d ", numeros[i]);
    }
}
