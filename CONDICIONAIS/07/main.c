#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int senha;

    printf("\n Digite sua senha: ");
    scanf("%d", &senha);


        if (senha==1234)
        {
        printf("\n ACESSO PERMITIDO\n");
        }

        else
        {
        printf("\n ACESSO NEGADO\n");
        }


return 0;

}
