#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Uso: %s <numero1> <numero2>\n", argv[0]);
        return 1;
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    int soma = num1 + num2;

    printf("A soma de %d e %d e: %d\n", num1, num2, soma);
    return 0;
}