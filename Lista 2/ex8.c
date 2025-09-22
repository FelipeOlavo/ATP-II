#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define NUM_LINHA 4
#define NUM_COLUNA 4

void rotation(int matriz[NUM_LINHA][NUM_COLUNA],int rotacionado[][NUM_COLUNA]){

    int i=0;
    for(int j=3;j>=0;j--){
        for(int k=0;k<NUM_LINHA;k++){
            rotacionado[k][i] = matriz[j][k];
        }
        i++;
    }

}

int main(){
    srand(time(NULL));
    int matriz[NUM_LINHA][NUM_COLUNA];

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            matriz[i][j] = (rand()%10) + 1;
        }
    }

    int matriz_rotacionado[NUM_LINHA][NUM_COLUNA];

    rotation(matriz,matriz_rotacionado);

    printf("\nA matriz normal:\n");

     for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            printf("%d ",matriz[i][j]);
        }
    printf("\n");
    }

    printf("\nA matriz rotacionada:\n");

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            printf("%d ",matriz_rotacionado[i][j]);
        }
    printf("\n");
    }

    return 0;
}
