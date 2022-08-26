/*     5 - Escreva um programa que receba via teclado um valor e tenha o menu abaixo.
       1 - transforma graus Celsius em Fahrenheit e Kelvin
       2 - transforma graus Fahrenheit em Celsius e Kelvin
       3 - transforma graus Kelvin em Celsius e Fahrenheit
    Cada opcao de menu deve chamar uma funcao que retorna o resultado da
    conversao. O resultado deve ser mostrado na funcao main().*/

#include <stdio.h>
#include <stdlib.h>

    float c, f, k;

int main()
{
    int op;
    MENU:
    printf("1 - transforma graus Celsius em Fahrenheit e Kelvin\n2 - transforma graus Fahrenheit em Celsius e Kelvin\n3 - transforma graus Kelvin em Celsius e Fahrenheit\n");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        CpFK();
        break;

    case 2:
        FpCK();
        break;

    case 3:
        KpCF();
        break;
    
    default:
        system("cls");
        goto MENU;
        break;
    }
}

CpFK()
{
    printf("C = "); scanf("%f", &c);
 
    f = (9 * c + 160) / 5;
    k = c + 273.15;
    printf("F = %f\n", f);
    printf("K = %f\n", k);
}

FpCK()
{
    printf("F = "); scanf("%f", &f);

    c = (f-32) / 1.8;
    k = (f + 459.67) * 5/9;
    printf("C = %f\n", c);
    printf("K = %f\n", k);
}

KpCF()
{
    printf("K = "); scanf("%f", &k);

    f = (k-273) * 1.8 + 32;
    c = k - 273;
    printf("F = %f\n", f);
    printf("C = %f\n", c);
}