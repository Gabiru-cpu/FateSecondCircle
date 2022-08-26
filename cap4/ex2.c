/*Receba via teclado valores do tipo int para uma matriz 5 x 5. Receba via
    teclado um valor x. O programa dever fazer a busca desse valor x na matriz
    e, ao final escrever a localizacao (linha e coluna) ou uma mensagem de*/

#include <stdio.h>
#include <stdlib.h>

int matriz [5] [5];
int i, i2, x, T;
void main()
{
    while (T <= 0)
    {
        for ( i = 0; i < 5; i++)
    {
        for ( i2 = 0; i2 < 5; i2++)
        {
            printf("escreva um numero para a matriz : %d %d\n", i, i2);
            scanf("%d", &matriz [i] [i2]);
        }   
        printf("\n\n");
    }
    
    //ver as posicoes da matriz
    for ( i = 0; i < 5; i++)
    {
        for ( i2 = 0; i2 < 5; i2++)
        {
            printf("%d  ", matriz [i] [i2]);
        }   
        printf("\n\n");
    }

    printf("envie um numero para ser procurado dentro da matriz\n");
    scanf("%d", &x);

    for ( i = 0; i < 5; i++)
    {
        for ( i2 = 0; i2 < 5; i2++)
        {
            if (x == matriz [i] [i2])
            {
                printf("x = matriz %d %d", i, i2);
                i=6;
                i2=6;
            }
        }
        if (x != matriz [5] [5])
        {
            printf("x nao existe na matriz");
        }
           
    }
        printf("Caso queira continuar envie um numero igual ou menor a 0 caso nao envie um numero maior q 0\n");
    scanf("%d",&T);
    }
    system("pause");
}