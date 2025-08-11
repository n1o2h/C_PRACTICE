#include<stdio.h>
#include<stdlib.h>

int main(){
    printf("Alphabet Majuscule\n");
    char c;
    printf("enter un caractere : ");
    scanf("%c",&c);

    if(c >= 'A' && c<= 'Z')
        printf("%c est un alphabet majuscule");
    else
        printf("%c n'est  pas un alphabet majuscule");
}