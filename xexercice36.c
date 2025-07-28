#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i, n;
    srand(time(0)); 
    int randomNumber;
    do {
        randomNumber = rand(); // Generate a random number
    } while (randomNumber < 1 || randomNumber > 30);
    printf("RANDOM: %d\n", randomNumber);
    printf("bonjour, j'ai choisi un nombre entre 1 est 30, maintenent c'est a vous de de trouver le nombre en 5 tentatives! C'est parti !\n");
    
    i = 1;
    printf("quel est le nombre: ");
    scanf("%d", &n);
    while(i<5){
        if(n == randomNumber){
            printf("supper, %d est le nombre choisie dans %d tentation",n, i);
            break;
        }
        else if(n > randomNumber){
            i++;
            printf("c'est plus!");
            printf("quel est le nombre: ");
            scanf("%d", &n);

        }
        else {
            i++;
            printf("c'est moins!");
            printf("quel est le nombre: ");
            scanf("%d", &n);
        }
        if(i > 5)
            printf("oups! vous avez depasse 5 tenetatives!");
    }
    return 0;
        }
