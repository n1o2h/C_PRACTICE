#include<stdio.h>

int main(){
    printf("Formatage de la Date\n");

    char date[11];
    do{
    printf("enter un date sous la forme JJ/MM/AAAA : ");
    scanf("%10s", date);
    }while(date[2] != '/' || date[5] != '/');

    printf("la date : %s\n", date);

    for(int i=0;i<11;i++){
    if(date[i] == '/'){
        if(date[i+1] == '0'){
            switch(date[i+2]){
                case '1':printf("%c%c-junary-%c%c%c%c",date[i-2], date[i-1], date[i+4],date[i+5],date[i+6],date[i+7]);
                    break;
                case '2':printf("%c%c-febrary-%c%c%c%c",date[i-2], date[i-1], date[i+4],date[i+5],date[i+6],date[i+7]);
                    break;
                case '3':printf("%c%c-march-%c%c%c%c",date[i-2], date[i-1], date[i+4],date[i+5],date[i+6],date[i+7]);
                    break;
                case '4':printf("%c%c-april-%c%c%c%c",date[i-2], date[i-1], date[i+4],date[i+5],date[i+6],date[i+7]);
                    break;
                case '5':printf("%c%c-may-%c%c%c%c",date[i-2], date[i-1], date[i+4],date[i+5],date[i+6],date[i+7]);
                    break;
                case '6':printf("%c%c-june-%c%c%c%c",date[i-2], date[i-1], date[i+4],date[i+5],date[i+6],date[i+7]);
                    break;
                case '7':printf("%c%c-july-%c%c%c%c",date[i-2], date[i-1], date[i+4],date[i+5],date[i+6],date[i+7]);
                    break;
                case '8':printf("%c%c-august-%c%c%c%c",date[i-2], date[i-1], date[i+4],date[i+5],date[i+6],date[i+7]);
                    break;
                case '9':printf("%c%c-september-%c%c%c%c",date[i-2], date[i-1], date[i+4],date[i+5],date[i+6],date[i+7]);
                    break;
                // default: printf("erreur de saisie veuillez enter la bonne  date!");
                    // break;
            }
        }else if(date[i+1] == '1'){
            switch(date[i+2]){
                case '0':printf("%c%c-october-%c%c%c%c",date[i-2], date[i-1], date[i+4],date[i+5],date[i+6],date[i+7]);
                        break;
                case '1':printf("%c%c-nouvember-%c%c%c%c",date[i-2], date[i-1], date[i+4],date[i+5],date[i+6],date[i+7]);
                        break;
                case '2':printf("%c%c-december-%c%c%c%c",date[i-2], date[i-1], date[i+4],date[i+5],date[i+6],date[i+7]);
                        break;
                // default:printf("erreur de saisie veuillez enter la bonne  date!");
                        // break;
            }
        }
    }
    // else
    //         printf("la date saisie est incorrect!");
    }

    return 0;
}