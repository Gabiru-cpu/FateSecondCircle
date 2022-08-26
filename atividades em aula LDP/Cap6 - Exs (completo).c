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
int T;
int main()
{
while (T <= 0)
{
    float num, num2, result;
    printf("envie o primeiro numero\t");
    scanf("%f", &num);

    printf("envie o primeiro numero\t");
    scanf("%f", &num2);

    result=num;
    result += num2;
    printf("%.2f + %.2f = %.2f\t", num, num2, result);

    result=num;
    result -= num2;
    printf("%.2f - %.2f = %.2f\t", num, num2, result);

    result=num;
    result *= num2;
    printf("%.2f * %.2f = %.2f\t", num, num2, result);
    result=num;
    result /= num2;
    printf("%.2f / %.2f = %.2f\t", num, num2, result);


    printf("Caso queira continuar envie um numero igual ou menor a 0 caso nao envie um numero maior q 0\n");
    scanf("%d",&T);
}
    return 0;
}
#endif

#ifdef ex3
int T;
void main()
{
while (T <= 0)
{
    int dataN, dataA, mesN, mesA, anoN, anoA, ida1, ida2, ida3;
    printf ("Antes de mais nada peco desculpas tentei realizar\no codigo para calcular anos bisextos porem nao consegui\n\n\n");
    printf ("Digite o dia do nascimento: ");
    scanf ("%d", &dataN);
        while (dataN <1 || dataN > 31)
    {
        printf("ERRO Informe o dia que nasceu.");
        scanf("%d", &dataN);
    }
    printf ("Digite o mes de nascimento: ");
    scanf ("%d", &mesN);
        while (mesN <1 || mesN > 12)
    {
        printf("ERRO Informe o mes que nasceu.");
        scanf("%d", &mesN);
    }
    printf ("Digite o ano de nascimento: ");
    scanf ("%d", &anoN);
        while (anoN <1500)
    {
        printf("ERRO Informe o ano que nasceu.");
        scanf("%d", &anoN);
    }
    printf ("\n");
    printf ("Digite o dia atual: ");
    scanf ("%d", &dataA);
        while (dataA <1 || dataA > 31)
    {
        printf("ERRO Informe o dia atual.");
        scanf("%d", &dataA);
    }
    printf ("Digite o mes atual: ");
    scanf ("%d", &mesA);
            while (mesA <1 || mesA > 12)
    {
        printf("ERRO Informe o mes atual.");
        scanf("%d", &mesA);
    }
    printf ("Digite o ano atual: ");
    scanf ("%d", &anoA);
            while (anoA <= anoN)
    {
        printf("ERRO Informe o ano atual.");
        scanf("%d", &anoA);
    }
    printf ("\n");


    ida1 = anoA - anoN;
    ida2 = ida1 * 365;
    ida3 = ida1 * 12;


    printf (" voce nasceu em: %d/%d/%d\n", dataN,mesN,anoN);
    printf (" voce tem %d anos , %d mes(es),%d dias",ida1,ida3,ida2);
        printf("\n\nCaso queira continuar envie um numero igual ou menor a 0 caso nao envie um numero maior q 0\n");
    scanf("%d",&T);
}
}
#endif

#ifdef ex4
int a,b, T;

int main()
{
while (T <= 0)
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
            printf("\n\nCaso queira continuar envie um numero igual ou menor a 0 caso nao envie um numero maior q 0\n");
    scanf("%d",&T);
}
    return 0;
}
#endif

#ifdef ex5
    float c, f, k, T;

int main()
{
    while (T <= 0)
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
                printf("\n\nCaso queira continuar envie um numero igual ou menor a 0 caso nao envie um numero maior q 0\n");
    scanf("%d",&T);
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
