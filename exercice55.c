#include<stdio.h>

int main(){
    printf("***RECHERCHE D'OCCURENCE***\n");

    int T[10];
    int i, n,a=0;

    for(i=0;i<10;i++){
        printf("saisir l'element %d : ",i+1);
        scanf("%d", &T[i]);
    }
    printf("veuillez saisir le nombre cherche: ");
    scanf("%d", &n);

    for(i=1;i<10;i++){
        if(n == T[i]){
            a++;
        }
        else
            a=0;
    }    
    if(a == 0)
        printf("%d ne se trouve dans le tableau\n", n);
    else
        printf("%d se trouve dans le tableau\n", n);
    return 0;
}