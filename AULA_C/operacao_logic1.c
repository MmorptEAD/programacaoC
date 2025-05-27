#include <stdio.h>

int main (){

    int a = 10 , b = -5 , c = -10 , d = 5 ,
        e = -15 , f = 1;

    // && (E lógico) ,se ambos os números forem positivos
    // || (OU lógico) , se pelo menos um dos números for positivo
    // ! (NÃO lógico) , inverte o valor lógico de uma expressão  



    if (a > 0 && b > 0) {
        printf ("Os dois números são positivos.\n");
    } else {
        printf ("Pelo menos um dos números é negativo.\n");
    }

    if (c > 0 ||  d > 0) {
        printf ("Pelo menos um dos números é positivos.\n");
    }else {
        printf ("Os dois números são negativos.\n");
    }
    if (!(e > 0)) {
        printf ("O número A é negativo.\n");
    } else {
        printf ("O número A é positivo.\n");
    }
    if (!(f > 0)) {
        printf ("O número B é negativo.\n");
    } else {
        printf ("O número B é positivo.\n");
    }




}