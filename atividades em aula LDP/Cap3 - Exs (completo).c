#include <stdio.h>
#include <locale.h>
#include <windows.h>
#define BR *setlocale(LC_ALL,"")

#define ex1

#ifdef ex1

/**1 - Escreva um programa que receba na funcao main() 2 valores inteiro. Escreva
    uma funcao para cada operacoes aritmeticas e passe como parametro os 2
    valores recebidos na funcao main(). Retorne os resultados usando o comando
    return e imprima-os no video na funcao main(). */

int soma(int val1, int val2);
int subtracao(int val1, int val2);
int divisao(int val1, int val2);
int multiplicacao(int val1, int val2);
int repetir();

void main(void)
{
    BR;
    int val1, val2;

    printf("\n\tO programa solicita 2 N°s e depois realiza as 4 operações aritméticas básicas\n");
    do
    {
        printf("\n\tInsira o 1° número inteiro: ");
        scanf("%d",&val1);

        printf("\n\tInsira o 2° número inteiro: ");
        scanf("%d",&val2);

        printf("\n\tO resultado da soma de %d e %d é: |%d|", val1, val2, soma(val1, val2));
        printf("\n\tO resultado da subtração de %d e %d é: |%d|", val1, val2, subtracao(val1, val2));
        printf("\n\tO resultado da divisão de %d e %d é: |%d|", val1, val2, divisao(val1, val2));
        printf("\n\tO resultado da multiplicação de %d e %d é: |%d|", val1, val2, multiplicacao(val1, val2));
    }
    while(repetir() == 1);
}
int soma(int val1, int val2)
{
    int soma;

    return soma = val1 + val2;
}
int subtracao(int val1, int val2)
{
    int subtracao;

    return subtracao = val1 - val2;
}
int divisao(int val1, int val2)
{
    int divisao;

    return divisao = val1 / val2;
}
int multiplicacao(int val1, int val2)
{
    int multiplicacao;

    return multiplicacao = val1 * val2;
}
int repetir()
{
    int op;
    do
    {
        printf("\n\n\tDeseja repetir? (1 - Sim / 0 - Não) \n\t");
        scanf("%d",&op);
        system("cls");
    }
    while(op < 0 || op > 1);
    return op;
}
#endif // ex1

#ifdef ex2

/** 2 - Aproveitando o programa anterior inclua a selecao das operacoes aritmeticas
    para transforma-lo em uma calculadora. (utilize o comando switch). As operacoes
    aritmeticas devem estar em funcoes. O resultado deve ser mostrado na
    funcao main()  */

int soma(int val1, int val2);
int subtracao(int val1, int val2);
int divisao(int val1, int val2);
int multiplicacao(int val1, int val2);
int repetir();

void main(void)
{
    BR;
    int val1, val2;

    printf("\n\tO programa solicita 2 N°s e depois a operação a ser realizada\n");
    do
    {
        printf("\n\tInsira o 1° número inteiro: ");
        scanf("%d",&val1);

        printf("\n\tInsira o 2° número inteiro: ");
        scanf("%d",&val2);

        do
        {
            switch(opcao())
            {
                case 1:
                    printf("\n\tO resultado da soma de %d e %d é: |%d|", val1, val2, soma(val1, val2));
                    break;
                case 2:
                    printf("\n\tO resultado da subtração de %d e %d é: |%d|", val1, val2, subtracao(val1, val2));
                    break;
                case 3:
                    printf("\n\tO resultado da divisão de %d e %d é: |%d|", val1, val2, divisao(val1, val2));
                    break;
                case 4:
                    printf("\n\tO resultado da multiplicação de %d e %d é: |%d|", val1, val2, multiplicacao(val1, val2));
                    break;
            }
        }
        while(repetir() == 1);
    }
    while(repetir() == 1);
}
int opcao()
{
    int op;
    do
    {
        printf("\n\t|Menu de seleção|");
        printf("\n\t1- Soma\n\t2- Subtração\n\t3- Divisão\n\t4- Multiplicação\n");
        scanf("%d",&op);
    }
    while(op < 1 || op > 4);
    return op;
}
int soma(int val1, int val2)
{
    int soma;

    return soma = val1 + val2;
}
int subtracao(int val1, int val2)
{
    int subtracao;

    return subtracao = val1 - val2;
}
int divisao(int val1, int val2)
{
    int divisao;

    return divisao = val1 / val2;
}
int multiplicacao(int val1, int val2)
{
    int multiplicacao;

    return multiplicacao = val1 * val2;
}
int repetir()
{
    int op;
    do
    {
        printf("\n\n\tDeseja repetir? (1 - Sim / 0 - Não) \n\t");
        scanf("%d",&op);
        system("cls");
    }
    while(op < 0 || op > 1);
    return op;
}
#endif // ex2

