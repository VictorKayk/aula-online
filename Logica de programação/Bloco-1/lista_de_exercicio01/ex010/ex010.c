#include <stdio.h>
#include <stdlib.h>

main(){
    float tem_celsius, tem_kelvin, tem_fahre;
    printf("Convertendo temperaturas.\n");
    printf("\nInsira a temperatura em graus Celsius: ");
    scanf("%f", &tem_celsius);
    tem_kelvin = tem_celsius + 273;
    printf("\n%.1f em graus Celsius e equivalente a: %.1f em graus Kelvin.\n", tem_celsius, tem_kelvin);
    tem_fahre = (1.8 * tem_celsius) + 32;
    printf("%.1f em graus Celsius e equivalente a: %.1f em graus Fahrenheit.\n", tem_celsius, tem_fahre);
    system("PAUSE");
}