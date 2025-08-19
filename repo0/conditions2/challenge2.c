#include<stdio.h>

int main(){

    int age, type_v, nbr_acc;
    float prime_base;

    printf("Calcul de Prime d'Assurance Auto\n");

    printf("veuillez entrer l'age du conducteur(en annee): ");
    scanf("%d", &age);
    printf("veuillez saisir le type de voiture (1 pour sportive, 2 pour utilitaire, 3 pour familiale): ");
    scanf("%d", &type_v);
    printf("veuillez sasair le nombre d'accidents au cours des 5 derinieres annees: ");
    scanf("%d", &nbr_acc);
    printf("veuillez saisir la prime de base: ");
    scanf("%f", &prime_base);


    if(nbr_acc > 1){
        if(age < 25){
            if(type_v == 1){
                prime_base = prime_base * 1.5 + prime_base * 2 + prime_base * 0.30;
                printf("\nla prime d'assurance de la voiture: %.2f", prime_base);
            }
            else if(type_v == 2){
                prime_base = prime_base * 1.5 + prime_base * 1.2 + prime_base * 0.30;
                printf("\nla prime d'assurance de la voiture: %.2f", prime_base);
            }
            else if(type_v == 3){
                prime_base = prime_base * 1.5 + prime_base * 1.1 + prime_base * 0.30;
                printf("\nla prime d'assurance de la voiture: %.2f", prime_base);
            }
            else
                printf("le type de voiture est introuvable!");
        }else if(age > 65){
            if(type_v == 1){
                prime_base = prime_base * 1.2 + prime_base * 2 + prime_base * 0.30;
                printf("\nla prime d'assurance de la voiture: %.2f", prime_base);
            }
            else if(type_v == 2){
                prime_base = prime_base * 1.2 + prime_base * 1.2 + prime_base * 0.30;
                printf("\nla prime d'assurance de la voiture: %.2f", prime_base);
            }
            else if(type_v == 3){
                prime_base = prime_base * 1.2 + prime_base * 1.1 + prime_base * 0.30;
                printf("\nla prime d'assurance de la voiture: %.2f", prime_base);
            }
            else
                printf("le type de voiture est introuvable!");
        }else{
            if(type_v == 1){
                prime_base = prime_base * 2 + prime_base * 0.30;
                printf("\nla prime d'assurance de la voiture: %.2f", prime_base);
            }
            else if(type_v == 2){
                prime_base = prime_base * 1.2 + prime_base * 0.30;
                printf("\nla prime d'assurance de la voiture: %.2f", prime_base);
            }
            else if(type_v == 3){
                prime_base = prime_base * 1.1 + prime_base * 0.30;
                printf("\nla prime d'assurance de la voiture: %.2f", prime_base);
            }
            else
                printf("le type de voiture est introuvable!");
        }
    }else{
        if(age < 25){
            if(type_v == 1){
                prime_base = prime_base * 1.5 + prime_base * 2 ;
                printf("\nla prime d'assurance de la voiture: %.2f", prime_base);
            }
            else if(type_v == 2){
                prime_base = prime_base * 1.5 + prime_base * 1.2;
                printf("\nla prime d'assurance de la voiture: %.2f", prime_base);
            }
            else if(type_v == 3){
                prime_base = prime_base * 1.5 + prime_base * 1.1;
                printf("\nla prime d'assurance de la voiture: %.2f", prime_base);
            }
            else
                printf("le type de voiture est introuvable!");
        }else if(age > 65){
            if(type_v == 1){
                prime_base = prime_base * 1.2 + prime_base * 2;
                printf("\nla prime d'assurance de la voiture: %.2f", prime_base);
            }
            else if(type_v == 2){
                prime_base = prime_base * 1.2 + prime_base * 1.2;
                printf("\nla prime d'assurance de la voiture: %.2f", prime_base);
            }
            else if(type_v == 3){
                prime_base = prime_base * 1.2 + prime_base * 1.1;
                printf("\nla prime d'assurance de la voiture: %.2f", prime_base);
            }
            else
                printf("le type de voiture est introuvable!");
        }else{
            if(type_v == 1){
                prime_base = prime_base + prime_base * 2;
                printf("\nla prime d'assurance de la voiture: %.2f", prime_base);
            }
            else if(type_v == 2){
                prime_base = prime_base + prime_base * 1.2;
                printf("\nla prime d'assurance de la voiture: %.2f", prime_base);
            }
            else if(type_v == 3){
                prime_base = prime_base + prime_base * 1.1;
                printf("\nla prime d'assurance de la voiture: %.2f", prime_base);
            }
            else
                printf("le type de voiture est introuvable!");
        }
    }

    return 0;
}