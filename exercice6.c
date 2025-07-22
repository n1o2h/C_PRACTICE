#include <stdio.h>
#include <math.h>

int main(){
    printf("***VOLUME DE LA SPERE***");

    const float PI= 3.14;
    float rayon, volume;
    printf("\nveuillez saisir le rayon de la spere: ");
    scanf("%f", &rayon);
    volume = (4 * PI * pow(rayon, 3))/3;

    printf("\n le volude de la spere: %.2f", volume);
    return 0;
}