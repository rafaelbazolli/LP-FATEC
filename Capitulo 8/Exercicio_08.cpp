#include <stdio.h>  // Responsavel pelos comandos printf e scanf
#include <string.h>  // Responsavel pelos comandos gets e strlen

int main() {
    int i, j, letrasO = 0, palavrasComO = 0, silabaEL = 0, comecaAterminaO = 0, tam, aux;
    char nomes[6][50];

    // Laco for para receber os 6 nomes
    for(i = 0; i < 6; i++) {
        fflush(stdin);
        printf("Digite um nome: ");
        gets(nomes[i]);

        aux = i;  // Referencia para quais palavras terao a letra 'o'. Ele sempre se iguala ao numero da linha a cada nova iteracao no array
        tam = strlen(nomes[i]);

        for(j = 0; j < tam; j++) {  // Laco for para percorrer o array de nomes
            // Validando quantas letras 'o' tem no nome
            if((nomes[i][j] == 'o') || (nomes[i][j] == 'O')) {
                letrasO += 1;
                palavrasComO += (aux == i) ? 1 : 0;  // Se aux for igual a i, e porque foi a primeira vez nessa linha que encontrou a letra 'o'. 
                aux++;  // incrementando aux, nao ira mais ser incrementado palavrasComO nessa palavra, somente na proxima iteracao do laco for da linha 9
            }
        }

        // Validando se o nome comeca com 'a' e termina com 'o'
        if((nomes[i][0] == 'a') || (nomes[i][0] == 'A')) {
            if((nomes[i][tam - 1] == 'o') || (nomes[i][tam - 1] == 'O')) {
                comecaAterminaO += 1;
            }
        }

        // Validando se algum nome termina com 'el' ou 'EL'
        if((nomes[i][tam - 2] == 'e') || (nomes[i][tam - 2] == 'E')) {
            if((nomes[i][tam - 1] == 'l') || (nomes[i][tam - 1] == 'L')) {
                silabaEL += 1;
            }
        } // Nota: nesse caso tambem poderia ser usada a funcao strcasecmp, da biblioteca string.h
    }

    printf("\n\nNos nomes lidos, temos %d letras O, encontradas em %d palavras.", letrasO, palavrasComO);
    printf("\nNos nomes lidos, temos %d nomes que terminam em 'el'. ", silabaEL);
    printf("\nNos nomes lidos, temos %d nomes que comecam em 'a' terminam em 'o'. ", comecaAterminaO);
}
