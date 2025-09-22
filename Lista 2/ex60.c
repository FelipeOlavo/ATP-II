#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define NUM_LINHA 5
#define NUM_COLUNA 5


void rotacao(int matriz[][NUM_COLUNA],int matriz_rotacionada[][NUM_COLUNA]){

   for(int j=0;j<NUM_LINHA;j++){
        for(int i=0;i<NUM_LINHA;i++){
            matriz_rotacionada[NUM_LINHA-1-j][i] = matriz[i][j];
        }
   }

}


int main(){
    srand(time(NULL));
    int matriz[NUM_LINHA][NUM_COLUNA];

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            matriz[i][j] = (rand()% 11 ) + 1;
        }
    }

    printf("\nMatriz antes de sua rotacao:\n");

      for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
           printf("%d ",matriz[i][j]);
        }
    printf("\n");
    }

    int matriz_rotacionado[NUM_LINHA][NUM_COLUNA];

    rotacao(matriz,matriz_rotacionado);


    printf("\nMatriz depois de sua rotacao:\n");

     for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
           printf("%d ",matriz_rotacionado[i][j]);
        }
    printf("\n");
    }

    return 0;
}
