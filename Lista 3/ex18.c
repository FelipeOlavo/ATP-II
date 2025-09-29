#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct
{
    char cidade[20];
    char rua[20];
    int numero;


}Dados;


typedef struct
{
    char nome[20];
    int idade;
    Dados informacao;

}endereco;


void leitura(endereco *morador)
{
    printf("Digite o nome do morador: ");
    fgets(morador->nome,20,stdin);
    morador->nome[strcspn(morador->nome,"\n")] = '\0';
    printf("Digite a idade do morador: ");
    scanf("%d",&morador->idade);
    getchar();
    printf("Digite o nome da sua cidade: ");
    fgets(morador->informacao.cidade,20,stdin);
    morador->informacao.cidade[strcspn(morador->informacao.cidade,"\n")] = '\0';
    printf("Digite o nome da rua que voce mora: ");
    fgets(morador->informacao.rua,20,stdin);
    morador->informacao.rua[strcspn(morador->informacao.rua,"\n")] = '\0';
    printf("Digite o numero da sua casa: ");
    scanf("%d",&morador->informacao.numero);
}

void imprimir(endereco morador)
{
    printf("\nDados do usuario\n");
    printf("\nNome: %s\nIdade: %d\n",morador.nome,morador.idade);

    printf("\nDados da cidade\n");
    printf("\nNome: %s\nRua: %s\nNumero : %d",morador.informacao.cidade,morador.informacao.rua,morador.informacao.numero);
}


int main()
{
    endereco morador;

    leitura(&morador);

    imprimir(morador);


    return 0;
}
