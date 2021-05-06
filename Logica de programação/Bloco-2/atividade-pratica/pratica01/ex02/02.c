#include <stdio.h>
#include <stdlib.h>

main(){
    float preco, preco_final;
    char produto[30];
    int escolha; 

    printf("- - - - -   Formas de pagamento   - - - - -\n");

    printf("\nInsira o produto desejado: ");
    scanf("%s", &produto);
    printf("Insira o preco do produto: R$");
    scanf("%f", &preco);

    do{
        printf("\nOpcoes de pagamento:\n[ 1 ] A vista com dinheiro ou cheque (10 porcento de desconto).\n[ 2 ] A vista com o cartao de credito (15 porcento de desconto).\n[ 3 ] Em 2 vezes (sem juros).\n[ 4 ] Em 2 vezes (10 porcento de juros).\n");
        printf("Insira a opcao de pagamento: ");
        scanf("%d", &escolha);
        switch(escolha){
            case 1:
                preco_final = preco - ((preco * 10) / 100);
                printf("\nVoce escolheu a opcao 1, a vista com dinheiro ou cheque.\nVoce recebera 10 porcento de desconto.\n\nO produto %s que custava R$%.2f, agora custara somente R$%.2f.\n", produto, preco, preco_final);
                break;
            case 2:
                preco_final = preco - ((preco * 15) / 100);
                printf("\nVoce escolheu a opcao 2, a vista com o cartao de credito.\nVoce recebera 15 porcento de desconto\n\nO produto %s que custava R$%.2f, agora custara somente R$%.2f.\n", produto, preco, preco_final);
                break;
            case 3:
                preco_final = preco / 2;
                printf("\nVoce escolheu a opcao 3, 2 vezes (sem juros).\n\nVoce pagara o produto %s, que custava R$%.2f, em 2 vezes de R$%.2f.\n", produto, preco, preco_final);
                break;
            case 4:
                preco_final = preco / 2;
                preco_final = preco_final + ((preco_final * 10) / 100); 
                printf("\nVoce escolheu a opcao 4, 2 vezes (com 10 porcento de juros).\n\nVoce pagara o produto %s, que custava R$%.2f, em 2 vezes de R$%.2f.\n", produto, preco, preco_final);
                break;
            default:
                printf("\n\nA opcao %d e invalida, por favor escolha uma opcao valida.\n", escolha);
                escolha = 0;
                break;
        }
    }while (escolha == 0);

    system("PAUSE");
}