#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM_DOIS 2
#define NUM_TRES 3

void multiplication(int matrizA[][NUM_TRES],int matrizB[][NUM_DOIS],int matrizC[][NUM_DOIS]){

    for(int i=0;i<NUM_DOIS;i++){
        for(int j=0;j<NUM_DOIS;j++){
            matrizC[i][j]=0;
            for(int k=0;k<3;k++){
                matrizC[i][j] += (matrizA[i][k] * matrizB[k][j]);
            }
        }
    }

}

int main(){
    srand(time(NULL));
    int matriz_A[NUM_DOIS][NUM_TRES];
    int matriz_B[NUM_TRES][NUM_DOIS];

        for(int i=0;i<NUM_DOIS;i++){
            for(int j=0;j<NUM_TRES;j++){
                matriz_A[i][j] = (rand()%11);
            }
        }
    printf("\nMatriz A:\n");

        for(int i=0;i<NUM_DOIS;i++){
            for(int j=0;j<NUM_TRES;j++){
                printf("%d ",matriz_A[i][j]);
            }
            printf("\n");
        }

        for(int i=0;i<NUM_TRES;i++){
            for(int j=0;j<NUM_DOIS;j++){
                matriz_B[i][j] = (rand()%11);
            }
        }

    printf("\nMatriz B:\n");

         for(int i=0;i<NUM_TRES;i++){
            for(int j=0;j<NUM_DOIS;j++){
                printf("%d ",matriz_B[i][j]);
            }
            printf("\n");
        }

    int matriz_C[NUM_DOIS][NUM_DOIS];

    multiplication(matriz_A,matriz_B,matriz_C);

    printf("\nResultado da matriz_A[2][3] x matriz_B[3][2]\n");

        for(int i=0;i<NUM_DOIS;i++){
            for(int j=0;j<NUM_DOIS;j++){
                printf("%d ",matriz_C[i][j]);
            }
        printf("\n");
        }

    return 0;
}
