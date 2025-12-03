#include<stdio.h>
#include<stdlib.h>

int main(int argc, char*argv[]){

    if(argc != 4){
        return 1;
    }
    printf("A quantidade de argumentos digitados eh: %d \n",argc);

   int numero1 = atoi(argv[1]), numero2= atoi(argv[2]),numero3 = atoi(argv[3]);

   int soma= numero1+numero2+numero3;

   printf("a soma de %d + %d + %d = %d",numero1,numero2,numero3,soma);

    return 0;
}
