#include <stdio.h>  // Responsavel pelos comandos printf, scanf
#include <string.h>  // Responsavel pelos comandos gets e strlen
#include <ctype.h> // Responsavel pelo comando isdigit


int main() {
    int i, j, tamanho, aux = 0, mensagem[4] = {0};  // {0} inicializa todas as variaveis desse vetor como 0
    char  cpf[4][15];  // (xxx.xxx.xxx-xx) + o caractere nulo, totalizando 15

    // Laco for para receber os 4 cpfs 
    for(i = 0; i < 4; i++) {
        fflush(stdin);
        printf("Digite um CPF: ");
        gets(cpf[i]);
    }

    // Percorrendo o array com os cpfs
    for(i = 0; i < 4; i++) {
        tamanho = strlen(cpf[i]);  // Armazenando o tamanho do cpf atual
        aux = 0;

        // Validando o tamanho do cpf digitado. Se for 14, executa o bloco
        if(tamanho == 14) {

            // Validando se as pontuacoes estao na posicao correta. Se sim, ele segue a execucao
            if(cpf[i][3] == '.' && cpf[i][7] == '.' && cpf[i][11] == '-') {

                // Laco for para percorrer os caracteres de cada cpf
                for(j = 0; j < tamanho; j++) {

                    // Usando if para pular as posicoes onde deve ter pontuacao
                    if(j == 3 || j == 7 || j == 11) {
                        ;                
                    } else {
                        // Comando isdigit usado para validar se e um numero. Se sim, nao faz nada(';'); Senao, ele da um break     
                        if(isdigit(cpf[i][j]));
                        else
                            aux = 1;
                    }
                }
                // Se invalido for 1 apos ele ter percorrido a string, mensagem[i] deve se manter 0. Senao, mensagem[i] sera 1
                mensagem[i] = (aux == 0) ? 1 : 0;
            }       
        }
    }

    // Laco for para exibir os cpfs apos a validacao
    printf("\n\nValidacao realizada: \n\n");
    for(i = 0; i < 4; i++) {
        printf("%s = %s \n", cpf[i], (mensagem[i] == 1) ? "OK" : "Formato Invalido!");
        // Como alternativa, o operador ternario tambem pode ser usado dessa forma para enviar uma string como parametro
    }
}
