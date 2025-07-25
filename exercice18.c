#include<stdio.h>

int main(){
    printf("***PRIX TTC***");

    float prix, TTC;
    char cat;

    printf("veuillez saisir la categorie du produit (A, B, C) : ");
    scanf("%c", &cat);
    printf("veuillez saisir le prx hors taxe  du produit:");
    scanf("%f", &prix);

    // METHODE 1
    // if(cat == 'A')
    //     TTC = prix + prix * 0.07;
    // else if(cat == 'B')
    //     TTC = prix +prix * 0.20;
    // else if(cat == 'C')
    //     TTC = prix +prix * 0.35;
    // else
    //     printf("n'exist pas dans nos categories");
    
    //     printf("le prix TTC du produit  dans la categorie %c  est : %.2f", cat, TTC);
    // METHODE 2
        switch(cat){
            case 'A': {TTC = prix + prix * 0.07;
                    printf("le prix TTC du produit  dans la categorie %c  est : %.2f", cat, TTC);
                    break;
                }
            case 'B': {TTC = prix +prix * 0.20;
                    printf("le prix TTC du produit  dans la categorie %c  est : %.2f", cat, TTC);
                    break;
                }
            case 'C': {TTC = prix +prix * 0.35;
                printf("le prix TTC du produit  dans la categorie %c  est : %.2f", cat, TTC);
                break;
            }
            default: printf("n'exist pas dans nos categories");

        }
        return 0;


}