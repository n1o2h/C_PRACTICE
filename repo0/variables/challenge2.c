#include<stdio.h>

int main(){
    printf("LA TRANSFORMATION DE LA TEMPERATURE\n");
    float T, K;
    printf("veuillez saissir la temperature en Celsius : ");
    scanf("%f", &T);

    K = T + 273.15;
    printf("La temperature en Kelvin : %.2fK", K);
    return 0;
}