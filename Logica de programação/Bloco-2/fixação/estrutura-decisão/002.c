#include <stdio.h>
#include <stdlib.h>

main(){
    char nome[20], sexo, estado_civil[15];
    float temp_casado;
    printf("CASADA?\n");
    printf("\nInsira o seu nome: ");
    scanf("%s", &nome);
    printf("Insira o seu sexo [M/F]: ");
    scanf("%c", &sexo);
    printf("Insira o seu estado civil: ");
    scanf("%s", &estado_civil);
    strupr(estado_civil);
    if(sexo == 'f'){
        printf("\nInsira o tempo de casada: ");
        scanf("%f", &temp_casado);
    }
    system("PAUSE");
}