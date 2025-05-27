#include <stdio.h>

int main(){

    float nota = 60.8;

    if (nota > 60.5) {
        printf("parabens , você foi aprovado\n");

    } else if (nota == 60.5) {
        printf("você foi aprovado com nota minima\n");

    } else {
        printf("infelizmente você foi reprovado\n");
    } 

}