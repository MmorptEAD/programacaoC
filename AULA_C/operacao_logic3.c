#include <stdio.h>

int main (){

    int idade = 17 ;
    float altura = 1.75;

    // idade >= 18 => falso
    // idade <= 30 => verdadeiro
    // falso && verdadeiro
    // falso && altura > 1.70
    // falso && verdadeiro => falso


    if (idade >= 18 && idade  <= 30 && altura > 1.70) {
        printf("Você esta na faixa etária e tem a altura adequada \n");
    } else {
        printf("você não atende aos critérios \n");
    }
}