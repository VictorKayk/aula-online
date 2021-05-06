#include <stdio.h>
#include <stdlib.h>

main(){
    float altura, imc;
    char sexo;
    printf("- - - - -  Peso Ideal  - - - - -\n");
    printf("\nInsira sua altura: ");
    scanf("%f", &altura);
    setbuf(stdin, NULL);
    printf("Insira seu sexo [m/f]: ");
    scanf("%c", &sexo);
    if(sexo == 'm'){
        imc = (72.7 * altura) - 58;
        printf("\nSeu como voce e homem e tem %.1f m de altura, seu peso ideal e: %.2f kg\n", altura, imc);
    }else if(sexo == 'f'){
        imc = (62.1 * altura) - 44.7;
        printf("\nSeu como voce e mulher e tem %.1f m de altura, seu peso ideal e: %.2f kg\n", altura, imc);
    }
    system("PAUSE");
}