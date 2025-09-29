#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct{
    char nome[20];
    char email[30];
    int telefone;
} Contato;

void leitura(Contato *contato1)
{
    printf("Digite o nome para contato: ");
    fgets(contato1->nome,20,stdin);
    contato1->nome[strcspn(contato1->nome,"\n")] = '\0';
    printf("Digite o email para contato: ");
    fgets(contato1->email,30,stdin);
    contato1->email[strcspn(contato1->email,"\n")] = '\0';
    printf("Digite o telefone para contato : ");
    scanf("%d",&contato1->telefone);
}

void imprimir(Contato contato1){

    printf("\nDados para contato\n");
    printf("Nome: %s\nEmail: %s\nTelefone: %d",contato1.nome,contato1.email,contato1.telefone);
    printf("\n");
}

int main(){

    Contato contato1;

    printf("\nDados do contato 1:\n");

    leitura(&contato1);

    imprimir(contato1);

    printf("\nAtribuicao da estrutura do contato1 para contato2:\n");

    Contato contato2 = contato1;

    imprimir(contato2);

    return 0;
}
