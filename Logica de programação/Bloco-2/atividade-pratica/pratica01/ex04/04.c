#include <stdio.h>
#include <stdlib.h>

main(){
    int idade, maior, cont;
    maior = 0;

    printf("- - - - -  Contador de maior de 18   - - - - -\n");
    
    for(cont = 1; cont <= 10; cont += 1){
        printf("\nInsira a idade de uma pessoa: ");
        scanf("%d", &idade);
        if(idade >= 18){
            maior++;
        }
    }
    printf("\n\nForam inseridos a idade de 10 pessoas.\nO numero de pessoas maoires de 18 anos inseridos foi de: %d.\n\n", maior);

    system("PAUSE");
}