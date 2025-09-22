#include<stdio.h>
#define NUM_LINHA 4
#define NUM_COLUNA 4


int soma(int matriz[][NUM_COLUNA],int diagonal){

    int soma=0;

    if(diagonal==1){
        for(int i=0;i<NUM_LINHA;i++){
               soma += matriz[i][i];
    }
}else{

    int i=0;

    for(int j=3;j>=0;j--){
            soma += matriz[i][j];
            i++;
        }

}

    return soma;

}

int main(){
    int matriz[NUM_LINHA][NUM_COLUNA];

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            printf("Digite o elemento na linha %d da coluna  %d: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }

    printf("\nA matriz:\n");

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
          printf("%d ",matriz[i][j]);
        }
    printf("\n");
    }

    int diagonal;

    printf("\nQual Diagonal voce quer somar:\n");
    printf("\nDigite 1 para a diagonal principal\n");
    printf("\nDigite 2 para a diagonal secundaria\n");
    printf("\nDigite: ");
    scanf("%d",&diagonal);

    if(diagonal==1){
        printf("A soma da diagonal principal eh: %d",soma(matriz,diagonal));
    }else if(diagonal==2)   {
        printf("A soma da diagonal secundaria eh: %d",soma(matriz,diagonal));
    }

    return 0;
}
