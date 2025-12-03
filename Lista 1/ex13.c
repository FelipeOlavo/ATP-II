#include<stdio.h>

void imprimir(int *pont){
    for(int i=0;i<5;i++){
        printf("\n%d", *(pont + i));
    }
}

int main(){
    int vetor[5];
    for(int i=0;i<5;i++){
        printf("Digite o valor %d: ",i+1);
        scanf("%d",&vetor[i]);
    }
    int *pont = vetor;

   imprimir(pont);

    return 0;
}
