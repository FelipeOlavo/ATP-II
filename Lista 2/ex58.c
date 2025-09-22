#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define NUM_LINHA 3
#define NUM_COLUNA 3


void media_matriz(int matriz[][NUM_COLUNA],int tamanho,float *media){

    float soma=0;

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            soma = soma + matriz[i][j];
        }
    }
    *media = soma/tamanho;
}


int main(){
    srand(time(NULL));
    int matriz[NUM_LINHA][NUM_COLUNA];
    float media=0;
    int tamanho=0;

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            matriz[i][j] = (rand() % 11) + 1;
            tamanho++;
        }
    }

    media_matriz(matriz,tamanho,&media);

    printf("\nA matriz dada:\n");

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
           printf("%d ",matriz[i][j]);
        }
    printf("\n");
    }

    printf("\nA media %.2f",media);

    return 0;
}
