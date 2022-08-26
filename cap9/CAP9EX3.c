/*Escreva um programa que receba n valores via teclado, receba também a
    operação a ser executada. Quando for digitado "=" o programa deve mostrar
    o resultado acumulado dos n valores. As operações aritmeticas e a entrada
    de dados devem ser funções que recebe os valores usando ponteiros.*/

#include <stdio.h>

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