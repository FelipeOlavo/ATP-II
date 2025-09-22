#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define NUM_LINHA 3
#define NUM_COLUNA 3


void rotacao_antihorario(int matriz[][NUM_COLUNA],int matriz_antihorario[][NUM_COLUNA]){

    for(int j=0;j<NUM_LINHA;j++){
        for(int i=0;i<NUM_COLUNA;i++){
            matriz_antihorario[NUM_COLUNA-1-j][i] = matriz[i][j];
        }
    }

}

int main(){
    srand(time(NULL));
    int matriz[NUM_LINHA][NUM_COLUNA];

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            matriz[i][j] = (rand() % 11) + 1;
        }
    }

    printf("\nMatriz normal:\n");

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            printf("%d ",matriz[i][j]);
        }
    printf("\n");
    }

    int matriz_antihorario[NUM_LINHA][NUM_COLUNA];

    rotacao_antihorario(matriz,matriz_antihorario);

    printf("\nMatriz rotacionado no sentido anti-horario:\n");

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            printf("%d ",matriz_antihorario[i][j]);
        }
    printf("\n");
    }


    return 0;
}
