#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define NUM_LINHA 5
#define NUM_COLUNA 5

void segunda(int matriz[][NUM_COLUNA],int *segunda){
        int maior=matriz[0][0];
        *segunda = matriz[0][0];

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            if(matriz[i][j]>maior){
                maior=matriz[i][j];
            }
        }
    }

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
             if(matriz[i][j]>*(segunda) && matriz[i][j]<maior){
                *segunda = matriz[i][j];
            }
        }
    }

    printf("\nO maior elemento eh: %d",maior);
}

int main(){
    srand(time(NULL));
    int matriz[NUM_LINHA][NUM_COLUNA];

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            matriz[i][j] = (rand()% 150) + 1;
        }
    }

    printf("\nMatriz dada:\n");

        for(int i=0;i<NUM_LINHA;i++){
            for(int j=0;j<NUM_COLUNA;j++){
            printf("%d ",matriz[i][j]);
        }
    printf("\n");
    }

    int segunda_maior;
    segunda(matriz,&segunda_maior);

    printf("\nO segundo maior elemento dessa matriz eh: %d",segunda_maior);

    return 0;

}
