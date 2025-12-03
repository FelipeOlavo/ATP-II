#include<stdio.h>
#define NUM_STRING 12

void swap(char *ptr)
{
    int tam=0,j=0;
    char aux[NUM_STRING];

        for(int i=0;*(ptr+i)!='\0';i++){
            tam++;
        }

        for(int i=tam - 1;i>=0;i--)
        {
            aux[j]= *(ptr+i);
            j++;
        }
        aux[j]=!'\0';
        j=0;
        for(int i=0;i<NUM_STRING;i++)
        {
            *(ptr+i) = aux[j];
            j++;
        }
}

int main()
{
    char string[NUM_STRING];
    scanf("%s", string);
    printf("A string normal : %s",string);
    char *ptr = string;
    swap(ptr);
        printf("\nA string invertida: %s",string);

    return 0;
}
