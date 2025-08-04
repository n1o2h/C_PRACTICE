#include<stdio.h>

int main(){
    printf("***TABLEUX DES VOYELLES DE L'ALPHABET FRANCAIS***\n");

    char T[6]= {'a', 'e', 'i', 'o', 'u', 'y'};
    int i;

    printf("Les Six voyelles de l'alphabet français: \n");
    for(i=0;i<6;i++){
        printf("%c\n", T[i]);
    }

}