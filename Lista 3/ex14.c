#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{

    char nome[20];
    int idade;
    char endereco[20];

}Dados;

void leitura(Dados *cliente)
{
    printf("Digite o nome do cliente: ");
    fgets(cliente->nome,20,stdin);
    cliente->nome[strcspn(cliente->nome,"\n")] = '\0';
    printf("Digite a idade dos clientes: ");
    scanf("%d",&cliente->idade);
    getchar();
    printf("Digite o endereco : ");
    fgets(cliente->endereco,20,stdin);
}


void imprimir(Dados cliente)
{
    printf("\nDados do Cliente\n");
    printf("Nome: %s\nIdade: %d\nEndereco: %s\n",cliente.nome,cliente.idade,cliente.endereco);
}


int main(){

    Dados cliente;

    leitura(&cliente);

    imprimir(cliente);

    return 0;
}
