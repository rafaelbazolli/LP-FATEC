#include <stdio.h> 
#include <string.h>

int main() {
    int i, j, tamanho, mensagem[7] = {0};  // {0} inicializa todas as posicoes do vetor com o valor 0
    char  datas[7][11];

    // Laco for para receber as 6
    for(i = 0; i < 7; i++) {
        fflush(stdin);
        printf("Digite uma data: ");
        gets(datas[i]);
    }

    // Laco for para percorrer as datas digitadas
    for(i = 0; i < 7; i++) {
        tamanho = strlen(datas[i]);  // Armazenando o tamanho da palavra atual

        for(j = 0; j < tamanho; j++) {
            if(tamanho == 10) {  // Caso tamanho seja 10, pode ser que a string esteja dentro do padrao xx/xx/xxxx
                if(datas[i][2] == '/' && datas[i][5] == '/')
                    mensagem[i] = 1;  // Somente as posicoes que forem consideradas validas terao o valor '1'
            }
        }
    }

    // Laco for para exibir as datas com as validacoes correspondentes
    printf("\n\nDatas apos a validacao: \n");
    for(i = 0; i < 7; i++) {
        printf("%s = %s\n", datas[i], (mensagem[i] == 1) ? "OK" : "Formato Invalido!");
        // Como alternativa, o operador ternario tambem pode ser usado dessa forma para enviar uma string como parametro
    }
}