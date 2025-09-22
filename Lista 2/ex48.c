#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define NUM_LINHA 4
#define NUM_COLUNA 4

void media_diagonal(int matriz[][NUM_COLUNA],float *media){

    float soma=0;
    int tamanho=0;

    for(int i=3;i>=1;i--){
        for(int j=i-1;j>=0;j--){
            soma = soma + matriz[j][i];
            tamanho++;
        }
    }

    *media = soma/tamanho;
}

int main(){
    srand(time(NULL));
    int matriz[NUM_LINHA][NUM_COLUNA];

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            matriz[i][j] = (rand() % 11) + 1;

        }
    }

    printf("\nA matriz 4 x 4:\n");

     for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            printf("%d ",matriz[i][j]);
        }
    printf("\n");
    }

    float media = 0;

    media_diagonal(matriz,&media);
    printf("\nA media dos elementos acima da diagonal principal eh: %.2f",media);


    return 0;
}

