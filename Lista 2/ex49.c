#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define NUM_TRES 3
#define NUM_QUATRO 4
// eu defini apenas 3 e 4, pois se eu definisse num_lin 3 , na hora q eu colocasse esse tamanho na tranposta, ficaria confuso.
// professor o enunciado ficou ambiguo, n sei se era para somar cada elemento da matriz ou apenas para imprimir ela. Portanto, fiz os dois.

void calculo_transposta(int matriz[][NUM_QUATRO],int transposta[][NUM_TRES],int *soma){

    for(int i=0;i<NUM_TRES;i++){
        for(int j=0;j<NUM_QUATRO;j++){
            transposta[j][i] = matriz[i][j];
        }
    }

    for(int i=0;i<NUM_QUATRO;i++){
        for(int j=0;j<NUM_TRES;j++){
            *soma = *soma + transposta[i][j];
        }
    }

}

int main(){
    srand(time(NULL));
    int matriz[NUM_TRES][NUM_QUATRO];

    for(int i=0;i<NUM_TRES;i++){
        for(int j=0;j<NUM_QUATRO;j++){
            matriz[i][j]= (rand() % 11) + 1;
        }
    }

    printf("\nAqui esta a matriz:\n");

     for(int i=0;i<NUM_TRES;i++){
        for(int j=0;j<NUM_QUATRO;j++){
           printf("%d ",matriz[i][j]);
        }
    printf("\n");
    }

    int transposta[NUM_QUATRO][NUM_TRES];
    int soma=0;

    calculo_transposta(matriz,transposta,&soma);

    printf("\nAqui esta a sua transposta:\n");

    for(int i=0;i<NUM_QUATRO;i++){
        for(int j=0;j<NUM_TRES;j++){
           printf("%d ",transposta[i][j]);
        }
    printf("\n");
    }

    printf("\nE o resultado da soma de seus elementos eh: %d",soma);

    return 0;
}
