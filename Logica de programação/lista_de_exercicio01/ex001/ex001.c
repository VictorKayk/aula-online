#include <stdio.h>

main(){
    float altura, base, area;
    printf("Calculando a area de um triangulo.\n");
    system("PAUSE");
    printf("Insira a altura do triangulo: ");
    scanf("%f", &altura);
    printf("Insira a base do triangulo: ");
    scanf("%f", &base);
    area = (altura * base) / 2;
    printf("Um triangulo com altura de %.1f e com base de %.1f, tem uma area de: %.1f\n", altura, base, area);
    system("PAUSE");

}