#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define NUM_LINHA 3
#define NUM_COLUNA 3

void semelhante(int matrizA[][NUM_COLUNA],int matrizB[][NUM_COLUNA]){

    // vou declar como sendo semelhante, quando aproximadamente 80 % dos valores das duas são iguais!
    int igual;
        for(int i=0;i<NUM_LINHA;i++){
            for(int j=0;j<NUM_COLUNA;j++){
                if(matrizA[i][j]==matrizB[i][j]){
                        igual++;
                }
            }
        }
    if(igual>=7){
        printf("Essas matrizes sao semelhantes! ");
    }else{
        printf("Essas matrizes sao diferentes! ");
    }

}

int main(){
    srand(time(NULL));
    int matriz_A[NUM_LINHA][NUM_COLUNA];
    int matriz_B[NUM_LINHA][NUM_COLUNA];

        for(int i=0;i<NUM_LINHA;i++){
            for(int j=0;j<NUM_COLUNA;j++){
                    printf("Digite o valor %d no ponto i=%d e j=%d: ",i+1,i,j);
                    scanf("%d",&matriz_A[i][j]);
            }
        }

        for(int i=0;i<NUM_LINHA;i++){
            for(int j=0;j<NUM_COLUNA;j++){
                    printf("Digite o valor %d no ponto i=%d e j=%d: ",i+1,i,j);
                    scanf("%d",&matriz_B[i][j]);
            }
        }

    printf("\nMatriz A:\n");


        for(int i=0;i<NUM_LINHA;i++){
            for(int j=0;j<NUM_COLUNA;j++){
                   printf("%d ",matriz_A[i][j]);
            }
        printf("\n");
        }

    printf("\nMatriz B:\n");

        for(int i=0;i<NUM_LINHA;i++){
            for(int j=0;j<NUM_COLUNA;j++){
                   printf("%d ",matriz_B[i][j]);
            }
        printf("\n");
        }

    semelhante(matriz_A,matriz_B);

    return 0;
}