#ifdef ex3

/**3 - Escreva um programa que receba uma letra via teclado. Escreva uma funcao que
    pesquise esta letra dentro do vetor abaixo. Imprima o resultado da pesquisa
    no video na funcao main(). Passe como informacao para a funcao a letra
    digitada.(utilize o comando return). O vetor deve ser uma variavel global.

    vetor -> b,d,f,h,j,k,m,o,q,s,u,w,y */

char letras[12]={'b','d','f','h','j','k','m','o','q','s','u','w','y'};

void mensagem();
char receber();
char pesquisa();
int repetir();

void main()
{
    BR;
    char resultado;

    do
    {
        mensagem();
        resultado = pesquisa();
        if (resultado == 0)
        {
            printf("\n\tA letra inserida não pertence ao vetor.");
        }
        else
        {
            printf("\n\t|%c| pertence ao vetor.",resultado);
        }
    }
    while(repetir() == 1);
}
void mensagem()
{
    printf("\n\tEste programa pede uma letra para ser digitada e pesquisa no vetor se ela existe, caso exista, ele imprime ela");
    getchar();
    system("cls");
}
char receber()
{
    char letra;

    printf("\n\tDigite uma letra: ");
    letra = getchar();
    return letra;
}
char pesquisa()
{
    int cont;
    char letra = receber();
    for(cont = 0; cont <= 12; cont++)
    {
        if(letra == letras[cont])
        {
            return letra;
        }
    }
}
int repetir()
{
    int op;
    do
    {
        printf("\n\n\tDeseja repetir? (1 - Sim / 0 - Não) \n\t");
        scanf("%d",&op);
        system("cls");
    }
    while(op < 0 || op > 1);
    return op;
}
#endif // ex3

#ifdef ex4

/**4 - Faça um programa receba dois números inteiros e execute as seguintes funções:
    - Verificar se o número digitado é positivo ou negativo. Sendo que o valor de
      retorno será 1 se positivo, 0 se negativo ou -1 se for igual a 0.
    - Se os 2 números são positivos, retorne a soma dos N números existentes entre
      eles.
    - Se os 2 números são negativos, retorne a multiplicação dos N números existente
      entre eles. */

int receber(int cont);
int direcionar();
int verificar(int num1, int num2);
int funcoes(int num1, int num2, int condicao1, int condicao2);
int funcao1(int limite, int minimo);
int funcao2(int limite, int minimo);

