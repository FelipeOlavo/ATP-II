#include<stdio.h>
#include<string.h>
#include<stdlib.h>


typedef struct
{
    char nome[20];
    int codigo;
    float preco;

}Dados;

void leitura(Dados *produto)
{
    printf("Digite o nome do produto: ");
    fgets((*produto).nome,20,stdin);
    (*produto).nome[strcspn((*produto).nome,"\n")] = '\0';
    printf("Digite o codigo do produto: ");
    scanf("%d",&(*produto).codigo);
    printf("Digite o preco do produto: ");
    scanf("%f",&(*produto).preco);
}

void imprimir(Dados produto)
{
    printf("\nDados do produto\n");
    printf("Nome: %s\nCodigo: %d\nPreco: %.2f",produto.nome,produto.codigo,produto.preco);
}

int main()
{
    Dados produtoA;

    leitura(&produtoA);

    printf("\nDados do produto A\n");

    imprimir(produtoA);

    Dados produtoB = produtoA;

    printf("\nPassagem de estruturar do produto A para o de B\n");

    imprimir(produtoB);

    return 0;
}
