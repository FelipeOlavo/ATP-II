#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM_LINHA 3
#define NUM_COLUNA 3

void verificacao_par(int matriz[NUM_LINHA][NUM_COLUNA],int *par){

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            if(matriz[i][j] % 2 ==0){
                (*par)++;
            }
        }
    }
}

int main(){
    srand(time(NULL));
    int matriz[NUM_LINHA][NUM_COLUNA];
        for(int i=0;i<NUM_LINHA;i++){
            for(int j=0;j<NUM_COLUNA;j++){
                matriz[i][j] = (rand() % 150) + 1;
            }
        }
    printf("\nA matriz feita:\n");
        for(int i=0;i<NUM_LINHA;i++){
            for(int j=0;j<NUM_COLUNA;j++){
                printf("%d ",matriz[i][j]);
            }
        printf("\n");
        }

    int elemento_par;
    verificacao_par(matriz,&elemento_par);

    printf("\nO numero total de elementos par nessa matriz eh: %d",elemento_par);

    return 0;
}
