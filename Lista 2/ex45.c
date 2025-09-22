#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define NUM_LINHA 3
#define NUM_COLUNA 3

void transposicao(int matriz[][NUM_COLUNA],int transposta[][NUM_COLUNA]){

    //transpondo
    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            transposta[j][i]= matriz[i][j];
        }
    }

}

void multiplicacao(int matriz[][NUM_COLUNA],int transposta[][NUM_COLUNA],int matriz_resultado[][NUM_COLUNA]){

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            matriz_resultado[i][j]=0;
                for(int k=0;k<NUM_LINHA;k++){
                    matriz_resultado[i][j] += (matriz[i][k] * transposta[k][j]);
                }
        }
    }

}

int main(){
    srand(time(NULL));
    int matriz[NUM_LINHA][NUM_COLUNA];
    int transposta[NUM_LINHA][NUM_COLUNA];

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            matriz[i][j] = (rand() % 11 ) + 1;
        }
    }

    printf("\nA matriz principal:\n");

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            printf("%d ",matriz[i][j]);
        }
    printf("\n");
    }

    transposicao(matriz,transposta);

    printf("\nSua transposta:\n");

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            printf("%d ",transposta[i][j]);
        }
    printf("\n");
    }

    int matriz_resultado[NUM_LINHA][NUM_COLUNA];

    multiplicacao(matriz,transposta,matriz_resultado);

    printf("\nO resultado da matriz 3x3 pela a transposta 3x3 \n");

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            printf("%d ",matriz_resultado[i][j]);
        }
    printf("\n");
    }
}
