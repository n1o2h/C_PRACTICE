#include<stdio.h>

int main(){
    printf("***NOMBRE DE PHOTOCOPIES");

    int Nf;
    float facture;

printf("\nveuillez saisir le nombre de photocopies: ");
scanf("%d", &Nf);

if(Nf <= 10){
    facture =  Nf * 0.30;
    printf("la facture1 egale %.2f Euro", facture);
}else if(Nf <= 30){
    facture = 10 * 0.30 + (Nf -10) * 0.25;
    printf("la facture2 egale %.2f Euro", facture);
}
else{
    facture = 10 * 0.30 + 20 * 0.25 + (Nf - 30) * 0.20;
    printf("la facture3 egale %.2f Euro", facture);
}
printf("\nla facture egale %.2f Euro", facture);
return 0;

}