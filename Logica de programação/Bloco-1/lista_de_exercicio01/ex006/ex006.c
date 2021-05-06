#include <stdio.h>
#include <stdlib.h>

main(){
    float largura, comprimento, area, quant_piso;
    int quant_caixa;
    printf("Calculando a area de uma sala 2.0\n");
    printf("\nInsira a largura da sala (em metros): ");
    scanf("%f", &largura);
    printf("Insira o comprimento da sala (em metros): ");
    scanf("%f", &comprimento);
    area = largura * comprimento;
    printf("\nA area de com sala com %.1fm de largura e %.1fm de comprimento, e de: %.1fm^2\n", largura, comprimento, area);
    printf("\nPor favor insira a quantidade de piso que vem em cada caixa: ");
    scanf("%f", &quant_piso);
    quant_caixa = ceil(area/quant_piso);
    printf("\nA quantidade necessaria de caixas sera de: %d\n", quant_caixa);
    system("PAUSE");
}