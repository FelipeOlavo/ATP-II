#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct{

    char nome_cidade[20];
    char nome_rua[20];
    char bairro[20];
    int numero;



} endereco;

void leitura(endereco *cidade)
{
    printf("Digite o nome da cidade: ");
    fgets(cidade->nome_cidade,20,stdin);
    cidade->nome_cidade[strcspn(cidade->nome_cidade,"\n")] = '\0';
    printf("Digite o nome da rua: ");
    fgets(cidade->nome_rua,20,stdin);
    cidade->nome_rua[strcspn(cidade->nome_rua,"\n")] = '\0';
    printf("Digite o nome do bairro: ");
    fgets(cidade->bairro,20,stdin);
    cidade->bairro[strcspn(cidade->bairro,"\n")] = '\0';
    printf("Digite o numero da casa: ");
    scanf("%d",&cidade->numero);
}

void imprimir(endereco cidade)
{
    printf("\nDados da cidade\n");
    printf("Nome da cidade: %s\nNome da rua: %s\nNome do bairro: %s\nNumero da casa: %d",cidade.nome_cidade,cidade.nome_rua,cidade.bairro,cidade.numero);

}

int main()
{
    endereco cidadeA;

    leitura(&cidadeA);

    printf("\nDados da cidade A\n");

    imprimir(cidadeA);

    endereco cidadeB = cidadeA;

    printf("\nCopia dos dados de A para B\n");

    imprimir(cidadeB);


    return 0;
}
