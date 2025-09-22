#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM_LINHA 4
#define NUM_COLUNA 4

void ordenation(int matriz[NUM_LINHA][NUM_COLUNA]){
    int aux;

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA-1;j++){
            // esse for eh usado apenas para ficar verificando varias vezes, para ver se a ordenacao esta correta
            for(int k=0;k<NUM_COLUNA-1-j;k++){
                if(matriz[i][k]>matriz[i][k+1]){
                    aux = matriz[i][k];
                    matriz[i][k]= matriz[i][k+1];
                    matriz[i][k+1] = aux;
                }
            }
        }
    }


}

int main(){
    srand(time(NULL));
    int matriz[NUM_LINHA][NUM_COLUNA];

        for(int i=0;i<NUM_LINHA;i++){
            for(int j=0;j<NUM_COLUNA;j++){
                matriz[i][j] = (rand() % 100) + 1;
            }
        }

    printf("\nMatriz antes:\n");

        for(int i=0;i<NUM_LINHA;i++){
                for(int j=0;j<NUM_COLUNA;j++){
                    printf("%d ",matriz[i][j]);
                }
                printf("\n");
            }

        ordenation(matriz);
        printf("\nMatriz depois da ordenacao:\n");

         for(int i=0;i<NUM_LINHA;i++){
            for(int j=0;j<NUM_COLUNA;j++){
                printf("%d ",matriz[i][j]);
            }
            printf("\n");
         }

    return 0;
}
