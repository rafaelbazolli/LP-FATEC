#include <stdio.h>
#include <stdlib.h>
main()
{
    float VET[5]={1.1,2.2,3.3,4.4,5.5};
    float *F;
    int I;
    F = VET;
    //ESPECIFICAÇÃO DO QUE SE TRATA OS VALORES IMPRESSOS PELO PROGRAMA
    printf("Contador/valor/valor/endereco/endereco\n");
    //COMANDO PARA REPETIR O VETOR CINCO VEZES
    
    for(I=0;I<=4;I++){
        //CONTADOR
        printf("\nI = %d",I);
        //PRIMEIRO VALOR
        printf("\nVET[%d] = %.1f",I, VET[I]);
        //SEGUNDO VALOR
        printf("\n*(F + %d) = %.1f",I, *(F+I));
        //PRIMEIRO ENDEREÇO
        printf("\n&VET[%d] = %.X",I, &VET[I]);
        //SEGUNDO ENDEREÇO
        printf("\n(F + %d) = %.X",I, F+I);
        printf("\n\n");
    }
}