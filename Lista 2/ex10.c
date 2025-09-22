#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM_LINHA 4
#define NUM_COLUNA 4

void smaller(int matriz[NUM_LINHA][NUM_COLUNA],int *menor){
    *menor = matriz[0][0];
        for(int i=0;i<NUM_LINHA;i++){
            for(int j=0;j<NUM_COLUNA;j++){
                if(matriz[i][j]<*menor){
                    *menor = matriz[i][j];
                }
            }
        }
}

int main(){
    srand(time(NULL));

    int matriz[NUM_LINHA][NUM_COLUNA];
        for(int i=0;i<NUM_LINHA;i++){
            for(int j=0;j<NUM_COLUNA;j++){
                matriz[i][j] = (rand()% 150) + 1;
            }
        }

    int menor;

         for(int i=0;i<NUM_LINHA;i++){
            for(int j=0;j<NUM_COLUNA;j++){
                printf("%d ",matriz[i][j]);
            }
        printf("\n");
        }

    smaller(matriz,&menor);

        printf("\nO menor elemento dessa matriz eh: %d",menor);
    return 0;
}
