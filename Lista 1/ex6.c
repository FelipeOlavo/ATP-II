#include<stdio.h>

int main()
{
    int vetor[10],soma=0;
        for(int i=0;i<10;i++){
            printf("Digite o valor %d: ",i+1);
            scanf("%d",&vetor[i]);
            soma = soma + vetor[i];
        }
    printf("A soma dos 10 primeiros termos = %d",soma);

    return 0;
}
