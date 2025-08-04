#include <stdio.h>

int main(){
    printf("***TABLEAUX***\n");
    int T[10];
    int i;
    for(i=0; i<10; i++){
        printf("entrer la valeur %d: ",i+1);
        scanf("%d", &T[i]);
        // T[i] = 0;
    }

    for(i = 0;i<10;i++){
        printf("T[%d] = %d\n", i, T[i]);
    }
    return 0;
}