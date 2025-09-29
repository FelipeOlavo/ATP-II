#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define NUM 5

typedef struct{

    char nome[20];
    int idade;
    char setor[20];
    float salario;

}Dados;

void leitura(Dados funcionario[])
{

    for(int i=0;i<NUM;i++)
    {
        printf("\nDigite o nome do funcionario: ");
        fgets(funcionario[i].nome,20,stdin);
        funcionario[i].nome[strcspn(funcionario[i].nome,"\n")] = '\0';

        printf("\nDigite os dados do funcionario %s\n",funcionario[i].nome);
        printf("DigiTe o setor desse funcionario: ");
        fgets(funcionario[i].setor,20,stdin);
        funcionario[i].setor[strcspn(funcionario[i].setor,"\n")] = '\0';
        printf("Digite a idade desse funcionario: ");
        scanf("%d",&funcionario[i].idade);
        printf("Digite o salario desse funcionario: ");
        scanf("%f",&funcionario[i].salario);
        getchar();
    }

}

void imprimir(Dados funcionario[])
{
    for(int i=0;i<NUM;i++)
    {
        printf("\nDados do funcionario %s\n",funcionario[i].nome);

        printf("Setor: %s\nIdade: %d\nSalario %.2f",funcionario[i].setor,funcionario[i].idade,funcionario[i].salario);
        printf("\n");
    }
}

int main()
{
    Dados funcionario[NUM];

    leitura(funcionario);

    imprimir(funcionario);

    return 0;
}
