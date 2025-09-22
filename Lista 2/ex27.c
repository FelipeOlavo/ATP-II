#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define NUM_LINHA 3
#define NUM_COLUNA 3

void escalar(int matriz[][NUM_COLUNA]){
    int numero;
    printf("Digite um numero que voce quer multiplicar: ");
    scanf("%d",&numero);

         for(int i=0;i<NUM_LINHA;i++){
            for(int j=0;j<NUM_COLUNA;j++){
                matriz[i][j] = numero * matriz[i][j];
            }
        }
}

int main(){
    int matriz[NUM_LINHA][NUM_COLUNA];
    srand(time(NULL));

        for(int i=0;i<NUM_LINHA;i++){
            for(int j=0;j<NUM_COLUNA;j++){
                matriz[i][j] = (rand() % 11) + 1;
            }
        }
    printf("\nMatriz antes de sua multiplicacao escalar:\n");

     for(int i=0;i<NUM_LINHA;i++){
            for(int j=0;j<NUM_COLUNA;j++){
              printf("%d ",matriz[i][j]);
            }
        printf("\n");
        }

    escalar(matriz);

        printf("\nMatriz depois de sua multiplicacao escalar:\n");
         for(int i=0;i<NUM_LINHA;i++){
            for(int j=0;j<NUM_COLUNA;j++){
               printf("%d ",matriz[i][j]);
            }
        printf("\n");
        }

    return 0;
}
