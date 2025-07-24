#include<stdio.h>

int main(){
    printf("***LA MONTION DES NOTES***\n");

    int n1, n2, n3;
    float M;

    printf("veuillez saisir la note 1(entre 0 est 20): ");
    scanf("%d", &n1);
    if(n1 < 0 || n1 > 20){
    printf("SVP saisir la note 1(entre 0 est 20): ");
    scanf("%d", &n1);
    }
    printf("veuillez saisir la note 2(entre 0 est 20): ");
    scanf("%d", &n2);
    if(n2 < 0 || n2 > 20){
    printf("SVP saisir la note 2(entre 0 est 20): ");
    scanf("%d", &n2);
    }
    printf("veuillez saisir la note 3(entre 0 est 20): ");
    scanf("%d", &n3);
    if(n3 < 0 || n3 > 20){
    printf("SVP saisir la note 3(entre 0 est 20): ");
    scanf("%d", &n3);
    }
    
    M = (n1 + n2 + n3) / 3;
    if(M <10)
        printf("Moyenne: %.2f - Insuddisant!");
    else if(M >= 10 && M < 12)
        printf("Moyenne: %.2f - Passable!");
    else if(M >= 12 && M < 14)
        printf("Moyenne: %.2f - Assez Bien!");
    else if(M >= 14 && M < 16)
        printf("Moyenne: %.2f - Bien!");
    else
        printf("Moyenne: %.2f - Tres Bien!");

return 0;
}
