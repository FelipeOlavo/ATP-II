#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM_LINHA 5
#define NUM_COLUNA 5


void ordem_coluna(int matriz[][NUM_COLUNA]){

   int aux=matriz[0][0];
    for(int j=0;j<NUM_COLUNA;j++){
        for(int i=0;i<NUM_LINHA-1;i++){
            //outro laco de repeticao para verificar se esta na ordem
            for(int k=0;k<NUM_LINHA-1-i;k++){
                if(matriz[k][j]>matriz[k+1][j]){
                    aux = matriz[k][j];
                    matriz[k][j] = matriz[k+1][j];
                    matriz[k+1][j] = aux;
                }
            }
        }
    }

}

int main(){
    int matriz[NUM_LINHA][NUM_COLUNA];
    srand(time(NULL));

        for(int i=0;i<NUM_LINHA;i++){
            for(int j=0;j<NUM_COLUNA;j++){
                matriz[i][j] = (rand() % 50 ) + 1;
            }
        }

    printf("\nMatriz sem esta na ordem\n");

        for(int i=0;i<NUM_LINHA;i++){
            for(int j=0;j<NUM_COLUNA;j++){
                printf("%d ",matriz[i][j]);
            }
        printf("\n");
        }

    ordem_coluna(matriz);
    printf("\nColuna ordenada:\n");

         for(int i=0;i<NUM_LINHA;i++){
            for(int j=0;j<NUM_COLUNA;j++){
                printf("%d ",matriz[i][j]);
            }
        printf("\n");
        }

    return 0;
}
