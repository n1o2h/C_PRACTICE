#include<stdio.h>

int main(){
    printf("Paire ou Impaire\n");

    int n;
    printf("enter un nombre: ");
    scanf("%d", &n);

    if(n%2 == 0)
        printf("%d est pair",n);
    else
        printf("%d est impair",n);

    return 0;
}