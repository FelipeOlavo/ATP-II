#include<stdio.h>
#define NUM_LINHA 3
#define NUM_COLUNA 3


void eh_permutacao(int matriz[][NUM_COLUNA]){

    int um=0;
    // vou usar o contador um para verificar se ha mais de 1 em cada linha, se tiver, nao eh matriz de permutacao
    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            if(matriz[i][j] == 1){
                um++;
            }
            // aq eu verifico , caso um seja >1 nao eh permutacao e caso um vale 0, entao nao eh permutacao pois precisa haver pelo menos um 1 em cada linha
        }
        if(um>1 || um==0){
                printf("Nao eh permutacao");
                return;
            }
              um=0;
    }

    printf("Eh uma matriz permutacao!");

}

int main(){
    int matriz[NUM_LINHA][NUM_COLUNA];

    printf("Digite apenas 1 ou 0!");

    // abro um for para o usuario digitar, restrinjo a possibilidade da inserção de numeros >1 || ou <0

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            printf("\nDigite o elemento na linha %d da coluna %d: ",i,j);
            scanf("%d",&matriz[i][j]);

                if(matriz[i][j]<0 || matriz[i][j]>1){
                    printf("Os elementos so pode ser 0 ou 1!");
                    printf("Digite novamente: ");
                    scanf("%d",&matriz[i][j]);
                }
        }
    }

    printf("\nMatriz:\n");

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            printf("%d ",matriz[i][j]);
        }
    printf("\n");
    }

    eh_permutacao(matriz);


    return 0;
}
