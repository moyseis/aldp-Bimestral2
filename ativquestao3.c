#include <stdio.h>
int main(void) {
    short idade;
    int montante;
    long num_conta;
    printf("=== Depósito Bancário ===\n");
    printf("Digite sua idade (anos): ");
    if (scanf("%hd", &idade) != 1 || idade < 0) {
        printf("Entrada inválida para idade!\n");
        return 1;
    }
    printf("Digite o número da conta: ");
    if (scanf("%ld", &num_conta) != 1 || num_conta <= 0) {
        printf("Entrada inválida para número da conta!\n");
        return 1;
    }
    printf("Digite o montante a depositar (valor inteiro): ");
    if (scanf("%d", &montante) != 1 || montante <= 0) {
        printf("Entrada inválida para montante!\n");
        return 1;
    }
    printf("\n--- Confirmação ---\n");
    printf("Idade: %hd anos\n", idade);
    printf("Conta: %ld\n", num_conta);
    printf("Montante depositado: R$ %d\n", montante);

    printf("\nDepósito realizado com sucesso!\n");

    return 0;
}
