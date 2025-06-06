#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroJogador , numeroComputador, resultado;
    char  tipoComparacao;

        srand(time(0));
        numeroComputador = rand() % 100 + 1; // Gera um número aleatório entre 1 e 100

        //Inicio do Jogo 
        printf("Bem-vindo ao jogo Maior, Menor ou Igual !\n");
        printf("Você deve escolher um número e o tipo de comparação.\n");
        printf("M. Maior\n");
        printf("N. Menor\n");
        printf("I. Igual\n");

        printf("Escolha a comparação: ");
        scanf(" %c", &tipoComparacao);

        printf("Digite um número entre 1 e 100: ");
        scanf("%d", &numeroJogador);

        // Verifica se o número do jogador está dentro do intervalo

        //Exibir o número do computador
        //printf("O número do computador é: %d\n", numeroComputador);

        switch (tipoComparacao)
        {
        case 'M':
        case 'm':
            printf("Você escolheu Maior.\n");
           resultado = numeroJogador > numeroComputador ? 1 : 0;

            break;
        case 'N':
        case 'n':
            printf("Você escolheu Menor.\n");
            resultado = numeroJogador < numeroComputador ? 1 : 0;

            break;
        case 'I':
        case 'i':
            printf("Você escolheu Igual.\n");
            resultado = numeroJogador == numeroComputador ? 1 : 0;

            break;
        default:
            printf("Tipo de comparação inválido. Por favor, escolha M, N ou I.\n");
            break;
        }
            printf("Número do computador: %d E o Número do jogador é: %d\n", numeroComputador, numeroJogador);
        // Exibir o resultado
        if (resultado == 1) {
            printf("Parabéns! Você ganhou!\n");
        } else if (resultado == 0) {
            printf("Você perdeu! Tente novamente.\n");
        } else {
            printf("Erro ao processar o resultado.\n");
        }

}