#include<stdio.h>

int main(){
    printf("CONVERSION DE LA VITESSE\n");
    float v, m;
    printf("veuillez saisir la vitesse en Km/h :");
    scanf("%f", &v);

    m = v * 0.27778;
    printf("La vitesse en m/h : %.2f", m);
    return 0;
}
