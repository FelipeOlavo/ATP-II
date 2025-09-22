#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM_LINHA 2
#define NUM_COLUNA 4

void media_matriz(int matriz[NUM_LINHA][NUM_COLUNA],float *media){
    int soma=0;
    int i,j;
        for(i=0;i<NUM_LINHA;i++){
            for(j=0;j<NUM_COLUNA;j++){
                soma = soma + matriz[i][j];
            }
        }
    *media = soma /(i*j);
}

int main(){
    srand(time(NULL));
    int matriz[NUM_LINHA][NUM_COLUNA];
        for(int i=0;i<NUM_LINHA;i++){
            for(int j=0;j<NUM_COLUNA;j++){
                matriz[i][j]= (rand() % 100) + 1;
            }
        }

    float media;

        printf("\nA matriz:\n");

        for(int i=0;i<NUM_LINHA;i++){
            for(int j=0;j<NUM_COLUNA;j++){
               printf("%d ",matriz[i][j]);
            }
        printf("\n");
        }
    media_matriz(matriz,&media);

        printf("\nA media dos elementos dessa matriz eh: %.2f",media);

    return 0;
}
