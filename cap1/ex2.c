/*2 - Escreva um programa que receba dados via teclado para variaveis do tipo short,
    long, int, float, double e um char e imprima-os no video no seguinte
    formato:

             10        20        30        40        50        60
     12345678901234567890123456789012345678901234567890123456789012345
         shortV               longV                intV
                   float               double              char*/

#include <stdio.h>
#include <stdlib.h>

short S; float F; long L; double D; int I; 
char C[61];
void main()
{
    printf("digite um numero a variavel short\n");
    scanf("%d", &S);

    printf("digite um numero a variavel float\n");
    scanf("%f", &F);

    printf("digite um numero a variavel long\n");
    scanf("%d", &L);

    printf("digite um numero a variavel double\n");
    scanf("%lf", &D);

    printf("digite um numero a variavel int\n");
    scanf("%d", &I);
  
    printf("Digite um texto para a variavel char \n");
    scanf("%s",C);
    fim();
}
void fim()
{
    printf("        10        20        30        40        50\n12345678901234567890123456789012345678901234567890\n");
    printf("    short%d               long%d                int%d\nfloat%f               double%lf              char%s", S, L, I, F, D, C);
}