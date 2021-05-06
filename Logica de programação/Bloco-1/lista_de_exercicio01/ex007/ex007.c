#include <stdio.h>
#include <stdlib.h>

main(){
    float largura, comprimento, area, quant_piso, valor_do_metro, valor_do_piso, pagamento, troco, falta_troco;
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
    printf("\nInsira o valor do metro quadrado: ");
    scanf("%f", &valor_do_metro);
    valor_do_piso = valor_do_metro * area;
    printf("\nO valor do piso vai ficar em: R$%.2f", valor_do_piso);
    printf("\nPor favor, insira o valor que ira pagar pela compra: ");
    scanf("%f", &pagamento);
    troco = pagamento - valor_do_piso;
    if (troco < 0){
        falta_troco = valor_do_piso - pagamento;
        printf("\nSenhor, o valor de R$ %.2f, nao e suficiente para pagar a conta de %.2f, ainda falta R$ %.2f.\n", pagamento, valor_do_piso, falta_troco);
    }
    if (troco == 0){
        printf("\nEsse foi o valor exato da compra.\nMutio brigado por comprar!!!\n");
    }
    if (troco > 0){
        printf("\nSenhor, seu troco sera de R$ %.2f.\nMuito obrigado por comprar!!!\n", troco);
    }
    system("PAUSE");
}