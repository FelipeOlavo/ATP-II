#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define NUM_LINHA 4
#define NUM_COLUNA 4


void terceiro_maior(int matriz[][NUM_COLUNA],int *maior,int *segundo,int *terceiro){

    *maior=matriz[0][0];
    // primeiro acharei o maior

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            if(matriz[i][j]>*maior){
                *maior = matriz[i][j];
            }
        }
    }

    //achei o segundo maior

    *segundo = matriz[0][0];

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            if(matriz[i][j]>*segundo && matriz[i][j]<*maior){
                *segundo = matriz[i][j];
            }
        }
    }

    *terceiro= matriz[0][0];

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            if(matriz[i][j]>*terceiro && matriz[i][j]<*segundo && matriz[i][j]<*maior){
                *terceiro = matriz[i][j];
            }
        }
    }

}


int main(){
    int matriz[NUM_LINHA][NUM_COLUNA];

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            matriz[i][j] = (rand() % 501) + 1;
        }
    }

    printf("\nMATRIZ:\n");

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
           printf("%d ",matriz[i][j]);
        }
    printf("\n");

    }

    int maior,segundo,terceiro;

    terceiro_maior(matriz,&maior,&segundo,&terceiro);

    printf("\nDessa matriz\nMaior elemento eh: %d\nSegundo maior elemento eh: %d\nTerceiro maior elemento eh: %d",maior,segundo,terceiro);


    return 0;
}
