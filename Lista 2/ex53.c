#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define NUM_LINHA 5
#define NUM_COLUNA 5

void segundo_menor_elemento(int matriz[][NUM_COLUNA],int *segundo_menor){
    // primeiro vou achar o menor elemento
    int menor = matriz[0][0];

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            if(matriz[i][j]<menor){
                menor = matriz[i][j];
            }
        }
    }

    *segundo_menor=matriz[0][0];

   // aqui vou fazer outro for em que eu comparo novamente os elementos e faco um if para achar o segundo elemento, quando ele for maior q o menor e menor q os demais elementos da matriz

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            if(matriz[i][j]>menor && matriz[i][j]<*segundo_menor){
                *segundo_menor = matriz[i][j];
            }
        }
    }


}

int main(){
    srand(time(NULL));
    int matriz[NUM_LINHA][NUM_COLUNA];

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            matriz[i][j] = (rand() % 500) + 1;
        }
    }

    int segundo_menor;

    segundo_menor_elemento(matriz,&segundo_menor);

    printf("\nA matriz dada:\n");

     for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            printf("%d ",matriz[i][j]);
        }
    printf("\n");
    }

    printf("\nO segundo menor elemento dessa matriz eh: %d",segundo_menor);



    return 0;
}
