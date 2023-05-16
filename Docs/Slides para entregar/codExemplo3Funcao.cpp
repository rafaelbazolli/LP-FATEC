#include <stdio.h>

void somar(int a, int b) {
    int resp = a + b;
    printf("\nSoma: %d + %d = %d", a, b, resp);
}

int main() {
    int num1 = 5, num2 = 10;

    // Chamando a função somar(), e passando seus parâmetros
    somar(num1, num2);

    /* Nesse caso, não podemos realizar nenhuma operação no restante 
    da função main() reaproveitando do valor da soma realizado pela função
    acima. 
    Se quiséssemos pegar o valor da soma de num1 + num2, e usar para outra 
    operação posteriormente, como pra uma multiplicação, divisão, entre outras, 
    não teríamos como. 
    É para esse tipo de caso, e para várias outras situações, 
    que o uso do 'return' se faz necessário. */
}
