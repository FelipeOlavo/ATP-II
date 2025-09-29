#include<stdio.h>

typedef union{

    int inteiro;
    float flutuante;

}Valores;

void leitura_impressao(Valores *numero)
{

    printf("Digite um valor inteiro: ");
    scanf("%d",&numero->inteiro);

    printf("Valor inteiro: %d\n",numero->inteiro);

    printf("Digite um valor flutuante depois de sobrescrever o valor do inteiro: \n");
    scanf("%f",&numero->flutuante);

    printf("Valor flutuante: %f",numero->flutuante);

    // Sobrescreveu o valor do inteiro, se eu aplicar outro printf, vai dar um lixo eletronico, pois o valor foi sobrescrito.
}


int main()
{

    Valores numero;

    leitura_impressao(&numero);

    return 0;
}
