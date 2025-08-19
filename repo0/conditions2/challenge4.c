#include<stdio.h>

int main(){
    float score;
    int anciennete, recomponses;

    printf("Evaluation de Performance d'Employe");

    printf("Entrer le score de performance(de 0 a 100): ");
    scanf("%f", &score);
    printf("Entrer l'anciennete(en annee): ");
    scanf("%d", &anciennete);
    printf("Entrer les recomponses recues(0 pour aucune, 1 pour une, 2 pour deux ou plus): ");
    scanf("%d", &recomponses);

    if(recomponses == 0){
        if(score >= 90 && anciennete >= 5)
            printf("Excellente");
        else if (score >= 75 &&  anciennete >= 3)
            printf("Bonne");
        else if(score >= 50 && anciennete < 3)
            printf("Satisfaisante");
        else
            printf("Insuffisante");
    }else if(recomponses == 1){
        if(score >= 90 && anciennete >= 5){
            score = score * 0.10;
            printf("Excellente, le score de performance est : %.2f", score);
        }
        else if (score >= 75 &&  anciennete >= 3){
            score = score * 0.10;
            printf("Bonne, le score de performance est : %.2f", score);
        }
        else if(score >= 50 && anciennete < 3){
            score = score * 0.10;
            printf("Satisfaisante, le score de performance est : %.2f", score);
        }else{
            score = score * 0.10;
            printf("Insuffisante, le score de performance est : %.2f", score);
        }
    }else{
        if(score >= 90 && anciennete >= 5){
            score = score * 0.20;
            printf("Excellente, le score de performance est : %.2f", score);
            
        }
        else if (score >= 75 &&  anciennete >= 3){
            score = score * 0.20;
            printf("Bonne, le score de performance est : %.2f", score);
        }
        else if(score >= 50 && anciennete < 3){
            score = score * 0.20;
            printf("Satisfaisante, le score de performance est : %.2f", score);
        }else{
            score = score * 0.20;
            printf("Insuffisante, le score de performance est : %.2f", score);
        }
    }

    return 0;
}