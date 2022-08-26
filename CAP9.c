#include <stdlib.h>
#include <stdio.h>

#define Ex01

#ifdef Ex01


int main()
{
    int LOOP = 0;

   char vetor[14] = {'b','d','f','h','j','k','m','o','q','s','u','w','y'}, letter;
    
    while (LOOP == 0)
    {
        printf("Envie uma letra\n");
        scanf(" %c", &letter);
        printf("letra pos0 = %s \n", &letter);

        pesq(&vetor, &letter);

        printf("\n\nDeseja finalizar?(envie 1 para SIM e 0 Para não)\n");
        scanf("%d", &LOOP);
        while (LOOP < 0 || LOOP > 1)
        {
            printf("\n\nERRO Deseja finalizar?(envie 1 para SIM e 0 Para não)\n");
            scanf("%d", &LOOP);
        }
        
    }
    return 0;
}

void pesq(char *vetorC, char *letterC)
{
    
    for (int i = 0; i < 14; i++)
    {
        if (i < 13) printf("\n %c posicao %d\n", vetorC[i], i);

        if (i >= 13) printf("LETRA NAO ENCONTRADA\n\n");

        if (*letterC == vetorC[i])
        {
            printf("\nLETRA %s ENCONTRADA NA POSICAO %d\n", letterC,i);
            i = 14;
        }
    }
}

#endif// ex01

#ifdef Ex02
void main()
{
int result=2, LOOP = 0;
while(LOOP==0){
    
    char str1[10], str2[10];
    printf("\nescreva a string1\n");
    scanf("%s", &str1);

    printf("\nescreva a string2\n");
    scanf("%s", &str2);

    result = rcbStr(str1, str2);
    printf("\n%d\n", result);

    printf("\n\nDeseja finalizar?(envie 1 para SIM e 0 Para não)\n");
    scanf("%d", &LOOP);
    while (LOOP < 0 || LOOP > 1)
    {
        printf("\n\nERRO Deseja finalizar?(envie 1 para SIM e 0 Para não)\n");
        scanf("%d", &LOOP);
    }
}
}

int rcbStr(char * strC, char * strC2)
{
    printf("\nimprimir copia = %s", strC);
    printf("\nimprimir copia2 = %s\n", strC2);

    if (*strC == *strC2)
    {
        return 1;
    }

    if(*strC != *strC2)
    {
        return 0;
    }
}
#endif// ex02

#ifdef Ex03
   float num1,num2, result;
    char oper;
    int LOOP=0, i=0;

int main(void)
{


    printf("Operacoes disponiveis\n");
    printf("'+' : adicao\n");
    printf("'-' : subtracao\n");
    printf("'*' : multiplicao\n");
    printf("'/' : divisao\n");
    printf("\nEnvie o numero em seguida o operador\n");

    entrada();
}

int entrada()
{
   while (LOOP == 0)
    {
        if (i == 0)
        { 
            printf("\nOBS: sua primeira vez usando o programa envie o primeiro numero em seguida o operador e o segundo numero\n");
            printf("Para ver o resultado envie '='\n");
            scanf("%f", &num1);
        }
        else {
            printf("\nOBS: sua segunda vez usando o programa envie o operador e o segundo\n");
            printf("Para ver o resultado envie '='\n");
            num1 = result;
        }
        scanf(" %c",&oper);
        if (oper == '=')
        {
            printf("RESULTADO = %.2f\n\n", result); 
            printf(" Fechando calculadora!\n ");
            LOOP=1;
        }
        scanf("%f", &num2);
        //system("cls || clear");
        
        switch( oper )
        {
            case '+':
                    SOMA(&result, &num1, &num2);
                    break;
            case '-':
                    SUBT(&result, &num1, &num2);
                    break;
            case '*':
                    MULT(&result, &num1, &num2);
                    break;
            case '/':
                    if(num2 != 0)
                        DIVI(&result, &num1, &num2);
                    else
                        printf("Nao existe divisao por 0\n\n");
                    break;
            default:
                    if(num1 != 0 && oper != '0' && num2 != 0)
                        printf(" Operador invalido\n\n ");
        }
    i++;
    }
}

SOMA(float *presult, float * pnum1, float * pnum2)
{
    *presult = *pnum1 + *pnum2;
}

SUBT(float *presult, float * pnum1, float * pnum2)
{
    *presult = *pnum1 - *pnum2;
}

MULT(float *presult, float * pnum1, float * pnum2)
{
    *presult = *pnum1 * *pnum2;
}

DIVI(float *presult, float * pnum1, float * pnum2)
{
    *presult = *pnum1 / *pnum2;
}
#endif// ex03

#ifdef Ex04
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

#endif// ex04

#ifdef Ex05
//                  ARRUMAR O EX5
//                      PARA REALIZAR O
//                          EXERCICIO ;
//                              6
#include <stdlib.h>
#include <stdio.h>

struct pessoa
{
    char nome[35];
    char end[45];
    char cidade[15];
    char estado[3];
    int cep;
};

int main()
{
    struct pessoa netflix[4];
    struct pessoa *p;
    p = &netflix;
    menu(p);
    return;
}

menu(struct pessoa *pp)
{
    int key;
    MENU:
    system("clear || cls");
    printf("\t\tMENU\n\n");
    printf("Envie 1 para entrar com os dados envie 0 para sair\n");
    scanf(" %d", &key);

    switch (key)
    {
    case 1:
        whriteData(pp);
        ReadData(pp);
        break;
    
    case 0:
        printf("Fechando programa\n\n");
        break;
    default:
        goto MENU;
        break;
    }
}


void whriteData(struct pessoa *po)
{
    for (int i = 0; i < 4; i++)
    {
        system("clear || cls");
        printf("\t\tRegistro\n\n");

        printf("Registre seu nome\n");
        getchar();
        scanf(" %s", &po-> nome);

        printf("Registre seu endereço\n");
        scanf(" %s", &po-> end);

        printf("Registre sua cidade\n");
        scanf(" %s", &po-> cidade);

        printf("Registre seu estado EX: {SP RJ}\n");
        scanf(" %s", &po-> estado);

        printf("Registre seu CEP\n");
        scanf(" %d", &po-> cep);
    }
}

void ReadData(struct pessoa *pr)
{
    system("clear || cls");
    printf("NOME: %s\n", pr-> nome);
    printf("ENDEREÇO: %s\n", pr-> end);
    printf("CIDADE: %s\n", pr-> cidade);
    printf("ESTADO: %s\n", pr-> estado);
    printf("CEP: %d\n", pr-> cep);
}
#endif// ex05

#ifdef Ex06
//ARRUMAR O EX5
#endif// ex06