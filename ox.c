#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    if (argc != 2) {
        printf("Uso: \n");
        return 1;
    }

    int numero = atoi(argv[1]);

    if (numero % 2 == 0) {

        printf("Você digitou %d, que é par, então a letra é O\n", numero);
    } else {

        printf("Você digitou %d, que é ímpar, então a letra é X\n", numero);
    }

    printf("Criado por Valentina Andrade de Pedro");

    return 0;
}