#include<stdio.h>
#include<string.h>

int main(){
    char string[20];
    scanf("%s", string);
    char aux[20];
    int j=0;
    int tam=strlen(string);

        for(int i=tam-1;i>=0;i--){
            aux[j]=string[i];
            j++;
        }

        int palindroma= strcmp(aux,string);

        if(palindroma==0){
            printf("Palindroma");
        }else{
            printf("Nao e palindroma");
        }

    return 0;
}
