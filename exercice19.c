#include<stdio.h>

int main(){
    printf("***CALCULATRICE***");

    int a, b;
    char op;

    printf("veuissez saisir un operateur (+, -, /, *): ");
    scanf("%c", &op);
    printf("veuillez saisir le premier nombre: ");
    scanf("%d", &a);
    printf("veuillez saisir le deuxieme nombre: ");
    scanf("%d", &b);


    switch(op){
        case '+': printf(" %d %c %d = %d", a, op, b , a+b);
                break;
        case '-': printf(" %d %c %d = %d", a, op, b , a-b);
                break;
        case '*': printf(" %d %c %d = %d", a, op, b , a*b);
                break;
        case '/': if(b != 0){
                    printf(" %d %c %d = %d", a, op, b , a/b);
                    break;
                }
                else{
                    printf("division sur 0 impossible!");
                    break;
                }
        default: printf("ERRORE! operateur invalide");

        return 0;
            
    }
}