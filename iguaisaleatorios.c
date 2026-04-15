#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int num1, num2;
    int tentativas = 0;

    srand(time(NULL));

    do 
    {
        num1 = (rand() % 1000) + 1;
        num2 = (rand() % 1000) + 1;
        tentativas++;
    } 
    while (num1 != num2);
    printf("Após %d tentativas, os dois números gerados são iguais a %d\n", tentativas, num1);

    printf("Criado por Valentina Andrade de Pedro");
    
    return 0;
}
