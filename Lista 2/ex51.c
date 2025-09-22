#include<stdio.h>
#include<math.h>
#define NUM_LINHA 3
#define NUM_COLUNA 3

int eh_primo(int numero){

    if(numero<=1){
        return 0;
    }

        for(int i=2;i<=sqrt(numero);i++){
            if(numero % i ==0){
                return 0;
            }
        }
    return 1;
}

int diagonalsec_produto(int matriz[][NUM_COLUNA]){

    int produto=1;

    int i=0;
    for(int j=2;j>=0;j--){
        produto = produto * matriz[i][j];
        i++;
    }

    return produto;

}

void imprimir(int matriz[][NUM_COLUNA]){

    printf("\nA MATRIZ:\n");

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            printf("%d ",matriz[i][j]);
        }
    printf("\n");
    }

}


int main(){
    int matriz[NUM_LINHA][NUM_COLUNA];

    printf("\nDigite apenas primos!\n");

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
                int numero;
            do{
                printf("Digite o numero na linha %d da coluna %d: ",i,j);
                scanf("%d",&matriz[i][j]);

                numero = matriz[i][j];

                if(eh_primo(numero)==0){
                    printf("\nEsse numero n eh primo, digite novamente: ");
                }

            }while(eh_primo(numero)==0);

            }
        }

    imprimir(matriz);

    int produto = diagonalsec_produto(matriz);

    printf("\nO produto da diagonal secundaria resulta em: %d",produto);


    return 0;
}
