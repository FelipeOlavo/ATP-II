#include<stdio.h>
#include<stdlib.h>

typedef struct{

    int valor;

}Dados;

typedef struct{

    Dados x;
    Dados y;
    Dados z;

}Coordenadas;

void leitura(Coordenadas *pontos)
{
    printf("Digite o ponto X Y e Z: ");
    scanf("%d%d%d",&pontos->x.valor,&pontos->y.valor,&pontos->z.valor);
}

void imprimir(Coordenadas pontos)
{
    printf("\nCoodernadas\n");
    printf("Ponto X = %d\nPonto Y = %d\nPonto Z = %d",pontos.x.valor,pontos.y.valor,pontos.z.valor);
}

int main()
{
    Coordenadas pontos;

    leitura(&pontos);

    imprimir(pontos);

    return 0;
}