void main()
{
    BR;
    int resultado;
    printf("\n\tO Programa solicita 2 N°s como limites e exibe os números existentes dentre eles e por fim a soma desses N°s\n");
    do
    {
        resultado = direcionar();
        printf("%d",resultado);
    }
    while(repetir() == 1);
}
int receber(int cont)
{
    int num;

    printf("\n\tDigite o %d° número: ", cont);
    scanf("%d",&num);
    return num;
}
int direcionar()
{
    int num1, num2, cont = 1, resultado;

    num1 = receber(cont);
    num2 = receber(cont+1);
    system("cls");

    resultado = verificar(num1, num2);
    return resultado;
}
int verificar(int num1, int num2)
{
    int condicao1, condicao2, resultado;
    if(num1 < 0)
    {
        condicao1 = 0;
    }
    else if(num1 > 0)
    {
        condicao1 = 1;
    }
    else
    {
        condicao1 = -1;
    }
    if(num2 < 0)
    {
       condicao2 = 0;
    }
    else if(num2 > 0)
    {
        condicao2 = 1;
    }
    else
    {
        condicao2 = -1;
    }
    resultado = funcoes(num1, num2, condicao1, condicao2);
    return resultado;
}
int funcoes(int num1, int num2, int condicao1, int condicao2)
{
    int resposta;
    if(condicao1 && condicao2 == 1)
    {
        if(num1 > num2)
        {
            resposta = funcao1(num1, num2);
        }
        else
        {
            resposta = funcao1(num2, num1);
        }
        return resposta;
    }
    else
    {
        if(num1 < num2)
        {
            resposta = funcao2(num1, num2);
        }
        else
        {
            resposta = funcao2(num2, num1);
        }
        return resposta;
    }
}
int funcao1(int limite, int minimo)
{
    int existentes = 0, cont = 1;
    printf("\n\t|Números dentro desse limite|");
    for(minimo++; minimo < limite; minimo++)
    {
        existentes += minimo;
        printf("\n\t%d° número - %d", cont, minimo);
        cont++;
    }
    printf("\n\n\tO resultado da soma dos números existentes entre |%d| e |%d| é: ", limite - cont, limite);
    return existentes;
}
int funcao2(int limite, int minimo)
{
    int existentes = 1, cont = 1;
    printf("\n\t|Números dentro desse limite|");
    for(minimo--; minimo > limite; minimo--)
    {
        existentes *= minimo;
        printf("\n\t%d° número - %d", cont, minimo);
        cont++;
    }
    printf("\n\n\tO resultado da multiplicação dos números existentes entre |%d| e |%d| é: ", limite + cont, limite);
    return existentes;
}
int repetir()
{
    int op;
    do
    {
        printf("\n\n\tDeseja repetir? (1 - Sim / 0 - Não) \n\t");
        scanf("%d",&op);
        system("cls");
    }
    while(op < 0 || op > 1);
    return op;
}
#endif // ex4

#ifdef ex5

/** 5 - Escreva um programa que receba um numero N. Escreva uma função que
    retorne a soma dos algarismos de N!. O resultado deve ser mostrado na funcao
    main().
    Ex: se N = 4, N! = 24. Logo, a soma de seus algarismos ´e 2 + 4 = 6 */

int receber();
int fatorial(int N);
int somaDigitos(int fat);
int repetir();

void main()
{
    BR;
    int resultado;
    printf("\n\tO programa solicita um N°, pega o resultado da fatorial (de N°) e retorna a soma dos seus algarismos\n");
    do
    {
        resultado = fatorial(receber());
        printf("\n\tSoma dos algarismos do número inserido = %d\n", resultado);
    }
    while(repetir() == 1);
}
int receber()
{
    int num;

    printf("\n\tDigite um número: ");
    scanf("%d",&num);

    return num;
}
int fatorial(int N)
{
    int fatorial = 1, resultado;
    for(N; N > 0; N--)
    {
        printf("\n\t|%d|", N);
        fatorial *= N;
    }
    printf("\n\tFat |%d|", fatorial);

    resultado = somaDigitos(fatorial);
    return resultado;
}
int somaDigitos(int fat)
{
    int digito, soma = 0;
    while (fat > 0)
    {
        digito =  fat % 10;
        soma += digito;
        fat = fat / 10;
    }
    return soma;
}
int repetir()
{
    int op;
    do
    {
        printf("\n\n\tDeseja repetir? (1 - Sim / 0 - Não) \n\t");
        scanf("%d",&op);
        system("cls");
    }
    while(op < 0 || op > 1);
    return op;
}
#endif // ex5
