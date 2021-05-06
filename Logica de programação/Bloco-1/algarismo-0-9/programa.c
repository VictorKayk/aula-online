#include <stdio.h>
#include <stdlib.h>

main(){
    int num;
    printf("----- Algarismos -----\n");
    printf("\nPor favor, informe um numero de 0 a 9: ");
    scanf("%d", &num);
    if (num != "%d"){
        printf("\nO numero nao e inteiro.\n");
    }
    switch(num){
        case 0:
            printf("Zero");
            break;
        case 1:
            printf("Um");
            break;
        case 2:
            printf("Dois");
            break;
        case 3:
            printf("Tres");
            break;
        case 4:
            printf("Quatro");
            break;
        case 5:
            printf("Cinco");
            break;
        case 6:
            printf("Seis");
            break;
        case 7:
            printf("Sete");
            break;
        case 8:
            printf("Oito");
            break;
        case 9:
            printf("Nove");
            break;
        default:
            printf("Algarismo invalido.");
            break;
    }
}