#include<stdio.h>
#include<string.h>


typedef struct{

    int dia;
    int mes;
    int ano;

} Data;

typedef struct{
    char nome[20];
    int idade;
    Data nascimento;

} informacao;

void imprimir(informacao pessoa){
    printf("Nome: %s",pessoa.nome);
    printf("\nIdade: %d",pessoa.idade);
    printf("\nDia: %d  Mes: %d  Ano: %d",pessoa.nascimento.dia,pessoa.nascimento.mes,pessoa.nascimento.ano);

}

int main(){
    informacao Pessoa1,Pessoa2;
    printf("\nDigite o nome: ");
    gets(Pessoa1.nome);
    printf("\nDigite a idade: ");
    scanf("%d",&Pessoa1.idade);
    printf("\nDigite o dia, mes e o ano de nascimento: ");
    scanf("%d %d %d",&Pessoa1.nascimento.dia,&Pessoa1.nascimento.mes,&Pessoa1.nascimento.ano);
    imprimir(Pessoa1);

    printf("\nAgora atribuindo os valores da estrutura 1 para 2\n");
    Pessoa2 = Pessoa1;

    imprimir(Pessoa2);

    return 0;
}
