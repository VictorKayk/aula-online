#include <stdio.h>
#include <stdlib.h>

main(){
    float preco, preco_final;
    int quantidade;
    printf("Calculando a sua compra\n");
    printf("Insira o preco do produto: ");
    scanf("%f", &preco);
    printf("Insira a quantidade do produto: ");
    scanf("%d", &quantidade);
    preco_final = preco * quantidade;
    printf("Um produto que custa R$ %.2f, comprado %d vezes, tera seu preco final em: R$ %.2f", preco, quantidade, preco_final);
    system("PAUSE");
}