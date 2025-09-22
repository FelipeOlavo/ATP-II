#include <stdio.h>

void iguais(int matrizA[][2],int matrizB[][2]){
    int igual=1;
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            if(matrizA[i][j]!=matrizB[i][j]){
                igual=0;
            }
        if(igual)
            printf("Iguais! ");
        else
            printf("Difrentes! ");
}

int main(){
    int matriz_A[2][2],matriz_B[2][2];
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
               printf("Digite o numero da matriz A na posicao i = %d e j = %d : ",i,j);
               scanf("%d",&matriz_A[i][j]);
            }
        }
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
               printf("Digite o numero da matriz B na posicao i = %d e j = %d : ",i,j);
               scanf("%d",&matriz_B[i][j]);
            }
        }
        iguais(matriz_A,matriz_B);
    return 0;
}

