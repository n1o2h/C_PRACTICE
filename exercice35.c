#include<stdio.h>

int main(){
    printf("***NOMBRE PREMIER***");

    int n, i, j;

    printf("veuillez saisir un numbre n :");
    scanf("%d", &n);

        j = 0;
        for(i = 2; i <=n/2; i++){
            if(n % i == 0){
                j++;
                break;
            }
        }
    if(j == 0)
        printf("%d est un nombre premier", n);
    else
        printf("%d n'est pas un nombre premier", n);
    
    

}