#include<stdio.h>
#define NUM_LINHA 3
#define NUM_COLUNA 3


int ortogonal(int matriz[][NUM_COLUNA]){

    int matriz_transposta[NUM_LINHA][NUM_COLUNA];

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            matriz_transposta[j][i] = matriz[i][j];
        }
    }

    int multiplicacao[NUM_LINHA][NUM_COLUNA];

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_LINHA;j++){
            multiplicacao[i][j] =0;
                for(int k=0;k<NUM_LINHA;k++){
                    multiplicacao[i][j] += (matriz[i][k] * matriz_transposta[k][j]);
                }
        }
    }

    int matriz_identidade[NUM_LINHA][NUM_COLUNA] = {{1,0,0},{0,1,0},{0,0,1}};

    int eh_identidade=1;

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            if(multiplicacao[i][j] != matriz_identidade[i][j]){
                eh_identidade = 0;
            }
        }
    }

    return eh_identidade;

}

int main(){
    int matriz_A[NUM_LINHA][NUM_COLUNA];
    int matriz_B[NUM_LINHA][NUM_COLUNA];

    printf("\nPrimeiro insira os elementos da matriz A:\n");

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            printf("Digite o elemento da matriz A na linha %d da coluna %d: ",i,j);
            scanf("%d",&matriz_A[i][j]);
        }
    }

    printf("\Agora insira os elementos da matriz B:\n");

     for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            printf("Digite o elemento da matriz B na linha %d da coluna %d: ",i,j);
            scanf("%d",&matriz_B[i][j]);
        }
    }

    printf("\nMatriz A:\n");

     for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            printf("%d ",matriz_A[i][j]);
        }
    printf("\n");

    }

    printf("\nMatriz B:\n");

       for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            printf("%d ",matriz_B[i][j]);
        }
    printf("\n");

    }

    int flag = ortogonal(matriz_A);

    if(flag){
        printf("\nA MATRIZ A eh ortogonal!");
    }else{
        printf("\nA MATRIZ A nao eh ortogonal :c ");
    }

    flag = ortogonal(matriz_B);

    if(flag){
        printf("\nA MATRIZ B eh ortogonal!");
    }else{
        printf("\nA MATRIZ B nao eh ortogonal :c ");
    }

    return 0;
}
