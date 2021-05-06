#include <stdio.h>
#include <stdlib.h>

main(){
    float largura, comprimento, area;
    printf("Calculando a area de uma sala.\n");
    printf("\nInsira a largura da sala (em metros): ");
    scanf("%f", &largura);
    printf("Insira o comprimento da sala (em metros): ");
    scanf("%f", &comprimento);
    area = largura * comprimento;
    printf("\nA area de com sala com %.1fm de largura e %.1fm de comprimento, e de: %.1fm^2\n", largura, comprimento, area);
    system("PAUSE");
}