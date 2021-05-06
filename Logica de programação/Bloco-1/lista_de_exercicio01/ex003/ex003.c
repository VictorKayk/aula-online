#include <stdio.h>
#include <stdlib.h>

main(){
    float preco, preco_final, pagamento, troco, falta_troco;
    int quantidade;
    printf("Calculando o troco\n");
    printf("Insira o preco do produto: ");
    scanf("%f", &preco);
    printf("Insira a quantidade desejada: ");
    scanf("%d", &quantidade);
    preco_final = preco*quantidade;
    printf("O produto que custa R$ %.2f, comprado %d vezes, custara: R$ %.2f.\n", preco, quantidade, preco_final);
    printf("Por favor, insira o valor que ira pagar pela compra: ");
    scanf("%f", &pagamento);
    troco = pagamento - preco_final;
    if (troco < 0){
        falta_troco = preco_final - pagamento;
        printf("Senhor, o valor de R$ %.2f, nao e suficiente para pagar a conta de %.2f, ainda falta R$ %.2f.", pagamento, preco_final, falta_troco);
    }
    if (troco == 0){
        printf("Esse foi o valor exato da compra.\nMutio brigado por comprar!!!");
    }
    if (troco > 0){
        printf("Senhor, seu troco sera de R$ %.2f.\nMuito obrigado por comprar!!!", troco);
    }
}