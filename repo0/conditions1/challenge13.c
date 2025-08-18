#include<stdio.h>

int main(){
    int xA, yA, xB, yB, xC, yC;

    printf("Point sur un Segment\n");

    printf("les cordonnees du segment: \n");
    printf("XA: ");
    scanf("%d", &xA);
    printf("XB: ");
    scanf("%d", &xB);
    printf("YA: ");
    scanf("%d", &yA);
    printf("YB: ");
    scanf("%d", &yB);
    printf("le segment AB(%d,%d) -> (%d,%d)", xA, yA, xB, yB);
    printf("\nveuillez entrer les cordonnes du  point a chercher: ");
    scanf("%d %d", &xC, &yC);
    printf("\nle point C(%d,%d)", xC,yC);
    
    if(xC >= xA && xC <= xB && yC>= yA && yC <= yB)
            printf("\nle point C se trouve dans le segment");
    else
        printf("\nle point C ne se trouve pas dans le segment");

    
    return 0;
}