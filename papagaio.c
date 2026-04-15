#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[]) 

{
    char palavra[] = {'c','e','b','o','l','i','n','h','a'};
    
    printf("./papagaio ");
    
    if (argc == 2) {
        printf("Você digitou %s\n", argv[1]);
    }
    
    if (argc == 1) {
        printf("Você não digitou nada\n");
        exit(0);
    }

    printf("Criado por Valentina Andrade de Pedro");

    return 0;
}
