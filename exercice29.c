#include<stdio.h>
#include<math.h>

int main(){
    printf("***CALCUL ET AFFICHAG D'UNE SOMME FACTORIELLE***");

    int n, nbrimp = 0, i, S;

    printf("veuillez saisir un nombre: ");
    scanf("%d", &n);
    i=1;

        do{
            if(i % 2 != 0){
                nbrimp++;
                S = S + pow(i,2);
            }
            i++;
            
        }while(nbrimp != n);
    printf("S = %d", S);
}