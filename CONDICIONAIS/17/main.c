#include <stdio.h>
#include <locale.h>


int main()
{

    setlocale(LC_ALL, "portuguese");

    int n;

    printf("\n---------------- PAR OU IMPAR? ----------------\n");

    printf("\n Digite um n�mero inteiro: ");
    scanf("%d", &n);

        if (n%2==0)
        {
        printf("\n O n�mero � Par");
        printf("\n");
        }

        else printf("\n O n�mero � Impar");

        printf("\n");


return 0;

}

