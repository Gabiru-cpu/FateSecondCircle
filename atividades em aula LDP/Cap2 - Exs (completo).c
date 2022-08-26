#include <stdio.h>
#include <locale.h>
#include <windows.h>
#define BR *setlocale(LC_ALL,"")

#define ex4
#ifdef ex1

/**1 - Escreva um programa para adivinhar um numero entre 1 e 99 que o usuario
    pensou. Digite via teclado os simbolos =, > ou < a cada pergunta. Utilize o
    comando if-else. */
main()
{
    BR;
    char res;
    double N1=50,N2=N1/2;
    int T;

    printf("No programa a seguir você deve pensar em um número e seguir as instruções até o programa adivinhar seu n°\n\n");
    while (T <= 0)
    {
    for(int i=0; i <= 8 ; i++)
    {
        printf("Se seu numero for maior envie (>), menor envie (<) ou igual envie(=) a: \n= %.0lf\t",N1);
        scanf(" %c", &res);
        if (res == '>')
        {
            N1+=N2; // 50+25=75
            N2/=2; // 25/02=12.5
            if(N1>=99.2) //nao permitir passar de 99
            {
                N1-=1;//subtrai -1
            }
            else if(N1<=0.2) //não permitir ir para abaixo de zero
            {
                N1+=1;//incrementa +1
            }
        }
        else if (res == '<')
        {
            N1-=N2; //Recebe 50-25=25
            N2/=2;
            if(N1>=99.2)//nao permitir passar de 99
            {
                N1-=1;//subtrai -1
            }
            else if(N1<=0.2) //não permitir ir para abaixo de zero
            {
                N1+=1;//incrementa +1
            }
        }
        else if(res == '=')
        {
            printf("\HAHA Sabia que seu numero era: %.0lf\n",N1);
            break;
        }
    }
        printf("***--------  END  --------***\n");
        printf("Caso queira continuar envie um numero igual ou menor a 0 caso nao envie um numero maior q 0\n");
    scanf("%d",&T);
    }
    system("pause");
}

#endif // ex1

#ifdef ex2
/**2 - Resecreva o programa do execicio anterior agora utilizando o comando switch.
    Conte o n. de tentativas e imprima o resultado no video.*/
main()
{
    BR;
    char res;
    double N1=50,N2=N1/2;
    int T=-3;

printf("No programa a seguir você deve pensar em um número e seguir as instruções até o programa adivinhar seu n°\n\n");
while (T <= 0)
{
    for(int i=0; i <= 8 ; i++)
    {
        printf("Se seu numero for maior envie (>), menor envie (<) ou igual envie(=) a: \n= %.0lf\t",N1);
        scanf(" %c", &res);
        switch (res)
        {
        case '>':
            N1+=N2; // 50+25=75
            N2/=2; // 25/02=12.5
            if(N1>=99.2) //nao permitir passar de 99
            {
                N1-=1;//subtrai -1
            }
            else if(N1<=0.2) //não permitir ir para abaixo de zero
            {
                N1+=1;//incrementa +1
            }
            break;

        case '<':
            N1-=N2; //Recebe 50-25=25
            N2/=2;
            if(N1>=99.2)//nao permitir passar de 99
            {
                N1-=1;//subtrai -1
            }
            else if(N1<=0.2) //não permitir ir para abaixo de zero
            {
                N1+=1;//incrementa +1
            }
            break;
        case '=':
            printf("\HAHA Sabia que seu numero era: %.0lf\n",N1);
            i=10;
            break;
        }
    }
        printf("***--------  END  --------***\n");
printf("Caso queira continuar envie um numero igual ou menor a 0 caso nao envie um numero maior q 0\n");
scanf("%d",&T);
}
    system("pause");
}

#endif // ex2

#ifdef ex3

//3 - Escreva um programa que receba via teclado numeros inteiros positivos.
 //   Quando o numero digitado for negativo o programa deve parar e calcula a
    //media dos valores positivos digitados.

    int receber();
    int exibir(int i, int *positivo);
    int repetir();

    void main()
    {
        BR;
        do
        {
            printf("\nEsse programa solicitará nºs positivos (ou 0) até que você digite um negativo, sendo assim entregue a media dos positivos");

            printf("\n\tO resultado da média dos Nº positivos inseridos é: %d",receber());
        }
        while(repetir() == 1);
    }
    int receber()
    {
        int positivo[9], i = 0, media;

        for( ; ; i++)
        {
            printf("\n\tDigite o %dº número: ",i+1);
            scanf("%d",&positivo[i]);
            system("cls");
            if(positivo[i] < 0)
            {
                break;
            }
        }
        printf("\n\tForam digitados %dNºs",i);
        media = exibir(i, positivo);
        return media;
    }
    int exibir(int i, int *positivo)
    {
        int f = 0, soma = 0, media;
        while(f < i)
        {
            printf("\n\t%d° - [%d]",f+1 ,positivo[f]);
            soma += positivo[f];
            f++;
        }
        media = soma / i;
        return media;
    }
    int repetir()
    {
        int op;
        do
        {
            printf("\n\tDeseja repetir? (1 - Sim / 0 - Não)");
            scanf("%d",&op);
            system("cls");
        }
        while(op < 0 || op > 1);
        return op;
    }

