#include <stdio.h>
#include <stdlib.h>

main(){
    char escolha, conceito;
    int id_aluno;
    float nota1, nota2, nota3, media_exercicio, media_aproveitamento;

    do{
        system("cls");

        printf("\n- - - - -   Calculando o aproveitamento   - - - - -\n");

        printf("\nInsira o numero de identificacao do aluno: ");
        scanf("%d", &id_aluno);

        printf("\n\nAs notas sao de 0 a 100.");
        printf("\n\nInsira a nota da prova 1: ");
        scanf("%f", &nota1);
        printf("Insira a nota da prova 2: ");
        scanf("%f", &nota2);
        printf("Insira a nota da prova 3: ");
        scanf("%f", &nota3);

        printf("\n\nInsira a media dos exercicios: ");
        scanf("%f", &media_exercicio);

        media_aproveitamento = (nota1 + nota2*2 + nota3*3 + media_exercicio) / 7;

        printf("\n- - - - - - - - - - - - - - - - - - - - - - - -\n");

        printf("\nIdentificador do aluno: %d\n\nNota na primeira prova: %.1f\nNota na segunda prova: %.1f\nNota na terceira prova: %.1f\nMedia dos exercicios: %.1f\n\nConceito do aluno: ", id_aluno, nota1, nota2, nota3, media_exercicio);

        if(media_aproveitamento >= 90){
            conceito = 'A';
            printf("%c\nEstado: Aprovado", conceito);
        }else if(media_aproveitamento >= 75 && media_aproveitamento < 90){
            conceito = 'B';
            printf("%c\nEstado: Aprovado", conceito);
        }else if(media_aproveitamento >= 60 && media_aproveitamento < 75){
            conceito = 'C';
            printf("%c\nEstado: Aprovado", conceito);
        }else if(media_aproveitamento >= 40 && media_aproveitamento < 60){
            conceito = 'D';
            printf("%c\nEstado: Reprovado", conceito);
        }else if(media_aproveitamento < 40){
            conceito = 'E';
            printf("%c\nEstado: Reprovado", conceito);
        }

        printf("\n\n- - - - - - - - - - - - - - - - - - - - - - - -\n");

        setbuf(stdin, NULL);
        printf("\n\nDeseja calcular o aproveitamento de outro aluno? [s/n]: ");
        scanf("%c", &escolha);
    }while(escolha == 's');
    
    printf("\n\n- - - - - - - - - - - - - - - - - - - - - - - -\n");

    printf("\nFim do aproveitamento\n");

    printf("\n- - - - - - - - - - - - - - - - - - - - - - - -\n");

    system("Pause");
}