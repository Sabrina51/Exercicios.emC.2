#include <stdio.h>
#include <locale.h>


int main()
{

    setlocale(LC_ALL, "portuguese");

    int n;

    printf("\n---------------- PAR OU IMPAR? ----------------\n");

    printf("\n Digite um número inteiro: ");
    scanf("%d", &n);

        if (n%2==0)
        {
        printf("\n O número é Par");
        printf("\n");
        }

        else printf("\n O número é Impar");

        printf("\n");


return 0;

}

