#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define NUM 4


typedef struct{

    char nome[20];
    int codigo;
    float preco;

}Informacao;


void leitura(Informacao produtos[]){

    for(int i=0;i<NUM;i++)
    {
        printf("Digite o nome do produto %d: ",i+1);
        fgets(produtos[i].nome,20,stdin);
        produtos[i].nome[strcspn(produtos[i].nome,"\n")] = '\0';

        printf("\nDigite os dados abaixo do produto %s\n",produtos[i].nome);

        printf("Digite o codigo do produto: ");
        scanf("%d",&produtos[i].codigo);
        printf("Digite o preco do produto: ");
        scanf("%f",&produtos[i].preco);
        getchar();
        printf("\n");
    }

}


void imprimir(Informacao produtos[])
{

    for(int i=0;i<NUM;i++)
    {
        printf("\nDados abaixo do produto %s\n",produtos[i].nome);
        printf("\nCodigo : %d\nPreco: %.2f\n",produtos[i].codigo,produtos[i].preco);
        printf("\n");
    }

}

int main()
{
    Informacao produtos[NUM];

    leitura(produtos);

    imprimir(produtos);


    return 0;
}
