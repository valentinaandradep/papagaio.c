#include <stdio.h>

int main() 
{
    unsigned char lista[256];

    for (int i = 0; i < 256; i++) 
    {
        lista[i] = (unsigned char)i;
    }

    for (int i = 0; i < 256; i++) 
    {
        printf("%c\n", lista[i]);
    }

    printf("Criado por Valentina Andrade de Pedro");

    return 0;
}