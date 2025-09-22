#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM_LINHA 3
#define NUM_COLUNA 3

void maximo(int matriz[NUM_LINHA][NUM_COLUNA],int *maior){
    *maior = matriz[0][0];
        for(int i=0;i<NUM_LINHA;i++){
            for(int j=0;j<NUM_COLUNA;j++){
                if(matriz[i][j]>*maior){
                    *maior = matriz[i][j];
                }
            }
        }
}

int main(){
    srand(time(NULL));
    int matriz[NUM_LINHA][NUM_COLUNA];
    int maior;
        for(int i=0;i<NUM_LINHA;i++){
            for(int j=0;j<NUM_COLUNA;j++){
                matriz[i][j] = (rand()%150) + 1;
            }
        }
    printf("\nA matriz:\n");

        for(int i=0;i<NUM_LINHA;i++){
            for(int j=0;j<NUM_COLUNA;j++){
                printf("%d ",matriz[i][j]);
            }
        printf("\n");
        }

    maximo(matriz,&maior);

    printf("\nO maior elemento dessa matriz eh: %d ",maior);

    return 0;
}
