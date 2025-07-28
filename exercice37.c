#include<stdio.h>
#include<math.h>

int main(){
    int a, b, S, St, M, R, D, P, op, i;

    printf("***MON CALCULATRICE***");

    
    do{
        printf("\n***LE MENUE:\n");
    printf("1 - SOMME.\n");
    printf("2 - SOUSTRACTION.\n");
    printf("3 - MULTIPLICATION.\n");
    printf("4 - DIVISION.\n");
    printf("5 - RESTE D'UNE DIVISION ENTIERE.\n");
    printf("6 - PUISSANCE.\n");
    printf("vuillez choisir l'operation : ");
    scanf("%d", &op);
    printf("veuillez saisir le premier terme: ");
    scanf("%d", &a);
    printf("veuillez saisir le deuxieme terme: ");
    scanf("%d", &b);
        switch(op){
            case 1:{printf("A + B = %d", a+b);
                break;
            }
            case 2:{printf("A - B = %d", a-b);
                break;
            }
            case 3:{printf("A * B = %d", a*b);
                break;
            }
            case 4:{if(b!=0){printf("A / B = %d", a/b);
                    break;}
                    else{
                        printf("erreur, la division sur 0 est impossible");
                        break;
                    }
                    }
            case 5:{printf("A % B = %d", a%b);
                break;
            }
            case 6 :{printf("A^B = %d", pow(a,b));
                break;
            }
            default :{printf("l'opperateur est introuvable");
                    break;
            }
        }
        printf("\nvoulez vous demarrer une autre operation (oui-1) ou bien arreter le programME (non-0)?");
        scanf("%d", &i);
    }while(i != 0);

    printf("AU REVOIRE!!!");
    return 0;
}