#include<stdio.h>
#include<stdlib.h>


typedef union{

    double valor;
    char nome[20];
} Uniao;

void leitura_imprimir(Uniao *dados)
{
    printf("Digite um valor double: ");
    scanf("%lf",&dados->valor);
    getchar();
    printf("Valor: %lf\n",dados->valor);

    //sobrescrevendo o valor double por um char

    printf("Digite um nome: ");
    scanf("%s",dados->nome);
    printf("Nome = %s",dados->nome);

    // se dermos  printf("Valor: %lf\n",dados->valor);, vai dar um lixo eletronico, pois o valor foi sobrescrito pelo o nome
}

int main()
{
    Uniao dados;

    leitura_imprimir(&dados);

    return 0;
}
