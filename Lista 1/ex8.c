#include<stdio.h>

int main(){
    int vogal=0;
    char frase[8];
        for(int i=0;i<8;i++){
            printf("Digite o %d caracter da frase: ",i+1);
            scanf("%s",&frase[i]);
        }

        for(int i=0;frase[i]!='\0';i++){
            if(frase[i]=='a' || frase[i]=='A' || frase[i]=='e' || frase[i]=='E' ||
               frase[i]=='i' || frase[i]=='I' || frase[i]=='o' || frase[i]=='O' ||
               frase[i]=='u' || frase[i]=='U')
               {
                vogal++;
            }
        }
    printf("A quantidade de vogal escrita na frase = %d",vogal);


    return 0;
}
