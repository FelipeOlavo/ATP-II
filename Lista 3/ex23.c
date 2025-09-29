#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef enum{

    Janeiro=1,
    Fevereiro,
    Marco,
    Abril,
    Maio,
    Junho,
    Julho,
    Agosto,
    Setembro,
    Outubro,
    Novembro,
    Dezembro

}Meses;

void imprimir()
{
    printf("Janeiro eh: %d\n"
           "Fevereiro eh: %d\n"
           "Marco eh : %d\n"
           "Abril eh: %d\n"
           "Maio eh : %d\n"
           "Junho eh : %d\n"
           "Julho eh : %d\n"
           "Agosto eh: %d\n"
           "Setembro eh: %d\n"
           "Outubro eh : %d\n"
           "Novembro eh: %d\n"
           "Dezembro eh: %d\n"
           ,Janeiro,Fevereiro,Marco,Abril,Maio,Junho,Julho,Agosto,Setembro,Outubro,Novembro,Dezembro
           );
}

int main()
{

    imprimir();

    return 0;
}
