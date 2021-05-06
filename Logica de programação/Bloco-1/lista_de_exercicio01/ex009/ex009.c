#include <stdio.h>
#include <stdlib.h>

main(){
    char aluno[51];
    float nota1, nota2, nota3, media;
    int peso1, peso2, peso3;
    printf("Calculando a media de um Aluno 2.0\n");
    printf("\nInsira o nome do aluno: ");
    gets(aluno);
    printf("\nInsira a primeira nota do aluno %s: ", aluno);
    scanf("%f", &nota1);
    printf("Insira o peso da primeira nota: ");
    scanf("%d", &peso1);
    printf("\nInsira a segunda nota do aluno %s: ", aluno);
    scanf("%f", &nota2);
    printf("Insira o peso da segunda nota: ");
    scanf("%d", &peso2);
    printf("\nInsira a terceira nota do aluno %s: ", aluno);
    scanf("%f", &nota3);
    printf("Insira o peso da terceira nota: ");
    scanf("%d", &peso3);
    media = (nota1*peso1 + nota2*peso2 + nota3*peso3) / (peso1 + peso2 + peso3);
    printf("\n\nO aluno %s, tirou uma media de: %.1f\n\nPrimeira nota: %.1f\nCom peso: %d\n\nSegunda nota: %.1f\nCom peso: %d\n\nTerceira nota: %.1f\nCom peso: %d\n", aluno, media, nota1, peso1, nota2, peso2, nota3, peso3);
    system("PAUSE");
}