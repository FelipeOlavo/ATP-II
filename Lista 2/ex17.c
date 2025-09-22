#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM_LINHA 3
#define NUM_COLUNA 3

void localizar(int matriz[NUM_LINHA][NUM_COLUNA],int *linha,int *coluna,int numero){
        for(int i=0;i<NUM_LINHA;i++){
            for(int j=0;j<NUM_COLUNA;j++){
                if(matriz[i][j] == numero){
                    *linha = i;
                    *coluna = j;

                }
            }
        }
}

int main(){
     int matriz[NUM_LINHA][NUM_COLUNA];
     srand(time(NULL));

        for(int i=0;i<NUM_LINHA;i++){
            for(int j=0;j<NUM_COLUNA;j++){
                matriz[i][j] = (rand()%1000) + 1 ;
            }
        }
         printf("\nA matriz feita:\n");

        for(int i=0;i<NUM_LINHA;i++){
            for(int j=0;j<NUM_COLUNA;j++){
                printf("%d ",matriz[i][j]);
            }
        printf("\n");
        }
    int quero_achar;
    printf("\nDigite o numero que voce deseja achar a linha e a coluna: ");
    scanf("%d",&quero_achar);


    int linha,coluna;
    localizar(matriz,&linha,&coluna,quero_achar);
        printf("\nO numero desejado: %d\nLinha : %d\nColuna: %d",quero_achar,linha,coluna);

    return 0;
}
