#include <stdio.h>

int main() {
    int nota;

    printf("Digite a nota do aluno: ");
    scanf("%d", &nota);
    //A >= 90
    // B >= 80
    // C >= 70
    // D >= 60
    // F < 60 

    if (nota >= 90) {
    printf("Sua nota é A\n");
  } else if (nota >= 80) {
    printf("Sua nota é B\n");
  } else if (nota >= 70) {
    printf("Sua nota é C\n");
  } else if (nota >= 60) {
    printf("Sua nota é D\n");
  } else {
    printf("Sua nota é F\n");
  }

    return 0;
}