#include<stdio.h>
#define NUM_LINHA 3
#define NUM_COLUNA 3


void eh_identidade(int matriz[][NUM_COLUNA],int identidade[][NUM_COLUNA]){

    int verificacao=1;

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            if(matriz[i][j]!=identidade[i][j]){
                verificacao=0;
            }
        }
    }

    if(verificacao){
        printf("\nEh uma matriz identidade!");
    }else{
        printf("\nNao eh matriz identidade :c");
    }

}

int main(){
    int matriz[NUM_LINHA][NUM_COLUNA];

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            printf("Digite o elemento na linha %d da coluna %d:",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }

    int matriz_identidade[NUM_LINHA][NUM_COLUNA] ={{1,0,0},{0,1,0},{0,0,1}};

    printf("\nMatriz:\n");

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            printf("%d ",matriz[i][j]);
        }
    printf("\n");
    }

    eh_identidade(matriz,matriz_identidade);

    return 0;
}
