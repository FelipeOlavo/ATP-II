#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void maximo(int ptr[],int qtd_numero,int *maior){
    *maior=ptr[0];

        for(int i=1;i<qtd_numero;i++){
            if(ptr[i]>*(maior)){
                *maior=ptr[i];
            }
        }
}

int main(){
    int qtd_numero;
    int *ptr;

    printf("Escreva a quantidade de numeros que voce quer inserir: ");
    scanf("%d",&qtd_numero);
    ptr = (int*)malloc(qtd_numero*sizeof(int));

    if(ptr==NULL){
        printf("\nNao ha espaco para reserva! ");
        return 1;
    }

    for(int i=0;i<qtd_numero;i++){
        printf("Digite o %d numero: ",i+1);
        scanf("%d",&ptr[i]);
    }

    for(int i=0;i<qtd_numero;i++){
        printf("\nNumero %d = %d",i+1,ptr[i]);
    }
    int maior;

    maximo(ptr,qtd_numero,&maior);

    printf("\nO maior numero eh: %d",maior);

    free(ptr);

    return 0;
}
