#include <stdio.h>
#include <stdlib.h>

main(){
    float salario, media_salario, maior_salario, media_filhos, porcentagem_salario_150;
    int cont, filhos, salario_150;

    system("cls");
    
    printf("\n- - - - -   Coletando Dados   - - - - -\n");
    maior_salario, filhos, salario_150 = 0;
    for(cont = 1; cont <= 200; cont++){
        printf("\nInsira o salario da pessoa numero %d: ", cont);
        scanf("%f", &salario);
        media_salario += salario;
        if(salario > maior_salario){
            maior_salario = salario;
        }
        if(salario <= 150){
            salario_150++;
        }

        printf("Insira a quantidade de filhos da pessoa numero %d: ", cont);
        scanf("%d", &filhos);
        media_filhos += filhos;
    }
    media_salario /= (cont-1);
    media_filhos /= (cont-1);
    porcentagem_salario_150 = (100 * salario_150) / 10;

    printf("\n\nA media de salario das 200 pessoas testadas e: R$%.2f\nA media de filhos das 200 pessoas testadas e: %.1f\nO maior salario recebido foi: R$%.2f\nA porcentagem de pessoas com salario de ate R$150 e: %.0f porcento\n\n", media_salario, media_filhos, maior_salario, porcentagem_salario_150);

    system("PAUSE");
}