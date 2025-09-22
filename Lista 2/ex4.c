#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void multiplicacao(int matrizA[3][3],int matrizB[3][3],int matrizC[3][3]){

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            matrizC[i][j]=0;
                for(int k=0;k<3;k++){
                    matrizC[i][j] += (matrizA[i][k] * matrizB[k][j]);
                }
        }
    }

}

int main(){
    int matriz_A[3][3],matriz_B[3][3],matrizC[3][3];
    srand(time(NULL));
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                matriz_A[i][j]=(rand ()% 10)+1;
            }
        }
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                matriz_B[i][j]=(rand ()% 10)+1;
            }
        }

    printf("\nMatriz A:\n");

        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                printf("%d ",matriz_A[i][j]);
            }
            printf("\n");
        }

    printf("\nMatriz B:\n");
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                printf("%d ",matriz_B[i][j]);
            }
            printf("\n");
        }
    multiplicacao(matriz_A,matriz_B,matrizC);

     printf("\nResultado da multiplicacao de Matriz A x Matriz B:\n");

        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                printf("%d ",matrizC[i][j]);
            }
            printf("\n");
        }


    return 0;
}
