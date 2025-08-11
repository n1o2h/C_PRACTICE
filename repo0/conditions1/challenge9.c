#include<stdio.h>

int main(){
    printf("Verification d'Alphabet\n ");

    char c;

    printf("enter un caractere: ");
    scanf("%c",&c);

    if(c>='a' && c<'z')
        printf("%c est un alphabet et de plus est miniscule!",c);
    else if(c>='A' && c<='Z')
        printf("%c est un alphabet et de plus majuscule!",c);
    else
        printf("%c n'est pas un alphabet!");
    
    return 0;

}