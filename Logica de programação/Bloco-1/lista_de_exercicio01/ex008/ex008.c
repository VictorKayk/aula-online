#include <stdio.h>
#include <stdlib.h>

main(){
    char aluno[51];
    float nota1, nota2, nota3, media;
    printf("Calculando a media de um Aluno\n");
    printf("\nInsira o nome do aluno: ");
    gets(aluno);
    printf("\nInsira a primeira nota do aluno %s: ", aluno);
    scanf("%f", &nota1);
    printf("\nInsira a segunda nota do aluno %s: ", aluno);
    scanf("%f", &nota2);
    printf("\nInsira a terceira nota do aluno %s: ", aluno);
    scanf("%f", &nota3);
    media = (nota1+nota2+nota3) / 3;
    printf("\n\nO aluno %s, tirou uma media de: %.1f\n\nPrimeira nota: %.1f\n\nSegunda nota: %.1f\n\nTerceira nota: %.1f\n", aluno, media, nota1, nota2, nota3);
    system("PAUSE");
}