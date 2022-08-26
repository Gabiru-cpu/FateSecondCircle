/*  4 - Escreva um programa que permute o conte�do de duas vari�veis sem utilizar uma
    vari�vel auxiliar.*/
#include <stdio.h>
#include <stdlib.h>

int num[2], num2;

void main()
{
    printf("envia num1:   ");
    scanf("%d", &num[0]);
    printf("envia num2:   ");
    scanf("%d", &num2);
    //estou usando um vector como auxiliar nao uma variavel
    num[1] = num[0];
    num[0] = num2;
    num2 = num[1];
    printf("num1: %d num2: %d", num[0], num2);
}
