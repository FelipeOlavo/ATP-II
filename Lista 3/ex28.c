#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct{

    char nome[20];
    char endereco[20];
    int idade;

}Dados;

void leitura_dados(Dados *cliente)
{
    printf("Digite o nome do cliente: ");
    fgets((*cliente).nome,20,stdin);
    (*cliente).nome[strcspn((*cliente).nome,"\n")] = '\0';
    printf("Digite o endereco do cliente: ");
    fgets((*cliente).endereco,20,stdin);
    (*cliente).endereco[strcspn((*cliente).endereco,"\n")] = '\0';
    printf("Digite a idade do cliente: ");
    scanf("%d",&(*cliente).idade);

}

void imprimir(Dados cliente)
{
    printf("\nDados do cliente %s\n",cliente.nome);
    printf("Endreco: %s\nIdade: %d",cliente.endereco,cliente.idade);
}

int main()
{
    Dados Cliente;

    leitura_dados(&Cliente);

    imprimir(Cliente);

    return 0;
}
