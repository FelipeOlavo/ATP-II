#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM_LINHA 4
#define NUM_COLUNA 3

void soma(int matriz[NUM_LINHA][NUM_COLUNA],int *soma_colunas){

    for(int i=0;i<NUM_COLUNA;i++){
        for(int j=0;j<NUM_LINHA;j++){
            *soma_colunas = *soma_colunas + matriz[j][i];
        }
    }
}

int main(){
    srand(time(NULL));
    int matriz[NUM_LINHA][NUM_COLUNA];

        for(int i=0;i<NUM_LINHA;i++){
            for(int j=0;j<NUM_COLUNA;j++){
                matriz[i][j] = (rand() % 10) + 1;
            }
        }
    int soma_colunas;

    printf("\nA matriz dada:\n");

    for(int i=0;i<NUM_LINHA;i++){
            for(int j=0;j<NUM_COLUNA;j++){
               printf("%d ",matriz[i][j]);
            }
        printf("\n");
        }
    soma(matriz,&soma_colunas);

    printf("\nA soma das colunas eh: %d\n",soma_colunas);
    return 0;
}
