#include <stdio.h>
#include <stdlib.h>

main(){
    float peso, altura, imc;
    printf("Calculando o IMC (Indice de Massa Corporal)\n");
    printf("Insira a sua altura: ");
    scanf("%f", &altura);
    printf("Insira o seu peso: ");
    scanf("%f", &peso);
    imc = peso / (altura*altura);
    printf("Uma pessoa que mede %.2fcm e pesa %.2f kg, tem um IMC de: %.2f\n", altura, peso, imc);
    system("PAUSE");
}