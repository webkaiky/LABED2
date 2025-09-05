#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 11) {
        printf("Uso: %s <num1> <num2> ... <num10>\n", argv[0]);
        return 1;
    }

    int soma = 0;
    for (int i = 1; i < argc; i++) {
        soma += atoi(argv[i]);
    }

    float media = (float)soma / 10.0;
    printf("A media dos 10 numeros e: %.2f\n", media);
    return 0;
}