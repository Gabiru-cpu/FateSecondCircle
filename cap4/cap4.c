#include <stdio.h>
#include <stdlib.h>
#define ex4
#ifdef ex1
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
#endif

#ifdef ex2
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
#endif

#ifdef ex3
int T; integer[3];long longed[3];unsigned unsigneted[3];float floathing[3];double doubleee[3];

void main()
{
    while (T <= 0)
    {
    readVectors();

    printf("        10        20        30        40        50\n12345678901234567890123456789012345678901234567890\n");

    printScreen();
    
    printf("Caso queira continuar envie um numero igual ou menor a 0 caso nao envie um numero maior q 0\n");
    scanf("%d",&T);
    }
    system("pause");
}

void readVectors()
{
    for (int i = 0; i < 3; i++)
    {
        printf("digite um numero para posicao %d do vector int\n", i);
        scanf("%d", &integer[i]);
    }
    for (int j = 0; j < 3; j++)
    {
        printf("digite um numero para posicao %d do vector float\n", j);
        scanf("%f", &floathing[j]);
    }
    for (int k = 0; k < 3; k++)
    {
        printf("digite um numero para posicao %d do vector long\n", k);
        scanf("%d", &longed[k]);
    }
    for (int l = 0; l < 3; l++)
    {
        printf("digite um numero para posicao %d do vector double\n", l);
        scanf("%lf", &doubleee[l]);
    }
    for (int m = 0; m < 3; m++)
    {
        printf("digite um numero para posicao %d do vector unsigned\n", m);
        scanf("%d", &unsigneted[m]);
    }
}

void printScreen()
{
  printf("  %d       %.2f     %d      %.lf    %d\n  %d       %.2f     %d      %.lf    %d\n  %d       %.2f     %d      %.lf    %d", integer[0], floathing[0], longed[0], doubleee[0], unsigneted[0], integer[1], floathing[1], longed[1], doubleee[1], unsigneted[1], integer[2], floathing[2], longed[2], doubleee[2], unsigneted[2]);
}
#endif

#ifdef ex4
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
#endif

#ifdef ex5
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

#endif