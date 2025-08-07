#include <stdio.h>
int main() {
    int quantidade, numero;
    int maior = 0;
    int contador = 0;
    printf("Quantos numeros deseja inserir? ");
    scanf("%d", &quantidade);
    for (int i = 0; i < quantidade; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numero);
        if (i == 0 || numero > maior) {
            maior = numero;
            contador = 1;
        } else if (numero == maior) {
            contador++;
        }
    }
    printf("\nO maior numero foi: %d\n", maior);
    printf("Ele foi lido %d vez(es).\n", contador);
    return 0;
}
