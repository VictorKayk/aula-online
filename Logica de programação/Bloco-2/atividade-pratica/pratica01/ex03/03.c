#include <stdio.h>
#include <stdlib.h>

main(){
    int pais_a, pais_b, anos;

    anos = 0;
    pais_a = 5000000;
    pais_b = 7000000;

    printf("- - - - -   Taxa de natalidade   - - - - -\n");

    while(pais_b >= pais_a){
        anos++;
        pais_a += ((pais_a * 3) / 100);
        pais_b += ((pais_b * 2) / 100);
        printf("\nAno %d:\nPais A: %d\nPais B: %d.\n", anos, pais_a, pais_b);
    }
    printf("\nSerao necessarios %d anos, para que o Pais A ultrapasse o Pais B em populacao.\n", anos);

    system("PAUSE");
}