#include <stdio.h>
#include <stdlib.h>

// GABRIEL E ALBERT GRUPO: C04
//achar um numero entre 1 a 99 q voce pensou tipo genio da lampada
main()
{
    char res;
    double N1=50,N2=N1/2;
    int T=-3;
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
        printf("*********--------  END  --------*********\n");
printf("Caso queira continuar envie um numero igual ou menor a 0 caso nao envie um numero maior q 0\n");
scanf("%d",&T);
}
    system("pause");
}