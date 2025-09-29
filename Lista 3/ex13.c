#include<stdio.h>
#include<time.h>
#include<stdlib.h>


typedef struct{
    char nome[20];
    float salario;
    char departamento[20];

} informacao;

void leitura(informacao *funcionario){

    printf("Digite o nome do funcionario: ");
    fgets(funcionario->nome,20,stdin);
    printf("Digite o salario do funcionario: ");
    scanf("%f",&funcionario->salario);
    getchar();
    printf("Digite o departamento do funcionario: ");
    fgets(funcionario->departamento,20,stdin);

}

void imprimir(informacao funcionario)
{
    printf("O nome do funcionario eh : %s\n",funcionario.nome);
    printf("O Salario do funcionario eh: %.2f\n",funcionario.salario);
    printf("O departamento do funcionario eh: %s\n",funcionario.departamento);
}

int main(){
    informacao funcionario;

    leitura(&funcionario);

    imprimir(funcionario);

    return 0;
}
