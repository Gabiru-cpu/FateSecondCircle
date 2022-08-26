#include <stdio.h>
#include <stdlib.h>
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
