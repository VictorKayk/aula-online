#include <stdio.h>
#include <stdlib.h>

main(){
    float altura, peso_ideal;
    char sexo[40];
    printf("Calculando o peso ideal:\n");
    printf("Insira sua altura: ");
    scanf("%f", &altura);
    printf("Insira sue sexo: [M/F] ");
    scanf("%s", &sexo);
    peso_ideal = (72.7*altura) - 58;
    printf("O peso ideal para uma pessoa que mede %.2f cm, como voce, e de: %.2f kg\n", altura, peso_ideal);
    system("PAUSE");
}