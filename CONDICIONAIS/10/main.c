#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int ano;

    printf("\n Digite o ano do seu nascimento (xxxx): ");
    scanf("%d", &ano);


        if (ano<=2002)
        {
        printf("\n PODERÁ VOTAR ESTE ANO\n");
        }

        else
        {
        printf("\n NÃO PODERÁ VOTAR ESTE ANO\n");
        }


return 0;

}
