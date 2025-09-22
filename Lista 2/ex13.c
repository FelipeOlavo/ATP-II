#include<stdio.h>
#define NUM_LINHA 4
#define NUM_COLUNA 4


void matriz_diagonal(int matriz[][NUM_COLUNA]){

    int diagonal_principal=0;

    //verificacao se ha elementos na diagonal principal
    for(int i=0;i<NUM_LINHA-1;i++){
        for(int j=0;j<NUM_COLUNA-1;j++){
            if(matriz[0][0] && matriz[i+1][j+1] !=0){
                diagonal_principal=1;
            }
        }
    }

    // verificando se todos os elementos abaixo da diagonal principal sao zeros
    int diagonal_abaixo=1;

    for(int i=3;i>=0;i--){
        for(int j=i-1;j>=0;j--){
            if(matriz[i][j]!=0){
                diagonal_abaixo=0;
            }
        }
    }

    // verificando se todos os elementos acima da diagonal principal sao zeros

    int diagonal_acima=1;

    for(int j=3;j>=1;j--){
        for(int i=j-1;i>=0;i--){
            if(matriz[i][j]!=0){
                diagonal_abaixo=0;
            }
        }
    }

    if(diagonal_principal && diagonal_abaixo && diagonal_acima){
        printf("Eh uma matriz diagonal!!");
    }else{
        printf("Nao eh uma matriz diagonal :c");
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

    matriz_diagonal(matriz);

    return 0;
}
