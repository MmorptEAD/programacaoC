#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    int c = 1;

    // a > 0 => verdadeiro
    // b < 0 => verdadeiro
    // verdadeiro && verdadeiro => verdadeiro
    // verdadeiro || c==0
    // verdadeiro || falso => verdadeiro

    if (a > 0 && b < 0 || c == 0) {
        printf("Verdadeiro\n");
    } else {
        printf("Falso\n");
    }
    {
        /* code */
    }
    

}