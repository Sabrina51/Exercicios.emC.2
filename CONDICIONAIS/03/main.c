#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{

    setlocale(LC_ALL, "portuguese");

    float m;

    printf("\n Compra de maçãs\n");

    printf("\n Digite a quantidade de maçãs: ");
    scanf("%f", &m);


        if (m<12)
        {
        printf("\n Total a pagar (R$): %.2f",m * 0.30 );
        }

        else
        {
        printf("\n Total a pagar (R$): %.2f",m * 0.25 );
        }

        printf("\n");

return 0;

}
