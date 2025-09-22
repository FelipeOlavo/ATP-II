#include<stdio.h>
#define NUM_LINHA 4
#define NUM_COLUNA 4


void busca(int matriz[][NUM_COLUNA],int procura){

    int inicio = 0;
    int fim = (NUM_LINHA * NUM_COLUNA) - 1;
    int meio,linha,coluna;

    while(inicio<=fim){

        meio = (inicio+fim)/2;

        linha= meio/NUM_COLUNA;
        coluna = meio % NUM_COLUNA;
        int valor_meio = matriz[linha][coluna];

        if(valor_meio==procura){
            printf("Valor encontrado na posicao linha %d e coluna %d",linha,coluna);
            return;
        }
        if(valor_meio<procura){
            inicio = meio + 1;
        }else{
            fim = meio - 1;
        }
    }

}


int main(){
    int matriz[NUM_LINHA][NUM_COLUNA] = {
     {1,2,3,4}
    ,{5,6,7,8}
    ,{9,10,11,12},
    {13,14,15,16} };

    printf("\nA matriz eh:\n");

      for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            printf("%d ",matriz[i][j]);
        }
    printf("\n");
    }

    int procurado;
    printf("Digite o elemento que voce quer procurar nessa matriz? ");
    scanf("%d",&procurado);

    busca(matriz,procurado);

    return 0;
}
