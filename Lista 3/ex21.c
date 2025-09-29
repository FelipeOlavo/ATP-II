#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct
{
    char nome[20];
    char codigo[20];
    float preco;


} Estrutura;

// Char ocupa 1 byte, como cada char tem 20 e tem 1 float. Logo, total de bytes = 44

void imprimir_tamanho(Estrutura produto)
{
    printf("O sizeof da estrutura do produti resulta em: %d",sizeof(produto));
}

int main()
{
    Estrutura produto;

    imprimir_tamanho(produto);


    return 0;
}
