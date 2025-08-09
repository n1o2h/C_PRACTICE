#include<stdio.h>

int main(){
    printf("SURFACE D'UN RECTANGLE\n");

    int L, l, S;
    printf("entrer la longeur : ");
    scanf("%d", &L);
    printf("enter la largeur : ");
    scanf("%d", &l);

    S= L * l;
    printf("la surface du rectangle : %d", S);

    return 0;
}