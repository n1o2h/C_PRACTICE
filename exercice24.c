#include<stdio.h>

int main(){
    printf("***STRUCTURE REPEPTITIVE WITH WHILE AND DO WHILE***");

    int nbr,i;
    printf("veuillez saisir un nombre: ");
    scanf("%d", &nbr);
    i = nbr +1;

    // while(i <= nbr + 10){
    //     printf("%d\n", i);
    //     i++;
    // }
    do{
        printf("%d\n", i);
        i++;
    }while(i <= nbr+10);


    return 0;
}