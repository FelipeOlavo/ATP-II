#include<stdio.h>
#include<string.h>


typedef struct{
    char nome[20];
    int idade;
    float altura;

} Dados;

void leitura(Dados *pessoa){

    printf("Digite o nome da pessoa: ");
    gets(pessoa->nome);
    printf("Digite a idade dessa pessoa: ");
    scanf("%d",&pessoa->idade);
    printf("Digite a altura dessa pessoa : ");
    scanf("%f",&pessoa->altura);

}


int main(){
    Dados pessoa;

    leitura(&pessoa);

    printf("\nO total de bytes eh : %zu",sizeof(pessoa));

    return 0;
}
