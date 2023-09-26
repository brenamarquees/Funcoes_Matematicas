#include<stdio.h>
#include "mult.h"
#include "sub.h"
#include "sun.h"

int main(void)
{
    int n1,n2,mult,sub,sun;

    printf("---- Programa de Multiplicação, Subtração e Adição de Números Inteiros ----\n");
    printf("Digite o primeiro numero:\n");
    scanf("%d", &n1);
    printf("Digite o segundo numero:\n");
    scanf("%d", &n2);

    mult = multiplica(n1,n2);
    sub = subtrai(n1,n2);
    sun = soma(n1,n2);

    printf("Resultado multiplicação = %d\n", mult);
    printf("Resultado subtração = %d\n", sub);
    printf("Resultado adição = %d\n", sun);

    return 0;
}
