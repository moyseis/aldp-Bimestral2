#include <stdio.h>
int main() {
    int N;
    int numero = 1;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            if (numero > 21) {
                break;} 
            printf("%d ", numero);
            numero++;
        }
        printf("\n");
        if (numero > 21) {
            break;}
        }
    return 0;}

