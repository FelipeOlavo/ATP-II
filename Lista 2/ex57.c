#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define NUM_DOIS 2
#define NUM_TRES 3
// eu preferi definir dessa maneira para n confundir a relação de linha e de coluna de uma matriz;

void multiplicacao(int matrizA[][NUM_TRES],int matrizB[][NUM_DOIS],int matriC[][NUM_DOIS]){

    for(int i=0;i<NUM_DOIS;i++){
        for(int j=0;j<NUM_DOIS;j++){
            matriC[i][j] = 0;
                for(int k=0;k<NUM_TRES;k++){
                    matriC[i][j] += matrizA[i][k] * matrizB[k][j];
                }
        }
    }

}

int main(){
    srand(time(NULL));
    int matriz_A[NUM_DOIS][NUM_TRES];
    int matriz_B[NUM_TRES][NUM_DOIS];
    int matriz_C[NUM_DOIS][NUM_DOIS];

    for(int i=0;i<NUM_DOIS;i++){
        for(int j=0;j<NUM_TRES;j++){
            matriz_A[i][j] = (rand() % 11) + 1;
        }
    }

    printf("\nMATRIZ A:\n");

     for(int i=0;i<NUM_DOIS;i++){
        for(int j=0;j<NUM_TRES;j++){
            printf("%d ",matriz_A[i][j]);
        }
    printf("\n");
    }

    for(int i=0;i<NUM_TRES;i++){
            for(int j=0;j<NUM_DOIS;j++){
                matriz_B[i][j] = (rand() % 11) + 1;
            }
    }

    printf("\nMATRIZ B:\n");

       for(int i=0;i<NUM_TRES;i++){
            for(int j=0;j<NUM_DOIS;j++){
                printf("%d ",matriz_B[i][j]);
            }
        printf("\n");
    }

    multiplicacao(matriz_A,matriz_B,matriz_C);

    printf("\nO Resultado da multiplicacao da MATRIZ A 2X3 * MATRIZ B 3X2 EH=\n");

    for(int i=0;i<NUM_DOIS;i++){
        for(int j=0;j<NUM_DOIS;j++){
            printf("%d ",matriz_C[i][j]);
        }
    printf("\n");
    }

    return 0;
}
