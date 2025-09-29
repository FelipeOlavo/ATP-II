#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct
{
    char nome[20];
    char departamento[20];
    float salario;

}Dados;


void leitura(Dados *funcionario)
{
    printf("Digite o nome do funcionario: ");
    fgets(funcionario->nome,20,stdin);
    funcionario->nome[strcspn(funcionario->nome,"\n")] = '\0';
    printf("Digite o departamento do funcionario: ");
    fgets(funcionario->departamento,20,stdin);
    funcionario->departamento[strcspn(funcionario->departamento,"\n")] = '\0';
    printf("Digite o salario do funcionario: ");
    scanf("%f",&funcionario->salario);
}

void imprimir(Dados funcionario)
{
    printf("\nDados do funcionario %s\n",funcionario.nome);
    printf("Departamento: %s\nSalario: %.2f\n",funcionario.departamento,funcionario.salario);
}

void tamanho_bytes(Dados funcionario){

    printf("\nO tamanho de bytes dessa struct eh: %d",sizeof(funcionario));

}

int main()
{
    Dados funcionario;

    leitura(&funcionario);

    imprimir(funcionario);

    tamanho_bytes(funcionario);

    return 0;
}
