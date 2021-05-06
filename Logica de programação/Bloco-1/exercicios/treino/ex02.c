#include <stdio.h>
#include <stdlib.h>

main(){
    float num, triplo;
    printf("O triplo de um numero:\n");
    printf("Insira um numero:");
    scanf("%f", &num);
    triplo = num*3;
    printf("O tiplo do numero %.2f, e igual a: %.2f\n", num, triplo);
    system("PAUSE");
}