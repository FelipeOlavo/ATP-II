#include<stdio.h>

typedef struct{

    int dia;
    int mes;
    int ano;

} informacao;

typedef struct{

    informacao data;

} periodo;

//como vou trocar os dados da main, tenho que passar por parâmetros por refrência

void leitura(periodo *nascimento){

    printf("Digite o dia: ");
    scanf("%d",&(*nascimento).data.dia);
    printf("Digite o mes: ");
    scanf("%d",&(*nascimento).data.mes);
    printf("Digite o ano: ");
    scanf("%d",&(*nascimento).data.ano);

}

void imprimir(periodo nascimento){

    printf("\nDia do nascimento\n");

    printf("Digite o dia: %d\n",nascimento.data.dia);
    printf("Digite o mes: %d\n",nascimento.data.mes);
    printf("Digite o ano: %d",nascimento.data.ano);


}

int main(){

    periodo nascimento;

    leitura(&nascimento);

    imprimir(nascimento);

    return 0;
}
