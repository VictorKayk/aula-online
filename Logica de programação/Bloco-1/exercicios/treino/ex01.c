#include <stdio.h>

main(){
    int num, num2, media;
    printf("Calculando a Media entre 2 Numeros:\n");
    printf("Insira o primeiro numero: ");
    scanf("%f", &num);
    printf("Insira o segundo numero: ");
    scanf("%f", &num2);
    media = (num + num2) / 2;
    printf("\nA media aritmetica entre %.2f e %.2f e igual a: %.2f\n", num, num2, media);
    system("PAUSE");
}
