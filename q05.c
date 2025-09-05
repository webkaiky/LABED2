#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 11) {
        printf("Uso: %s <num1> <num2> ... <num10>\n", argv[0]);
        return 1;
    }

    printf("Vetor invertido: ");
    for (int i = argc - 1; i >= 1; i--) {
        printf("%s ", argv[i]);
    }
    printf("\n");
    return 0;
}