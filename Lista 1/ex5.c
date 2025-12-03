#include<stdio.h>
int main()
{
    int vetor[5];
    for(int i=0;i<5;i++){
        printf("Digite o valor %d: ",i+1);
        scanf("%d",&vetor[i]);
    }

    printf("Os valores na ordem normal: ");
        for(int i=0;i<5;i++){
            printf("%d",vetor[i]);
        }

    printf("\nOs valores na ordem inversa: ");
        for(int i=4;i>=0;i--){
            printf("%d",vetor[i]);
        }
    return 0;
}
