#include<stdio.h>
#include<string.h>

int main(){
    char string1[20],string2[20];

    scanf("%s", string1);
    fflush(stdin);
    scanf("%s", string2);
    strcat(string1,string2);

    printf("A concatenacao das duas strings = %s",string1);

    return 0;
}
