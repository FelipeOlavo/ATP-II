#include<stdio.h>

typedef struct{

    int x;
    int y;
    int z;

}Dados;


void leitura(Dados *pontos)
{
    printf("Digite o ponto X Y Z: ");
    scanf("%d%d%d",&pontos->x,&pontos->y,&pontos->z);
}

void imprimir(Dados pontos)
{
    printf("\nDados dos pontos X Y Z\n");
    printf("X -> %d\nY -> %d\nZ -> %d",pontos.x,pontos.y,pontos.z);
}


int main(){

    Dados pontos;

    leitura(&pontos);

    imprimir(pontos);


}
