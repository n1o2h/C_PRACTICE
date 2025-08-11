#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    printf(" Jour de la Semaine\n");

    int randN;

    srand(time(0));

    randN = rand();
    do{
        
        printf("le jour de la semaine : %d", randN);
    }while(randN <=0 || randN > 7);

}