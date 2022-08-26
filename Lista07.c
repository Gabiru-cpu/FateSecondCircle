#include <stdio.h>
#include <locale.h>
#include <windows.h>
#define BR *setlocale(LC_ALL,"")

#define ex4

#ifdef ex1

/**1 - Escreva um programa com a estrutura de dados abaixo. Defina um vetor de
    estruturas de 4 elementos. Receba os dados pelo teclado e imprima-os no
    video. Faça um menu. (vetor de estruturas)
		nome, end, cidade, estado, cep  */

void inserirDados(int pessoa);
void listarDados(int pessoa);
int repetir();

struct endereco
{
    char nome[30];
    char estado[3];
    char cidade[25];
    char cep[10];
    char end[30];
};

struct endereco cadastro[4];

void main()
{
    BR;
    int op, pes;

    do
    {
        printf("\n\t|Menu|");
        printf("\n\t|1- Inserir dados");
        printf("\n\t|2- Listar dados");
        printf("\n\t|3- Sair\n\t");
        scanf("%d", &op);

        switch(op)
        {
            case 1:
                printf("\n\tInserir dados de qual pessoa (1~5): ");
                scanf("%d", &pes);
                inserirDados(pes-1);
                break;
            case 2:
                printf("\n\tListar dados de qual pessoa (1~5): ");
                scanf("%d", &pes);
                listarDados(pes-1);
                break;
            case 3:
                /**sair do programa*/
            default:
                break;
        }
    }
    while(repetir() == 1);
}
void inserirDados(int pessoa)
{
    fflush(stdin);
    printf("\n\tInsira o nome: ");
    gets(cadastro[pessoa].nome);

    printf("\n\tInsira o estado (formato 2 letras - Exm 'SP'): ");
    gets(cadastro[pessoa].estado);

    printf("\n\tInsira a cidade: ");
    gets(cadastro[pessoa].cidade);

    printf("\n\tInsira o CEP: ");
    gets(cadastro[pessoa].cep);

    printf("\n\tInsira o endereço: ");
    gets(cadastro[pessoa].end);
}
void listarDados(int pessoa)
{
    printf("\n\t*****|Dados Cadastrados|*****");
    printf("\n\t|Nome do usuário: %s",cadastro[pessoa].nome);
    printf("\n\t|Estado de moradia: %s",cadastro[pessoa].estado);
    printf("\n\t|Cidade de residência: %s",cadastro[pessoa].cidade);
    printf("\n\t|CEP do usuário: %s",cadastro[pessoa].cep);
    printf("\n\t|Endereço: %s\n",cadastro[pessoa].end);
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

/*2 - Escreva um programa com a estrutura de dados abaixo. Receba 2 datas via
    teclado e calculo, o numero de dias entre elas e mostre o resultado no
    video. (vetor de estruturas)
                dia, mes, ano */

#ifdef ex2

void receber();
void calcular();
int repetir();

struct data
{
    int dia;
    int mes;
    int ano;
};

struct data recebida [2];

void main()
{
    BR;
    do
    {
        receber();
        calcular();
    }
    while(repetir() == 1);
}
void receber()
{
    int i;
    for(i = 0; i < 2; i++)
    {
        printf("\n\tInsira a %d° data no formato numérico", i+1);
        printf("\n\tDia: ");
        scanf("%d",&recebida[i].dia);
        printf("\n\tMês: ");
        scanf("%d",&recebida[i].mes);
        printf("\n\tAno: ");
        scanf("%d",&recebida[i].ano);
    }
}
void calcular()
{
    int dia, mes, ano;

    ano = recebida[1].ano - recebida[0].ano;
    mes = recebida[1].mes - recebida[0].mes;
    dia = recebida[1].dia - recebida[0].dia;
    if(mes < 0)
    {
        ano -= 1;
        mes += 12;
    }
    if(dia < 0)
    {
        mes -= 1;
        dia += 30;
    }

    printf("\n\t\Diferença de dias entre cada data: |%d ano, %d mes, %d dia", ano, mes, dia);   //Impressão do resultado
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

/**3 - Escreva um programa com a estrutura de dados abaixo. Defina um vetor de
    estrutura de 4 elementos. Receba dados via teclado e imprima-os no video.
    No menu inclua uma 3. opcao que calcula o IMC da pessoal. Faça um menu.
    (vetor de estruturas)
    Calculo do IMC = peso/(altura*altura).
        estrutura: nome, peso, altura */

void inserir(int pessoa);
void listar(int pessoa);
float calcularIMC(int pessoa);
int repetir();

struct pessoa
{
    char nome[20];
    float peso;
    float altura;
};

struct pessoa recebida [4];

void main()
{
    BR;
    int op, pes;
    do
    {
        printf("\n\t|Menu|");
        printf("\n\t|1- Inserir dados");
        printf("\n\t|2- Listar dados");
        printf("\n\t|3- Calcular IMC\n\t");
        scanf("%d", &op);

        switch(op)
        {
            case 1:
                printf("\n\tInserir dados de qual pessoa: (1~5)");
                scanf("%d", &pes);
                inserir(pes-1);
                break;
            case 2:
                printf("\n\tListar dados de qual pessoa: (1~5)");
                scanf("%d", &pes);
                listar(pes-1);
                break;
            case 3:
                printf("\n\tCalcular IMC de qual pessoa: (1~5)");
                scanf("%d", &pes);
                printf("\n\tResultado do IMC: |%f|",calcularIMC(pes-1));
            break;
            default:
                break;
        }
    }
    while(repetir() == 1);
}
void inserir(int pessoa)
{
    fflush(stdin);
    printf("\n\tDigite o nome da pessoa: ");
    gets(recebida[pessoa].nome);
    fflush(stdin);
    printf("\n\tDigite a altura: ");
    scanf("%f",&recebida[pessoa].altura);
    fflush(stdin);
    printf("\n\tDigite o peso: ");
    scanf("%f",&recebida[pessoa].peso);
    fflush(stdin);
}
void listar(int pessoa)
{
        printf("\n\t|Pessoa %d", pessoa+1);
        printf("\n\t|nome da pessoa: %s", recebida[pessoa].nome);
        printf("\n\t|Digite a altura: %.2f", recebida[pessoa].altura);
        printf("\n\t|Digite o peso: %.2f\n", recebida[pessoa].peso);
}
float calcularIMC(int pessoa)
{
    float IMC;
    IMC = recebida[pessoa].peso /(recebida[pessoa].altura*recebida[pessoa].altura);
    return IMC;
}
int repetir()
{
    int op;
    do
    {
        printf("\n\n\tVoltar ao Menu? (1 - Sim / 0 - Não) \n\t");
        scanf("%d",&op);
        system("cls");
    }
    while(op < 0 || op > 1);
    return op;
}
#endif // ex3

#ifdef ex4

/**4 - Escreva um programa que tem uma estrutura da dados com os membros abaixo.
    Receba dados via teclado e imprima estes conteudos no video no seguinte
    formato.
             char, int, long, float, double
             unsigned char, unsigned int, unsigned long,

            10        20        30        40        50        60        70
    1234567890123456789012345678901234567890123456789012345678901234567890
        char      int       long                float               double
              unsigned char       unsigned int        unsigned long  */

int repetir();

struct dados
{
    char c;
    unsigned char uc;
    short s;
    long l;
    int i;
    float f;
    double d;
    unsigned int ui;
    unsigned long ul;
};

void main()
{
    BR;
    struct dados base;

    do
    {
        printf("\n\tDigite um número SHORT: ");
        scanf("%d",&base.s);
        printf("\n\tDigite um número LONG: ");
        scanf("%ld",&base.l);
        printf("\n\tDigite um número INT: ");
        scanf("%d",&base.i);
        printf("\n\tDigite um número FLOAT: ");
        scanf("%f",&base.f);
        printf("\n\tDigite um número DOUBLE: ");
        scanf("%lf",&base.d);
        getchar();
        printf("\n\tDigite um CARACTER: ");
        scanf("%c",&base.c);

        printf("\n\t        10        20        30        40        50        60\n");
        printf("\n\t12345678901234567890123456789012345678901234567890123456789012345\n");


        printf("\n\t%9d%19d%19d\n", base.s, base.l, base.i);
        printf("\n\t%19.1f%21.0lf%18c\n", base.f, base.d, base.c);
    }
    while(repetir() == 0);
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
