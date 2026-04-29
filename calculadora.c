#include <stdio.h>
#include <stdlib.h>
#include "function_multiplicar.c"

int main() 
{
    int opcao, n1, n2, continuar;

    do 
    {
        printf("\nCALCULADORA - Por: Valentina Andrade\n");
        printf("1. Soma\n");
        printf("2. Subtracao\n");
        printf("3. Divisao\n");
        printf("4. Multiplicação\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 4) {
            printf("Digite o primeiro número: ");
            scanf("%d", &n1);
            printf("Digite o segundo número: ");
            scanf("%d", &n2);
            
            printf("Resultado: %d\n", multiplicar(n1, n2));
        } else if (opcao >= 1 && opcao <= 3) {
            printf("Opção indisponível.\n");
        } else {
            printf("Opção inválida.\n");
        }

        printf("\nDeseja realizar outra operação? (1-Sim / 0-Sair): ");
        scanf("%d", &continuar);

    } 
    
    while (continuar != 0);
    return 0;
}
