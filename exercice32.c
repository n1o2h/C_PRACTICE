#include<stdio.h>

int main(){
    printf("*** ***");

    int nbr_ans;
    float p_age, p_kech;
    p_age = 50000;
    p_kech = 1000000;
    nbr_ans =0;
    while(p_age < p_kech){
        p_age = p_age * 1.08;
        p_kech = p_kech + 50000;
        nbr_ans++;
    }
    printf("agadir deppasser marakech apres %d ans.", nbr_ans);
}