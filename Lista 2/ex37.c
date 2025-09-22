#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#define NUM_LINHA_A 2
#define NUM_COLUNA_A 3
#define NUM_LINHA_B 3
#define NUM_COLUNA_B 4


void multiplicacao(int matrizA[][NUM_COLUNA_A],int matrizB[][NUM_COLUNA_B],int matrizC[][NUM_COLUNA_B]){

    for(int i=0;i<NUM_LINHA_A;i++){
        for(int j=0;j<NUM_COLUNA_B;j++){
                matrizC[i][j]=0;
            for(int k=0;k<NUM_LINHA_B;k++){
                matrizC[i][j] += (matrizA[i][k] * matrizB[k][j]);
            }
        }
    }

}

int main(){
    srand(time(NULL));
    int matriz_A[NUM_LINHA_A][NUM_COLUNA_A];
    int matriz_B[NUM_LINHA_B][NUM_COLUNA_B];

        for(int i=0;i<NUM_LINHA_A;i++){
            for(int j=0;j<NUM_COLUNA_A;j++){
                matriz_A[i][j] = (rand() % 10) + 1;
            }
        }

        printf("\nMatriz A:\n");

        for(int i=0;i<NUM_LINHA_A;i++){
            for(int j=0;j<NUM_COLUNA_A;j++){
                printf("%d ",matriz_A[i][j]);
            }
        printf("\n");
        }

        for(int i=0;i<NUM_LINHA_B;i++){
            for(int j=0;j<NUM_COLUNA_B;j++){
                matriz_B[i][j] = (rand() % 10) + 1;
            }
        }

        printf("\nMatrizB:\n");

        for(int i=0;i<NUM_LINHA_B;i++){
            for(int j=0;j<NUM_COLUNA_B;j++){
                printf("%d ",matriz_B[i][j]);
            }
        printf("\n");
        }

        int matriz_C[NUM_LINHA_A][NUM_COLUNA_B];

        multiplicacao(matriz_A,matriz_B,matriz_C);

        printf("\nMatrizC:\n");

        for(int i=0;i<NUM_LINHA_A;i++){
            for(int j=0;j<NUM_COLUNA_B;j++){
                printf("%d ",matriz_C[i][j]);
            }
        printf("\n");
        }



    return 0;
}
