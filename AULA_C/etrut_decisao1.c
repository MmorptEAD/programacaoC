#include <stdio.h>

int main() {
    int  opcao;
    float nota1, nota2, media;

    printf("Menu de Gerenciamento de Estudantes\n");
    printf("1. Calcular Media\n");
    printf("2. Determinar Status\n");
    printf("3. Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
    
    case 1:
        printf("Calcular a Media\n");
        printf("Digite a nota 1: ");
        scanf("%f", &nota1);
        printf("Digite a nota 2: ");
        scanf("%f", &nota2);
        //testar a condição se a nota é >= 0 e <= 10

        if ((nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10)) {
            media = (nota1 + nota2) / 2;
            printf("A  média é %.2f\n", media);
        }else {
            printf("Entrada de Valores inválido \n");
        }
        break;
    case 2:
        printf("Determinar o Status\n");
        printf("Entrar com a média: ");
        scanf("%f", &media);
        
        if (media >= 7){
            printf("Aprovado\n");
        } else if (media >= 5) {
            printf("Recuperacao\n");
        } else {
            printf("Reprovado\n");
        }
        break;
    case 3:
        printf("Sair\n");
    default:
        printf("Opcao invalida\n");
        break;
    }

    return 0;
}