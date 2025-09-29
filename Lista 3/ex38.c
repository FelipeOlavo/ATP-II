#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{

    char nome[20];
    char email[20];
    int telefone;

}Dados;


void leitura(Dados *contato)
{
    printf("Digite o nome: ");
    fgets(contato->nome,20,stdin);
    contato->nome[strcspn(contato->nome,"\n")] = '\0';
    printf("Digite o email: ");
    fgets(contato->email,20,stdin);
    contato->email[strcspn(contato->nome,"\n")] = '\0';
    printf("Digite o telefone: ");
    scanf("%d",&contato->telefone);
}

void imprimir(Dados contato)
{
    printf("\nDados do contato\n");
    printf("Nome: %s\nEmail: %s\nTelefone: %d",contato.nome,contato.email,contato.telefone);
}

int main()
{
    Dados contato;

    leitura(&contato);

    imprimir(contato);

    return 0;
}
