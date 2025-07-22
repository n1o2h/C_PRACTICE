#include<stdio.h>

int main(){
    printf("***LA RESISTANCE  EQUIVALANTE***");

    int R1, R2, R3, X;
    float Req;
    printf("veuillez saisir la valeur de la resistance 1: ");
    scanf("%d", &R1);
    printf("veuillez saisir la valeur de la resistance 2: ");
    scanf("%d", &R2);
    printf("veuillez saisir la valeur de la resistance 3: ");
    scanf("%d", &R3);
    printf("est ce que le branchement en serie ou paralle (1 pour en serie, et 0 pour en paralle): ");
    scanf("%d", &X);

    if(X == 1){
        Req = R1 + R2 +R3;
        printf("la resistance equivalente  dans le branchement en serie : %.2f", Req);
    }else
    {
        Req = (R1 * R2 * R3)/ ((R1*R2) + (R1*R3) + (R2*R3));
        printf("la resistance equivalente dans le branchement en paralelle : %.2f", Req);
    }
    return 0;
    }