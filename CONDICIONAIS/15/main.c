#include <stdio.h>
#include <locale.h>


int main()
{

    setlocale(LC_ALL, "portuguese");

    int n1,n2;

    printf("\n----------------- IGUAL OU DIFERENTE? -----------------\n");

    printf("\n Digite um n�mero inteiro: ");
    scanf("%d", &n1);
    printf("\n Digite outro n�mero inteiro: ");
    scanf("%d", &n2);

        if (n1==n2)
        {
        printf("\n OS N�MEROS S�O IGUAIS");
        printf("\n");
        }

        else
        {
        printf("\n OS N�MEROS S�O DIFERENTES");
        }

        printf("\n");


return 0;

}
