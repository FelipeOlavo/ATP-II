#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM_LINHA 5
#define NUM_COLUNA 5

void soma(int matriz[NUM_LINHA][NUM_COLUNA],int *diagonal){

    for(int i=0;i<NUM_LINHA;i++){
        *diagonal = *diagonal + matriz[i][i];
    }
}

int main(){
    srand(time(NULL));
    int matriz[NUM_LINHA][NUM_COLUNA];
    int soma_diagonal=0;

        for(int i=0;i<NUM_LINHA;i++){
            for(int j=0;j<NUM_COLUNA;j++){
             matriz[i][j]= (rand()%10)+1;
            }
        }

        for(int i=0;i<NUM_LINHA;i++){
            for(int j=0;j<NUM_COLUNA;j++){
            printf("%d ",matriz[i][j]);
            }
        printf("\n");

        }
        soma(matriz,&soma_diagonal);
    printf("A soma da diagonal principal eh: %d",soma_diagonal);

    return 0;
}
