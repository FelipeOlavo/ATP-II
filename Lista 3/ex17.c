#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//struct que vai ser usada dentro de outra struct para a data do lancamento
typedef struct{
    int dia;
    int mes;
    int ano;

}Data;


typedef struct
{
    char titulo[20];
    char diretor[20];
    Data lancamento;

}Dados;

//funcao leitura
//strcspn para limpar o \n

void leitura(Dados *filme)
{
    printf("Digite o titulo do filme: ");
    fgets(filme->titulo,20,stdin);
    filme->titulo[strcspn(filme->titulo,"\n")] = '\0';
    printf("Digite o nome do diretor do filme: ");
    fgets(filme->diretor,20,stdin);
    filme->diretor[strcspn(filme->diretor,"\n")] = '\0';
    printf("Digite a data do lancamento, dia/mes/ano: ");
    scanf("%d%d%d",&filme->lancamento.dia,&filme->lancamento.mes,&filme->lancamento.ano);
}

void imprimir(Dados filme)
{
    printf("\nDados do filme\n");
    printf("Titulo: %s\nNome do diretor: %s\n",filme.titulo,filme.diretor);
    printf("Data do lancamento: %d/%d/%d",filme.lancamento.dia,filme.lancamento.mes,filme.lancamento.ano);
}


int main()
{
    Dados filme;

    leitura(&filme);

    imprimir(filme);

    return 0;
}

