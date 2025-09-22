#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define NUM_LINHA 3
#define NUM_COLUNA 3

void esparsa(int matriz[][NUM_COLUNA]){
    int cont;
    //contador para saber quantos numeros sao diferentes de zero
    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            if(matriz[i][j]!=0){
                cont++;
            }
        }
    }
    // declarei como sendo esparsa, quando 30% dos valores da matriz 3x3 eh diferentes de 0
    if(cont>=3){
        printf("Eh esparsa!");
    }else{
        printf("Nao eh esparsa!");
    }

}

int main(){
    srand(time(NULL));
    int matriz[NUM_LINHA][NUM_COLUNA];

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            matriz[i][j] = rand() % 2 ;
        }
    }

    printf("\nMatriz normal:\n");

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
           printf("%d",matriz[i][j]);
        }
    printf("\n");
    }

    esparsa(matriz);


    return 0;
}
