#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define NUM_LINHA 2
#define NUM_COLUNA 2

void reflexao(int matriz[][NUM_COLUNA]){

    // vou fazer a sua transposta
    int transposta[NUM_LINHA][NUM_COLUNA];

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            transposta[j][i] = matriz[i][j];
        }
    }
    printf("\nSua transposta\n");

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            printf("%d ",transposta[i][j]);
        }
    printf("\n");
    }

    int matriz_multiplicacao[NUM_LINHA][NUM_COLUNA];

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            matriz_multiplicacao[i][j] = 0;
                for(int k=0;k<NUM_LINHA;k++){
                    matriz_multiplicacao[i][j] += matriz[i][k] * transposta[k][j];
                }
        }
    }

    printf("\nA multiplicacao da matriz pela sua transposta resulta em: \n");

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            printf("%d ",matriz_multiplicacao[i][j]);
        }
    printf("\n");
    }

    printf("\n");
    int matriz_identidade[NUM_LINHA][NUM_COLUNA]= {{1,0},{0,1}};

    printf("\nMatriz identidade\n");

     for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            printf("%d ",matriz_identidade[i][j]);
        }
    printf("\n");
    }

    int ortogonal=1;

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            if(matriz_multiplicacao[i][j]!=matriz_identidade[i][j]){
                ortogonal=0;
            }
        }
    }
      int determinante;
    // sera reflexao se o seu determinante for == -1

    determinante = (matriz[0][0] * matriz[1][1]) - (matriz[0][1] * matriz[1][0]);

    printf("\nO seu determinante eh: %d",determinante);

    if(ortogonal && determinante== -1){
        printf("\nEH reflexiva!!!");
    }else{
        printf("\nNao eh reflexiva!");
    }

}

int main(){
    int matriz[NUM_LINHA][NUM_COLUNA];

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            printf("Digite o elemento na linha %d e na coluna %d: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }

    printf("\nMatriz original:\n");

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            printf("%d ",matriz[i][j]);
        }
    printf("\n");
    }

    reflexao(matriz);

    return 0;
}

