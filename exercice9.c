#include <stdio.h>
#include <math.h>

int main(){
    printf("***DISTANCE EUNTRE DEUX POINTS***");
    int XA, XB, YA, YB, AB;

    printf("veuillez saisir XA: ");
    scanf("%d", &XA);
    printf("veuillez saisir YA: ");
    scanf("%d", &YA);
    printf("veuillez saisir XB: ");
    scanf("%d", &XB);
    printf("veuillez saisir YB: ");
    scanf("%d", &YB);

    AB = sqrt(pow((XB-XA),2)  + pow((YB-YA), 2));
    printf("la distance entre A et B: %d", AB);

    return 0;
}