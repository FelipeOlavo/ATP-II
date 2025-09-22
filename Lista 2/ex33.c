#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM_LINHA 5
#define NUM_COLUNA 5

void menor_elemento(int matriz[][NUM_COLUNA],int *menor){

    *menor = matriz[0][0];

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
                if(matriz[i][j]< *menor){
                        *menor = matriz[i][j];
                }
        }
    }

}

int main(){
    int matriz[NUM_LINHA][NUM_COLUNA];
    int menor;
    srand(time(NULL));

        for(int i=0;i<NUM_LINHA;i++){
            for(int j=0;j<NUM_COLUNA;j++){
                matriz[i][j] = (rand() % 350) + 50;
            }
        }
        printf("\nMatriz e seus elemtos:\n");

        for(int i=0;i<NUM_LINHA;i++){
            for(int j=0;j<NUM_COLUNA;j++){
            printf("%d ",matriz[i][j]);
            }
        printf("\n");
        }

    menor_elemento(matriz,&menor);
    printf("\nO menor elemento dessa matriz eh: %d",menor);

    return 0;
}
