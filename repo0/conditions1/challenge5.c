#include<stdio.h>
#include<math.h>

int main(){

    int an, mois, jour, h, m, s;

    printf("Conversion d'Année\n");

    printf("enter l'annee: ");
    scanf("%d", &an);

    if(((an% 4 == 0)&&(an % 100 != 0 ))||(an % 400 == 0)){
        printf("l'annee %d est bissextile(366jours)\n",an);
        jour = an * 365;
        mois = an * 12;
        h = jour * 12;
        m = jour * 720;
        s = jour * 43200;
        printf("ANNEE: %d\n", an);
        printf("MOIS: %d\n", mois);
        printf("JOURS: %d\n", jour);
        printf("HEURES: %d\n", h);
        printf("MINUTES: %d\n", m);
        printf("SECONDES: %d\n", s);
    }
    else{
        printf("l'annee %d est non bissextile(365jours)",an);
        jour = an * 365;
        mois = an * 12;
        h = jour * 12;
        m = jour * 720;
        s = jour * 43200;
        printf("ANNEE: %d\n", an);
        printf("MOIS: %d\n", mois);
        printf("JOURS: %d\n", jour);
        printf("HEURES: %d\n", h);
        printf("MINUTES: %d\n", m);
        printf("SECONDES: %d\n", s);
    }

    return 0;
}