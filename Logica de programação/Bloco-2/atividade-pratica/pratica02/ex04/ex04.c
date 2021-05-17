#include <stdio.h>
#include <stdlib.h>

main(){
    int numeros_primos;

    system("cls");

    printf("- - - - -   Primos de 100 a 200   - - - - -\n\n");

    printf("Esses sao os numeros primos de 100 a 200:\n\n");

    for(numeros_primos = 100; numeros_primos <= 200; numeros_primos++){
        if(numeros_primos % 2 != 0){
            if(numeros_primos % 3 != 0){
                if(numeros_primos % 5 != 0){
                    if(numeros_primos % 7 != 0){
                        if(numeros_primos % 11 != 0){
                            if(numeros_primos % 13 != 0){
                                printf(" %d ", numeros_primos);
                            }
                        }
                    }
                }
            }
        }
    }
    
    printf("\n\n- - - - - - - - - -   Fim   - - - - - - - - -\n\n");

    system("PAUSE");
}