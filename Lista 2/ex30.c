#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM_LINHA 4
#define NUM_COLUNA 4

void media_matriz(int matriz[][NUM_COLUNA],float *media){

    float soma=0;

        for(int i=0;i<NUM_LINHA;i++){
            for(int j=0;j<NUM_COLUNA;j++){
                soma = soma + matriz[i][j];
            }
        }

        *media = soma/(NUM_LINHA*NUM_COLUNA);
}

int main(){

    int matriz[NUM_LINHA][NUM_COLUNA];
    srand(time(NULL));

        for(int i=0;i<NUM_LINHA;i++){
            for(int j=0;j<NUM_COLUNA;j++){
                matriz[i][j] = (rand() % 11) + 1;
            }
        }

        printf("\nMATRIZ:\n");

         for(int i=0;i<NUM_LINHA;i++){
            for(int j=0;j<NUM_COLUNA;j++){
                printf("%d ",matriz[i][j]);
            }
        printf("\n");
        }

    float media;
    media_matriz(matriz,&media);

    printf("\nA media dos elementos dessa matriz eh: %.2f",media);

    return 0;
}
