#include <stdio.h>
#include <stdlib.h>

main(){
    float num1, num2, num3, soma;
    printf("Valores A, B e C\n");
    printf("\nInsira o valor de A: ");
    scanf("%f", &num1);
    printf("\nInsira o valor de B: ");
    scanf("%f", &num2);
    printf("\nInsira o valor de C: ");
    scanf("%f", &num3);
    soma = num1 + num2;
    if (soma > num3){
        printf("\nA soma de A + B (%.1f + %.1f) igual a %.1f, e menor que o valor de C (%.1f)\n", num1, num2, soma, num3);
    }
    else if(soma = num3){
        printf("\nA soma de A + B (%.1f + %.1f) igual a %.1f, e igual ao valor de C (%.1f)\n", num1, num2, soma, num3);
    }
    else{
        printf("\nA soma de A + B (%.1f + %.1f) igual a %.1f, e maior que o valor de C (%.1f)\n", num1, num2, soma, num3);
    }
    system("PAUSE");
}