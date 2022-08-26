
/*4 Escreva um programa que tem uma estrutura de dados com os membros abaixo.
    A estrutura é uma variavel local na função main().Receba via teclado o
    conteudo de cada um dos membros numa função e imprima-os no video no
    seguinte formato(também numa função).

            10        20        30        40        50        60        70
    1234567890123456789012345678901234567890123456789012345678901234567890
        char      int       long                float               double
              unsigned char       unsigned int        unsigned long*/

#include <stdlib.h>
#include <stdio.h>

    struct data
    {
        char C[15];
        int I;
        float F;
        long L;
        double D;
        unsigned char UC;
        unsigned int UI;
        unsigned long UL;
    };

int main()
{
    struct data DATA;
    struct data *p;
    p = & DATA;

    printf("\t\tCadastro de aluno\n\n");
    printf("envie para Char\n\n");
    fgets(DATA.C, 15, stdin);

    printf("envie para int\n\n");
    scanf("%d", &DATA.I);

    printf("envie para long\n\n");
    scanf("%lf", &DATA.L);

    printf("envie para float\n\n");
    scanf(" %f", &DATA.F);

    printf("envie para double\n\n");
    scanf(" %f", &DATA.D);
    getchar();

    printf("envie para unsigned char\n\n");
    scanf(" %c", &DATA.UC);

    printf("envie para unsigned int\n\n");
    scanf(" %d", &DATA.UI);

    printf("envie para unsigned long\n\n");
    scanf(" %lu", &DATA.UL);

    funcImprime(p);
}

void funcImprime(struct data *pa)
{
     printf("       10        20        30        40        50        60        70\n");
    printf("1234567890123456789012345678901234567890123456789012345678901234567890\n");
    printf("        %s      %d       %lf                %f               %f\n", pa->C, pa->I, pa->L, pa->F, pa->D);
    printf("              %c       %d        %lu\n", pa->UC, pa->UI, pa->UL);
}
