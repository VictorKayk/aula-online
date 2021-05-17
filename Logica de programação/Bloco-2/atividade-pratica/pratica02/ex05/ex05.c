#include <stdio.h>
#include <stdlib.h>

main(){
    int num, multiplicacao,cont;

    system("cls");

    printf("- - - - -   Calculando Sequencia   - - - - -\n");

    printf("\nInsira um numero: ");
    scanf("%d", &num);
    printf("\n");

    multiplicacao = 1;
    for(cont = num; cont >= 1; cont--){
        printf("%d",cont);
        multiplicacao *= cont;
        if(cont != 1){
            printf(" x ");
        }else{
            printf(" = ");
        }
    }
    printf("%d", multiplicacao);

    printf("\n\n- - - - - - - - -   Fim   - - - - - - - -\n\n");

    system("PAUSE");
}