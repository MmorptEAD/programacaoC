#include <stdio.h>

int main() {
    float temperatura , umidade ;
    unsigned int estoque , estoqueMinimo = 1000;

    printf("Entre a temperatura: \n");
    scanf ("%f", &temperatura);
    printf("Entre com a umidade : \n");
    scanf("%f", &umidade);
    printf("entre com o estoque: \n");
    scanf("%u", &estoque);

    if ( temperatura > 30 ){
        printf("A temperatura esta alta. \n"); 
    } else {
        printf("A temperatura esta dentro dos parâmetros. \n");
    }

    if ( umidade > 50 ){
        printf("A umidade esta alta. \n");
    } else {
        printf("A umidade esta dentro dos parâmetros. \n");
    }

    if(estoque < estoqueMinimo){
        printf("estoque abaixo do minimo. \n");
    } else {
        printf("Estoque normal! \n");

    }

}