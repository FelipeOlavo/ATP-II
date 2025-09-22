#include <stdio.h>
#define NUM_LINHA 3
#define NUM_COLUNA 3

int simetrica(int matriz[][NUM_COLUNA],int transposta[][NUM_COLUNA]){

   int eh_simetrica=1;

   for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
        if(matriz[i][j]!=transposta[i][j]){
            eh_simetrica=0;
        }
     }
   }
   return eh_simetrica;

}

void imprimir(int matriz[][NUM_COLUNA]){

    printf("\nMatriz normal:\n");

           for(int i=0;i<NUM_LINHA;i++){
                for(int j=0;j<NUM_COLUNA;j++){
                    printf("%d ",matriz[i][j]);
            }
            printf("\n");
        }

}

void transposicao(int matriz[][NUM_COLUNA],int transposta[][NUM_COLUNA]){

    for(int i=0;i<NUM_LINHA;i++){
        for(int j=0;j<NUM_COLUNA;j++){
            transposta[j][i] = matriz[i][j];
        }
    }

}

int main(){
    int matriz[NUM_LINHA][NUM_COLUNA]={{2,8,1},{8,3,4},{1,4,5}};

    imprimir(matriz);
    //uma matriz eh simetrica, quando sua normal eh igual a sua transposta

    int matriz_transposta[NUM_LINHA][NUM_COLUNA];

    transposicao(matriz,matriz_transposta);

    int eh_simetrica = simetrica(matriz,matriz_transposta);

    if(eh_simetrica==1){
        printf("\nEH simetrica!!");
    }else{
        printf("\nNao eh simetrica :c ");
    }

    return 0;
}
