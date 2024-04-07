#include <stdio.h>

int main() {
    double salario[12];
    double soma;

    for (int i = 0; i < 12; ++i) {
        printf("Digite seu salario do mes %d: ", (i+1));
        scanf("%lf", &salario[i]);
    }

    printf("Salarios digitados: \n");

    for (int i = 0; i < 12; ++i) {
        printf("Salario do mes[%d] = %.2lf \n", (i+1), salario[i]);
        soma += salario[i];
    }

    printf("A media anual eh = %.2lf", (soma / 12));

    return 0;
}
