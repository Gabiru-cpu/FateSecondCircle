#include <stdio.h>
#include <stdlib.h>

void main() {
    int s, h, m;

    printf("Digite uma quantidade de segundos: ");
    scanf("%d", &s);
    
    h = s / 3600;
    m = s / 60;
    printf("Horas: %d\nMinutos:%d\nSegundos:%d\n", h, m, s);
}