#include<stdio.h>
int main(){
    printf("***LA SOMME ET LA MOYENNE DES NOTES***");

    int n1, n2, n3, n4, n5, S, M;

    printf("\nveuillez saisir la note 1 : ");
    scanf("%d", &n1);
    printf("veuillez saisir la note 2 : ");
    scanf("%d", &n2);
    printf("veuillez saisir la note 3 : ");
    scanf("%d", &n3);
    printf("veuillez saisir la note 4 : ");
    scanf("%d", &n4);
    printf("veuillez saisir la note 5 : ");
    scanf("%d", &n5);
    S = n1+n2+n3+n4+n5;
    M = S/5;
    printf("la somme des 5 notes: %d", S);
    printf("\nla moyenne des 5 notes: %d", M);

    return 0;
}