#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que receba um vetor de tamanho 10 e o decomponha em dois
    outros vetores. Um contera' as componentes de ordem �mpar e o outro contera'
    as componentes de ordem par.*/
int vetor[10], PAR[], IMPAR[];
int i, T;
void main()
{
    while (T <= 0)
    {
    //pedir ao usuario os valores
    for (i=0; i<10; i++)
    {
        printf("envie um numero para a posicao %d do vector\n", i);
        scanf("%d",&vetor[i]);
    }  
    //verificar se o numero é par ou impar e separando para os vetores respectivos
    for (i=0; i<10; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            PAR[i] = vetor[i];
        }
        else
        {
            IMPAR[i] = vetor[i];
        }
    }
        printf("Vectores pares\n");
        for (i=0; i<10; i++)
    {
        printf("posicao %d do vector Par: %d\n", i, PAR[i]);
    }  
        printf("Vectores impares\n");
        for (i=0; i<10; i++)
    {
        printf("posicao %d do vector Impar: %d\n", i, IMPAR[i]);
    }
    
    printf("Caso queira continuar envie um numero igual ou menor a 0 caso nao envie um numero maior q 0\n");
    scanf("%d",&T);
    }
    system("pause");
}