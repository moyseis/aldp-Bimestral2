#include <stdio.h>

int main(void) {
    int velocidade;

    printf("Com que velocidade (km/h) você costuma dirigir? ");
    scanf("%d", &velocidade);

    if (velocidade > 75) {
        printf("Guarda: Você está dirigindo muito rápido!\n");
    } else {
        if (velocidade > 65) {
            printf("Guarda: Você ultrapassou o limite de velocidade.\n");
        } else {
            if (velocidade == 55) {
                printf("Guarda: Velocidade permitida — exatamente 55 km/h.\n");
            } else {
                if (velocidade > 45) {
                    printf("Guarda: Dirigindo com cuidado, mas ainda acima do ideal.\n");
                } else {
                    printf("Guarda: Você está bem dentro dos limites — segurança em primeiro lugar!\n");
                }
            }
        }
    }

    return 0;
}
