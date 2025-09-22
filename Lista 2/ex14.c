#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM_LINHA 3
#define NUM_COLUNA 3

void copia(int matriz[NUM_LINHA][NUM_COLUNA],int matriz_copia[NUM_LINHA][NUM_COLUNA]){

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            matriz_copia[i][j] = matriz[i][j];
        }
    }
}

int main(){
    int matriz_A[NUM_LINHA][NUM_COLUNA];
    srand(time(NULL));

        for(int i=0;i<NUM_LINHA;i++){
            for(int j=0;j<NUM_COLUNA;j++){
                matriz_A[i][j] = (rand() % 10) + 1;
            }
        }
    int matriz_copia[NUM_LINHA][NUM_COLUNA];

    printf("A matriz inicial: \n");

        for(int i=0;i<NUM_LINHA;i++){
            for(int j=0;j<NUM_COLUNA;j++){
               printf("%d ",matriz_A[i][j]);
            }
            printf("\n");
        }

    copia(matriz_A,matriz_copia);

           printf("\nA Matriz copiada:\n") ;

         for(int i=0;i<NUM_LINHA;i++){
            for(int j=0;j<NUM_COLUNA;j++){
               printf("%d ",matriz_copia[i][j]);
            }
            printf("\n");
        }

    return 0;
}
