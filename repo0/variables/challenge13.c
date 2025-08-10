#include<stdio.h>

int main(){
    printf("AFFICHAGE DES VALEUR BINAIRES ET HEXADECIMALE EUIVALANTES\n");
    int n, nb[10], nh[10],i;

    printf("enter un nombre: ");
    scanf("%d", &n);
    for(i=0; n>0; i++){
        nb[i] = n%2;
        n=n/2;
    }
    printf("\nle nombre binaire = ");
    for(i=i-1; i>=0;i--)
        printf("%d", nb[i]);

    // for(i=0; n>0; i++){
    //     nh[i] = n%16;
    //     n=n/16;
    // }
    // printf("\nle nombre en hexadecimal = 0x");
    // for(i=i-1; i>=0;i--){
    //     if(nh[i]==  10)
    //         printf("A");
    //     else if(nh[i]==  11)
    //         printf("B");
    //     else if(nh[i]==  12)
    //         printf("C");
    //     else if(nh[i]==  13)
    //         printf("D");
    //     else if(nh[i]==  14)
    //         printf("E");
    //     else if(nh[i]==  15)
    //         printf("F");
    //     else
    //         printf("%d", nh[i]);
    // }
    printf("En hexadécimal : %X\n", n);

    printf("En binaire : %d%d%d%d%d%d%d%d\n",
        (n & 0x80) >> 7,
        (n & 0x40) >> 6,
        (n & 0x20) >> 5,
        (n & 0x10) >> 4,
        (n & 0x08) >> 3,
        (n & 0x04) >> 2,
        (n & 0x02) >> 1,
        (n & 0x01));
    return 0;



}