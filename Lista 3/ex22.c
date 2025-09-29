#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef union{

    int inteiro;
    char nome[20];

}Valores;

void leitura_impressao(Valores *dados)
{

    printf("Digite um valor inteiro: ");
    scanf("%d",&dados->inteiro);
    getchar();

    printf("Valor inteiro: %d\n",dados->inteiro);

    printf("Digite um nome: ");
    fgets(dados->nome,20,stdin);

    printf("Nome: %s",dados->nome);

    /*o valor foi sobrescrito, logo se eu der  printf("Valor inteiro: %d\n",dados->inteiro);, vai dar um lixo eletronico , pois esse valor
    foi sobrescrito pelo o char
    */
}


int main()
{

    Valores dados;

    leitura_impressao(&dados);

    return 0;
}

