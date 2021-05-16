#include <stdio.h>
#include <stdlib.h>

main(){
    char escolha;
    float peso, altura, IMC;

    do{
        system("cls");

        printf("\n- - - - -   Calculando o IMC   - - - - -\n");

        printf("\nPor favor insira seu peso atual: ");
        scanf("%f", &peso);
        printf("Por favor insira sua altura: ");
        scanf("%f", &altura);

        IMC = peso / (altura * altura);
        printf("\nSeu IMC e: %.1f . ", IMC);

        if(IMC > 30){
            printf("Voce esta OBESO!!!.\n");
        }else if(IMC > 25 && IMC <= 30){
            printf("Voce esta ACIMA DO PESO!!!.\n");
        }else if(IMC > 18.5 && IMC <= 25){
            printf("Voce esta com peso normal.\n");
        }else if(IMC <= 18.5){
            printf("Voce esta abaixo do peso!!!.\n");
        }

        setbuf(stdin, NULL);
        printf("\nDeseja realizar uma nova consulta? [s/n]: ");
        scanf("%c", &escolha);
    }while(escolha == 's');

    printf("\n- - - - - - - - - - - - - - - - - -\n");

    printf("\nFim do Calculo de IMC\n\n");

    system("Pause");
}