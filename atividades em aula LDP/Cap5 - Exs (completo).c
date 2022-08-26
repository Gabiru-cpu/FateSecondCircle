#include <stdio.h>
#include <locale.h>
#include <windows.h>
#define BR *setlocale(LC_ALL,"")

#define ex5

#ifdef ex1

void armazenar(x);

char nome_cliente[36];

int main(void)
{
int i, x = 0;

//declarando e atribuindo valores no vetor de char
//texto[7] usa 6 caracteres úteis + 1 caracter para o finalizador
while(x < 35)
{
    armazenar(x);
    x + 7;
}



printf("Valor da variavel texto = %s\n", nome_cliente);

//Percorrendo o vetor de char e mostrando
//cada elemento individualmente
for (i=0; i<7; i++)
{
printf("Valor do elemento %d da string = %c\n",i, nome_cliente[i]);
}

getch();
return 0;
}
void armazenar(int x)
{
    int y = x + 7;
    do
{
    printf("Escreva o 1° nome (máx 7 letras): ");
    scanf("%s",&nome_cliente[x]);
}
while (nome_cliente[y] != 0);
}


#endif // ex1

#ifdef ex2

/**2 - Receba 2 string de ate 10 caracteres via teclado na funcao main() e noutra
    funcao compare-as mostrando como resultado se são IGUAIS ou DIFERENTES na funcao
    main(). (Declare os vetores como variavel global)
*/

char seq1[10];
char seq2[10];
int comparar();
int repetir();

void main()
{
    BR;
    int resultado;
    do
    {
        printf("\n\tInsira a 1° sequência (máx 10 caracteres): ");
        scanf("%s",&seq1[0]);
        printf("\n\t%s",seq1);
        getchar();
        printf("\n\tInsira a 2° sequência (máx 10 caracteres): ");
        scanf("%s",&seq2[0]);
        printf("\n\t%s",seq2);
        getchar();

        resultado = comparar();

        if(resultado == 0)
        {
            printf("\n\t|As duas sequências não são iguais.|");
        }
        else
        {
            printf("\n\t|As duas sequências são iguais.|");
        }
    }
    while(repetir() == 1);
}
int comparar()
{
    int cont, resultado = 0;
    for(cont = 0; cont <= 9; cont++)
    {
        if(seq1[cont] == seq2[cont])
        {
            resultado += 1;
        }
    }
    if(resultado != cont)
    {
        resultado = 0;
    }

    return resultado;
}
int repetir()
{
    int op;
    do
    {
        printf("\n\n\tDeseja repetir? (1 - Sim / 0 - Não) \n\t");
        scanf("%d",&op);
        system("cls");
        getchar();
    }
    while(op < 0 || op > 1);
    return op;
}
#endif // ex2

#ifdef ex3

/**3 - Receba via teclado uma cadeia de caracteres (10) e converta todos os caracteres
    para letras maiusculas.
*/

char seq[10];
void converter();

int repetir();

void main()
{
    BR;
    int cont;
    do
    {
        printf("\n\tInsira uma sequência (máx 10 caracteres): ");
        scanf("%s",&seq[0]);
        converter();
        printf("\n\t%s",seq);
    }
    while(repetir() == 1);
}
void converter()
{
    int cont = 0;
    while(seq[cont] != '\0')
    {
        seq[cont] = toupper(seq[cont]);
        cont ++;
    }
    seq[cont] = '\0';
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

/**4 - Receba via teclado uma cadeia de caracteres (10) e converta todos os caracteres
    para letras minusculas.
)*/

char seq[10];
void converter();

int repetir();

void main()
{
    BR;
    int cont;
    do
    {
        printf("\n\tInsira uma sequência (máx 10 caracteres): ");
        scanf("%s",&seq[0]);
        converter();
        printf("\n\t%s",seq);
    }
    while(repetir() == 1);
}
void converter()
{
    int cont = 0;
    while(seq[cont] != '\0')
    {
        seq[cont] = tolower(seq[cont]);
        cont ++;
    }
    seq[cont] = '\0';
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

/**5 - Faca um programa que leia uma palavra (maximo de 20 letras) em uma funcao
    e some 1 no valor ASCII de cada caractere da palavra em outra funcao. Na sua
    funcao main() imprima a string resultante. (Declare o vetor como variavel
    global*/

char seq[20];
void converter();

int repetir();

void main()
{
    BR;
    int cont;
    do
    {
        printf("\n\tInsira uma sequência (máx 20 caracteres): ");
        scanf("%s",&seq[0]);
        converter();
        printf("\n\t%s",seq);
    }
    while(repetir() == 1);
}
void converter()
{
    int cont = 0;
    while(seq[cont] != '\0')
    {
        seq[cont] = seq[cont] + 1;
        cont ++;
    }
    seq[cont] = '\0';
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
