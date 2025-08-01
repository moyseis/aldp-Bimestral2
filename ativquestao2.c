#include <stdio.h>
int main() {
    printf("Número\tQuadrado\tCubo\n");
    printf("--------------------------\n");
    for (int i = 0; i <= 10; i++) {
        printf("%d\t%d\t\t%d\n", i, i * i, i * i * i);
    }
    return 0;
}
