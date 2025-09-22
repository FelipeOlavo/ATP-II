#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#define NUM_LINHA 3
#define NUM_COLUNA 3


int eh_primo(int numero){

    int primo = 1;

    if(numero<=1){
        return 0;
    }

    for(int i=2;i<=sqrt(numero);i++){
        if(numero % i ==0){
            return 0;
        }
    }
    return primo;

}

void trocando_um(int matriz[][NUM_COLUNA]){

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            matriz[i][j] = 1;
        }
    }

}

int main(){
    int matriz[NUM_LINHA][NUM_COLUNA];
    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){

            int numero;
            do{
                printf("\nDigite um numero na linha %d da coluna %d: ",i,j);
                scanf("%d",&matriz[i][j]);

                numero = matriz[i][j];

                if(eh_primo(numero)==0){
                    printf("\nEsse numero nao eh primo, digite novamente: ");
                }

            }while(eh_primo(numero)==0);
        }
    }

    printf("\nMatriz:\n");

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            printf("%d ",matriz[i][j]);
        }
    printf("\n");
    }

    trocando_um(matriz);

    printf("\nMatriz apos a troca dos numeros primos para um:\n");

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            printf("%d ",matriz[i][j]);
        }
    printf("\n");
    }


    return 0;
}
