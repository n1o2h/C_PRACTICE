#include<stdio.h>
#include<math.h>

int main(){
    printf("LA DISTANCE ENTRE DEUX POINTS\n");
    int x1,x2,y1,y2,z1,z2;
    float d;

    printf("\nLe point 1:\n");
    printf("entrer x1 : ");
    scanf("%d",&x1);
    printf("entrer y1 : ");
    scanf("%d",&y1);
    printf("entrer z1 : ");
    scanf("%d",&z1);
    printf("\nLe point 2:\n");
    printf("entrer x2 : ");
    scanf("%d",&x2);
    printf("entrer y2 : ");
    scanf("%d",&y2);
    printf("entrer z2 : ");
    scanf("%d",&z2);

    d = sqrt(pow((x2-x1),2) + pow((y2-y1),2) + pow((z2-z1),2));
    printf("la distance entre deux points dans un espace 3D : %.2f",d);

    return 0;

}