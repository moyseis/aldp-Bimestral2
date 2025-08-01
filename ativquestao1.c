 #include <stdio.h>

int main(void) {
    int num;
    int d1, d2, d3, d4, d5;

    printf("Digite um número de cinco dígitos: ");
    scanf("%d", &num);

    d5 = num % 10;
    d4 = (num / 10) % 10;
    d3 = (num / 100) % 10;
    d2 = (num / 1000) % 10;
    d1 = (num / 10000) % 10;

    printf("%d %d %d %d %d\n", d1, d2, d3, d4, d5);
    return 0;
}