#endif // ex3

#ifdef ex4

/**4 - As ligacoes telefonicas são cobradas pela sua duracao. O sistema registra os
    instantes em que a ligacao foi iniciada e concluida.
    Escreva um programa que recebe via teclado dois instantes dados em
    horas, minutos e segundo e determina o intervalo de tempo
    (em horas, minutos e segundos) decorrido entre eles.*/

int repetir();
int hr, min, seg, hr2, min2, seg2;

void main()
{
    BR;

    do
    {
        inicio();
        fim();
        tempo();
    }
    while(repetir() == 1);
}

void inicio()
{
    printf("\n\tHora da chamada iniciada:\n");
    printf("\n\tHr: ");
    scanf("%d", &hr);

    printf("\n\tMin: ");
    scanf("%d", &min);

    printf("\n\tSeg: ");
    scanf("%d", &seg);
}

void fim()
{
    printf("\n\tHora do fim da chamada:\n");
    printf("\n\tHr: ");
    scanf("%d", &hr2);

    printf("\n\tMin: ");
    scanf("%d", &min2);

    printf("\n\tSeg: ");
    scanf("%d", &seg2);
}

void tempo()
{
    int hora, minuto, segundo;

    hora = hr2 - hr;
    minuto = min2 - min;
    segundo = seg2 - seg;
    if(minuto < 0)
    {
        hora -= 1;
        minuto += 60;
    }
    if(segundo < 0)
    {
        minuto -= 1;
        segundo += 60;
    }

    printf("\n\Tempo decorrente da chamada: |%d hr, %d min, %d seg", hora, minuto, segundo);   //Impressão do resultado
}
int repetir()
{
    int op;
    do
    {
        printf("\n\tDeseja repetir? (1 - Sim / 0 - Não)");
        scanf("%d",&op);
        system("cls");
    }
    while(op < 0 || op > 1);
    return op;
}
#endif // ex4

#ifdef ex5

/*5 - Um posto está vendendo combustíveis com a seguinte tabela de descontos:
     Álcool
         até 20 litros, desconto de 3% por litro
         acima de 20 litros, desconto de 5% por litro
     Gasolina
          até 20 litros, desconto de 4% por litro
          acima de 20 litros, desconto de 6% por litro
     Escreva um programa que leia o número de litros vendidos e o tipo de
     combustível (codificado da seguinte forma: A-álcool, G-gasolina). Calcule e
     imprima o valor a ser pago pelo cliente sabendo-se que o preço do litro da
     gasolina é R$ 5,88 e o preço do litro do álcool é R$ 4,18.   */

char identificar();
float alcool();
float gasolina();
int repetir();

void main()
{
    BR;
    float resultado;
    do
    {
        printf("\n\tO programa solicita o tipo de combustível e a quantidade em litros para dar o valor final com desconto.");
        getchar();
        system("cls");
        switch(identificar())
        {
            case 'A':
                resultado = alcool();
                printf("\n\tO valor total a ser pago é: %.2f", resultado);
                break;
            case 'G':
                resultado = gasolina();
                printf("\n\tO valor total a ser pago é: %.2f", resultado);
                break;
            default:
                printf("\n\tCaractere Inválido.");
        }
    }
    while(repetir() == 1);
}

char identificar()
{
    char tipo;

    printf("\n\t|Atenção: Insira letras maiúsculas|");
    printf("\n\tQual o combustível selecionado? A (álcool) / G (gasolina) \n\t");

    tipo = getchar();
    system("cls");

    return tipo;
}

float alcool()
{
    float litros, valorTotal;

    printf("\n\tQuantos litros de álcool serão abastecidos: ");
    scanf("%f", &litros);

    if(litros <= 20.0)
    {
        valorTotal = (litros * 4.18) * 0.97;
    }
    else
    {
        valorTotal = (litros * 4.18) * 0.95;
    }
    return valorTotal;
}

float gasolina()
{
    float litros, valorTotal;

    printf("\n\tQuantos litros de gasolina serão abastecidos: ");
    scanf("%f", &litros);

    if(litros <= 20.0)
    {
        valorTotal = (litros * 5.88) * 0.96;
    }
    else
    {
        valorTotal = (litros * 5.88) * 0.94;
    }
    return valorTotal;
}

int repetir()
{
    int op;
    do
    {
        printf("\n\tDeseja repetir? (1 - Sim / 0 - Não) \n\t");
        scanf("%d",&op);
        system("cls");
    }
    while(op < 0 || op > 1);
    return op;
}
#endif // ex5
