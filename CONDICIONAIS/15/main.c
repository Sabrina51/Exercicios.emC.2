#include <stdio.h>
#include <locale.h>


int main()
{

    setlocale(LC_ALL, "portuguese");

    int n1,n2;

    printf("\n----------------- IGUAL OU DIFERENTE? -----------------\n");

    printf("\n Digite um número inteiro: ");
    scanf("%d", &n1);
    printf("\n Digite outro número inteiro: ");
    scanf("%d", &n2);

        if (n1==n2)
        {
        printf("\n OS NÚMEROS SÃO IGUAIS");
        printf("\n");
        }

        else
        {
        printf("\n OS NÚMEROS SÃO DIFERENTES");
        }

        printf("\n");


return 0;

}
