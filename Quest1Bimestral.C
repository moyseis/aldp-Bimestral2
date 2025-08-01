#include <stdio.h>
void menu() {
    printf("1 – Adição (+)\n");
    printf("2 – Subtração (-)\n");
    printf("3 – Multiplicação (*)\n");
    printf("4 – Divisão (/)\n");
    printf("0 – Sair\n");
    printf("Escolha uma opção: ");
}
int main() {
    int opcao;
    double a, b, resultado;
    do {
        menu();
        if (scanf("%d", &opcao) != 1) {
            // Entrada inválida, limpa buffer
            while (getchar() != '\n');
            printf("Opção inválida. Tente novamente.\n");
            opcao = -1;
            continue;
        }
        if (opcao >= 1 && opcao <= 4) {
            printf("Digite o primeiro valor: ");
            scanf("%lf", &a);
            printf("Digite o segundo valor: ");
            scanf("%lf", &b);
            switch (opcao) {
                case 1:
                    resultado = a + b;
                    printf("%.2f + %.2f = %.2f\n", a, b, resultado);
                    break;
                case 2:
                    resultado = a - b;
                    printf("%.2f - %.2f = %.2f\n", a, b, resultado);
                    break;
                case 3:
                    resultado = a * b;
                    printf("%.2f * %.2f = %.2f\n", a, b, resultado);
                    break;
                case 4:
                    if (b == 0) {
                        printf("Erro: divisão por zero não permitida.\n");
                    } else {
                        resultado = a / b;
                        printf("%.2f / %.2f = %.2f\n", a, b, resultado);
                    }
                    break;
            }
        } else if (opcao != 0) {
            printf("Opção inválida. Tente novamente.\n");
        }

    } while (opcao != 0);

    printf("Programa encerrado.\n");
    return 0;
}
