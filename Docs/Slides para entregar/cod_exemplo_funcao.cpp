#include <stdio.h>

float calcularMedia(float a, float b) {
    float media = (a + b) / 2;
    return media;
}

int somar(int a, int b) {
    return a * b;
}

int main() {
    float num1, num2, media1, media2;
    int num3 = 5, num4 = 6;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    // Chamadas de funcao
    media1 = calcularMedia(num1, num2);
    media2 = calcularMedia(num2, somar(num3, num4));

    // Exibição do resultado
    printf("A media entre %.2f e %.2f e: %.2f\n", num1, num2, media1);
    printf("Segunda media calculada: %.2f\n", media2);
}
