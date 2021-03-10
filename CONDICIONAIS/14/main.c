#include <stdio.h>
#include <locale.h>


int main()
{

    setlocale(LC_ALL, "portuguese");

    int A,B;

    printf("\n------------------ A É DIVISÍVEL POR B? ------------------\n");

    printf("\n Digite o número A: ");
    scanf("%d", &A);
    printf("\n Digite o número B: ");
    scanf("%d", &B);

        if (A%B==0)
        {
        printf("\n A é divisível por B");
        printf("\n");
        }

        else printf("\n A não é divisível por B");

        printf("\n");


return 0;

}
