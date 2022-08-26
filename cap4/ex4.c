/*4 - Receba via teclado dez valores inteiros e ordene por ordem crescente assim
    que sao digitados. Guarde-os em um vetor. Mostre ao final os valores ordenados.*/

#include <stdio.h>
#include <stdlib.h>

int vector[10], aux, j, x=0, T;

void main()
{
     while (T <= 0)
    {
    for (int i = 0; i < 10; i++)
    {
        printf("digite um numero para posicao %d do vector\n", i);
        scanf("%d", &vector[i]);

            for (j=1; j < i; j++)
            {
                if (vector[i] > vector[j])
                {
                    aux = vector[i];
                    vector[i]= vector[j];
                    vector[j]= aux;
                }
            }
        j=1;
    }


    

    for (int count = 9; count > 0; count--)
    {
        printf("vector%d = %d\n", x, vector[count]);
        x++;
    }
    printf("Caso queira continuar envie um numero igual ou menor a 0 caso nao envie um numero maior q 0\n");
    scanf("%d",&T);
    }
    system("pause");
}