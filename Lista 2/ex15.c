#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM_LINHA 4
#define NUM_COLUNA 4


void inversao(int matriz_principal[NUM_LINHA][NUM_COLUNA],int matriz_invertida[NUM_LINHA][NUM_COLUNA]){

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            matriz_invertida[i][j] = matriz_principal[NUM_LINHA-i-1][j];
        }
    }
}

int main(){
    int matriz_principal[NUM_LINHA][NUM_COLUNA];
    srand(time(NULL));
    int i,j;
    int matriz_invertida[NUM_LINHA][NUM_COLUNA];

        for(i=0;i<NUM_LINHA;i++){
            for(j=0;j<NUM_COLUNA;j++){
                matriz_principal[i][j] = (rand() % 20) + 1;
            }
        }
    printf("\nMatriz antes da sua inversa:\n");

        for(i=0;i<NUM_LINHA;i++){
            for(j=0;j<NUM_COLUNA;j++){
                printf("%d ",matriz_principal[i][j]);
            }
        printf("\n");
        }
    inversao(matriz_principal,matriz_invertida);
    printf("\nA matriz invertida ficou:\n");

        for(int i=0;i<NUM_LINHA;i++){
            for(int j=0;j<NUM_COLUNA;j++){
                printf("%d ",matriz_invertida[i][j]);
            }
        printf("\n");
        }

    return 0;
}
