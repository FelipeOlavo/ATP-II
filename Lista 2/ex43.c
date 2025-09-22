#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define NUM_LINHA 4
#define NUM_COLUNA 4


void soma_abaixo(int matriz[][NUM_COLUNA],int *soma){

    for(int i=3;i>=1;i--){
        for(int j=i-1;j>=0;j--){
            *soma += matriz[i][j];
        }

    }
}

int main(){
    srand(time(NULL));
    int matriz[NUM_LINHA][NUM_COLUNA];

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            matriz[i][j] = (rand () %11) + 1;
        }
    }

    int soma=0;
    soma_abaixo(matriz,&soma);

    printf("\nA matriz eh:\n");

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
           printf("%d ",matriz[i][j]);
        }
    printf("\n");
    }

    printf("\nA soma abaixo da diagonal da matriz eh: %d",soma);


    return 0;
}
