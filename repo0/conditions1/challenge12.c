#include<stdio.h>

int main(){
    printf("Comparaison d'Instants");

    int h1,h2,m2,s2,m1,s1;

    printf("enter une date (hh mm ss): ");
    scanf("%d %d %d", &h1, &m1, &s1);
    printf("enter une date (hh mm ss): ");
    scanf("%d %d %d", &h2, &m2, &s2);

    if(h1 == h2 && m1 == m2 && s1 == s2)
        printf("il s'agit du meme instant.");
    else if(h1 == h2){
        if(m1 == m2){
            if(s1 > s2)
                printf("le deuxieme instant vient avant le premier.");
            else
                printf("le premier instant vient avant le deuxieme.");
        }else if(m1 > m2){
            if(s1 > s2)
                printf("le deuxieme instant vient avant le premier.");
            else
                printf("le premier instant vient avant le deuxieme.");
        }else{
            printf("le premier instant vient avant le deuxieme.");
        }
    }else if(h1 > h2)
            printf("le deuxieme instant vient avant le premier.");
        else
            printf("le premier instant vient avant le deuxieme.");
        
        
    return 0;
}