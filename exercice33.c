#include<stdio.h>
int main(){
    printf("***SUITE REPETITIVE***");

    int n, i, u;

    printf("veuillez saisir la valeur de n: ");
    scanf("%d", &n);
    u = 6;
    for (i = 1; i<=n; i++)
        u = 4 * u + 10;
    printf("U%d = %d ", n, u);
    return 0;
}