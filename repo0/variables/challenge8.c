#include<stdio.h>
#include<math.h>

int main(){
    printf("LA MOYENNE GEOMETRIQUE\n");

    int a, b, c;
    float M;
    printf("entrer a:");
    scanf("%d",&a);
    printf("entrer b : ");
    scanf("%d",&b);
    printf("entrer c : ");
    scanf("%d",&c);

    M =1 / pow((a*b*c),3);

    printf("\nLa moyenne Geometrique : %.5f", M);
    

    return 0;
}