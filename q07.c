#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 11) {
        printf("Uso: %s <num1> <num2> ... <num10>\n", argv[0]);
        return 1;
    }

    int menor = atoi(argv[1]);

    for (int i = 2; i < argc; i++) {
        int num_atual = atoi(argv[i]);
        if (num_atual < menor) {
            menor = num_atual;
        }
    }

    printf("O menor elemento e: %d\n", menor);
    return 0;
}