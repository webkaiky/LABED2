#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 11) {
        printf("Uso: %s <num1> <num2> ... <num10>\n", argv[0]);
        return 1;
    }

    int maior = atoi(argv[1]);

    for (int i = 2; i < argc; i++) {
        int num_atual = atoi(argv[i]);
        if (num_atual > maior) {
            maior = num_atual;
        }
    }

    printf("O maior elemento e: %d\n", maior);
    return 0;
}