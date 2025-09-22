#include<stdio.h>
#define NUM_LINHA 3
#define NUM_COLUNA 3

int eh_hankel(int matriz[][NUM_COLUNA]){

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            if(j>0 && i<NUM_COLUNA-1){
                if(matriz[i][j]!=matriz[i+1][j-1]){
                    return 0;
                }
            }
        }
    }

    return 1;
}


int main(){
    int matriz[NUM_LINHA][NUM_COLUNA];

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            printf("Digite o elemento na linha %d e na coluna %d: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }

    printf("\nMatriz\n");

     for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            printf("%d ",matriz[i][j]);
        }
    printf("\n");
    }

    int resultado = eh_hankel(matriz);

    if(resultado==1){
        printf("\nEh hankel essa matriz!");
    }else{
        printf("\nNao eh hankel!");
    }

    return 0;
}
