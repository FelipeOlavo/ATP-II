#include<stdio.h>
#include<stdlib.h>
int main()
{
    char armazem[5];

    //puxando na tabela ascii, o numero a comeca em 97, entao basta eu fazer um lopping para quando for necessario incrementar mais de 5 letras!

    for(int i=0;i<5;i++)
        armazem[i] += 97 + i;


    printf("Os elementos armazenados foram: ");
        for(int i=0;i<5;i++){
            printf("\nNo local %d = %c",i,armazem[i]);
        }

    return 0;
}
