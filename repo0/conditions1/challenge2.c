#include<stdio.h>

int main(){
    char c;
    printf("Voyelle ou Non\n");

    printf("veuillez saisir un charactere: ");
    scanf("%c", &c);

    switch(c){
        case 'a': printf("Voyelle!");
                break;
        case 'i': printf("Voyelle!");
                break;
        case 'u': printf("Voyelle!");
                break;
        case 'o': printf("Voyelle!");
                break;
        case 'y': printf("Voyelle!");
                break;
        case 'e': printf("Voyelle!");
                break;
        default: printf("Non voyelle!");
    }
    return 0;
}