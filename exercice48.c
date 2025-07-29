#include<stdio.h>

int main(){
    int c,p, i, j;
    printf("veuillez saisir le nombre de lignes :");
    scanf("%d", &c);
    p =1;
    for(i=1;i<=2*c-1;i++){
        for(j=1;j<=p;j++){
            printf("* ");
        }
        if(i<c)
            p++;
        else
            p--;
        printf("\n");
        }
    
    return 0;
}