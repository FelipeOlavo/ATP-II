#include <stdio.h>
#include<math.h>
#define NUM_LINHA 5
#define NUM_COLUNA 5

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

int main(){
    int matriz_prima[NUM_LINHA][NUM_COLUNA];

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){

            int numero;
            do{
            printf("Digite o elemento da linha %d da coluna %d: ",i,j);
            scanf("%d",&matriz_prima[i][j]);

            numero = matriz_prima[i][j];

            if(eh_primo(numero)==0){
            printf("\nEsse numero nao eh primo, insira novamente: ");
            }

            }while(eh_primo(numero)==0);
        }
    }

      for(int i=0;i<NUM_LINHA;i++){
            for(int j=0;j<NUM_COLUNA;j++){
                printf("%d ",matriz_prima[i][j]);
            }
        printf("\n");
        }


    return 0;
}
