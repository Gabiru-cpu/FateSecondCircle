/*3 - Escreva um programa para receber via teclado em vetores 3 int, 3 long,
    3 unsigned, 3 float e 3 double e imprima-os no video no seguinte formato:

            10        20        30        40        50
    12345678901234567890123456789012345678901234567890
      int                 long                unsigned
                float               double
      int                 long                unsigned
                float               double
      int                 long                unsigned
                float               double             */
#include <stdio.h>
#include <stdlib.h>

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