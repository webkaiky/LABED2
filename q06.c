#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 11) {
        printf("Uso: %s <num1> <num2> ... <num10>\n", argv[0]);
        return 1;
    }

    int contador_pares = 0;
    for (int i = 1; i < argc; i++) {
        int num_atual = atoi(argv[i]);
        if (num_atual % 2 == 0) {
            contador_pares++;
        }
    }

    printf("O numero de elementos pares e: %d\n", contador_pares);
    return 0;
}