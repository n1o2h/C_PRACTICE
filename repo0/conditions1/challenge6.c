#include<stdio.h>

int main(){
    printf("Positif, Negatif ou Nul\n");
    int n;

    printf("enter un nombre : ");
    scanf("%d", &n);

    if(n > 0)
        printf("%d est positif!",n);
    else if(n == 0)
        printf("%d est Nul!",n);
    else
        printf("%d est negatif!",n);
    
        return 0;
}