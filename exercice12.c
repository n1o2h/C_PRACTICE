#include<stdio.h>
int main(){
    printf("***CHANGEENT SELO CONDITION***");

    int a, b, temp;
    printf("veuillez saisir a:");
    scanf("%d", &a);
    printf("veuillez saisir b:");
    scanf("%d", &b);

    if(a*b > 0){
        
        temp = a;
        a = b;
        b = temp;
        printf("les nombres ont le meme signes.\n a = %d , b = %d", a, b);
    }
    else{
        temp = a+b;
        b = a*b;
        a = temp;
        printf("les nombres ont de signes differents.\n la somme a = %d,   le produit b = %d", a, b);
    }
    return 0;
}