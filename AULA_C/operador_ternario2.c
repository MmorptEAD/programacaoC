#include <stdio.h>

int main() {
    int temperatura= 28;
    int resultado;



    resultado = temperatura > 30 ? 1 : 0;
    if (resultado == 1) {
        printf("Está Calor.\n");
    } else {
        printf("Está Frio.\n");
    }

    return 0;



}