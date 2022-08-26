/*  4 - Escreva um programa que receba via teclado 2 numeros inteiros e execute
    as operacoes logicas bit a bit AND, OU, OU EXCLUSIVO e imprima-os no
    video no formato decimal e hexadecimal.*/
#include <stdio.h>
#include <stdlib.h>

int a,b;

int main()
{
    printf("Envie o primeiro numero\n");
    scanf("%d", &a);
    printf("Envie o segndo numero\n");    
    scanf("%d", &b);
    

    printf(" Operadores bit-a-bit\n\n");
    printf("A and B decimal: %d A and B hexa %x\n", a & b, a & b);//and
    printf("A or  B decimal: %d A and B hexa %x\n", a | b, a | b);//or
    printf("A xor B decimal: %d A and B hexa %x\n", a ^ b, a ^ b);//xor
    //printf("A not B decimal: %d A and B hexa %x\n", a &~ b, a &~ b);//not
    //printf("A dle B decimal: %d A and B hexa %x\n", a >> b, a >> b);//dleft
    //printf("A dri B decimal: %d A and B hexa %x\n", a << b, a << b);//dright

    return 0;
}