#include <stdio.h>

int main() {
    int idade ;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    // criança < 12 anos
    // adolescente >= 12 e < 18 anos
    // adulto >= 18 anos e < 60 anos
    // idoso >= 60 anos
    if (idade < 12) {
        printf("Você é uma Criança\n");
    } else if (idade >= 12 && idade < 18) {
        printf("Você é um Adolescente\n");
    } else if (idade >= 18 && idade < 60) {
        printf("Você é um Adulto\n");
    } else {
        printf("Você é um Idoso\n");
    }
}