#include<stdio.h>

int main(){
    printf("AFFICHAGE TEMPERATURE\n");
    float C;
    printf("veuillez saisir la temperature en Celsius : ");
    scanf("%f", &C);
    if(C < 0)
        printf("Solide!");
    else if(C >= 100)
        printf("Gaz!");
    else
        printf("Liquide!");
    return 0;
}