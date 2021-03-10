#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{

    setlocale(LC_ALL, "portuguese");

    float l;

    printf("\n------------------ LUCRO 45%% OU 30%% ------------------\n");

    printf("\n Digite o valor do lance: ");
    scanf("%f", &l);

    if (l<20)
        {
        printf("\n Valor de venda: R$%.2f", 0.45*l+l);
        }

    else
    {
    printf("\n Valor de venda: R$%.2f", 0.30*l+l);
    }


    printf("\n");

return 0;

}
