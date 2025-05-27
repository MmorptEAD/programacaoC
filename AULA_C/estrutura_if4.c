#include <stdio.h>

int main() {
    int idade1 = 25;
    int idade2 = 30;

    if (idade1 > idade2) {
        printf("A idade 1 é maior que a idade 2\n");
    } else if (idade1 < idade2) {
        printf("A idade 1 é menor que a idade 2\n");
    } else {
        printf("As idades são iguais\n");
    }
}