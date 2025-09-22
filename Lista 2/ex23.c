#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM_LINHA 3
#define NUM_COLUNA 3

void matriz_determinante(int matriz[][NUM_COLUNA],int *determinate){
    int soma = (matriz[0][0] * matriz[1][1] * matriz[2][2]) + (matriz[0][1] * matriz[1][2]* matriz[2][0])
    + (matriz[0][2] * matriz[1][0] * matriz[2][1]);
    int sub = (matriz[0][1] * matriz[1][0] * matriz[2][2] ) + (matriz[0][0] * matriz[1][2] * matriz[2][1])
    + (matriz[0][2] * matriz[1][1] * matriz[2][0]);
    *determinate = soma - sub;

}


int main(){
    srand(time(NULL));
    int matriz[NUM_LINHA][NUM_COLUNA];

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            matriz[i][j] = (rand() % 10) + 1;
        }
    }

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            printf("%d ",matriz[i][j]);
        }
    printf("\n");
    }
    int determinante;
    matriz_determinante(matriz,&determinante);

    printf("\nO determinante eh: %d",determinante);


    return 0;
}
