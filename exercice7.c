#include <stdio.h>

int main(){
    printf("***PERMUTATION DE DEUX NOMBRES***");

    int A, B, temp;
    
    printf("\nveuillez saisir l'entier A :");
    scanf("%d", &A);
    printf("veuillez saisir l'entier B :");
    scanf("%d", &B);
    printf("Avant permutation: \n A = %d\n B = %d", A, B);
    temp = A;
    A = B;
    B = temp;

    printf("\nApres permutation 1 :\n A = %d\n B = %d", A, B);

    A = A + B;
    B = A - B;
    A = A - B;
    printf("\nApres permutation 2:\n A = %d\n B = %d", A, B);
    
    return 0;
}