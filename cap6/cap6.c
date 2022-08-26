#include <stdio.h>
#include <stdlib.h>
#define ex4
#ifdef ex1
int T;
int main()
{
while (T <= 0)
{
    float num, num2;
    printf("envie o primeiro numero\t");
    scanf("%f", &num);

    printf("envie o primeiro numero\t");
    scanf("%f", &num2);

    printf("%.2f + %.2f = %.2f\t", num, num2, num+num2);
    printf("%.2f - %.2f = %.2f\t", num, num2, num-num2);
    printf("%.2f * %.2f = %.2f\t", num, num2, num*num2);
    printf("%.2f ÷ %.2f = %.2f\t", num, num2, num/num2);
    printf("%.2f %% %.2f = %d\t", num, num2, (int)num%(int)num2);


    printf("Caso queira continuar envie um numero igual ou menor a 0 caso nao envie um numero maior q 0\n");
    scanf("%d",&T);
}
    return 0;
}
#endif

#ifdef ex2

#endif

#ifdef ex3

#endif

#ifdef ex4
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
#endif

#ifdef ex5
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
#endif
