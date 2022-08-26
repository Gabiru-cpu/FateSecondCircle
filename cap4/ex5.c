/*  5 - Defina 2 vetores bidimensionais do tipo inteiro de 2x3. Escreva um programa
    que recebe os dados via teclado para esses 2 vetores. Usando o operador
    subtracao "-", subtraia os elementos de mesmo indice dos 2 vetores
    e guarde o resultado num 3. vetor. Imprima na tela o indice, os valores e
    o resultado dos 6 elementos dos vetores.
*/
#include <stdio.h>
#include <stdlib.h>

int T, matriz1 [2] [3], matriz2 [2] [3], matrizResult[2] [3];

int main()
{
    while (T <= 0)
    {
        CALC();
    printf("Caso queira continuar envie um numero igual ou menor a 0 caso nao envie um numero maior q 0\n");
    scanf("%d",&T);
    }

    return 0;
}

CALC()
{
    
    for (int i = 0; i < 2; i++)
    {
        for (int i2 = 0; i2 < 3; i2++)
        {
            printf("escreva um numero para a matriz1 : %d %d\n", i, i2);
            scanf("%d", &matriz1 [i] [i2]);
        }   
        printf("\n\n");
    }

        for (int i = 0; i < 2; i++)
    {
        for (int i2 = 0; i2 < 3; i2++)
        {
            printf("escreva um numero para a matriz2 : %d %d\n", i, i2);
            scanf("%d", &matriz2 [i] [i2]);
        }   
        printf("\n\n");
    }
    
    printf("MATRIZ1\n");
    printf("%d  %d %d\n%d  %d %d\n", matriz1 [0] [0], matriz1 [0] [1], matriz1 [0] [2], matriz1 [1] [0], matriz1 [1] [1], matriz1 [1] [2]);

    printf("MATRIZ2\n");
    printf("%d  %d %d\n%d  %d %d\n", matriz2 [0] [0], matriz2 [0] [1], matriz2 [0] [2], matriz2 [1] [0], matriz2 [1] [1], matriz2 [1] [2]);

    for (int i = 0; i < 2; i++)
    {
        for (int i2 = 0; i2 < 3; i2++)
        {
            matrizResult [i] [i2] = matriz1 [i] [i2] - matriz2 [i] [i2];
        }   
    }

        printf("MATRIZ-RESULT\n");
    printf("%d  %d %d\n%d  %d %d\n", matrizResult [0] [0], matrizResult [0] [1], matrizResult [0] [2], matrizResult [1] [0], matrizResult [1] [1], matrizResult [1] [2]);
}
