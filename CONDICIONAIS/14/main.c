#include <stdio.h>
#include <locale.h>


int main()
{

    setlocale(LC_ALL, "portuguese");

    int A,B;

    printf("\n------------------ A � DIVIS�VEL POR B? ------------------\n");

    printf("\n Digite o n�mero A: ");
    scanf("%d", &A);
    printf("\n Digite o n�mero B: ");
    scanf("%d", &B);

        if (A%B==0)
        {
        printf("\n A � divis�vel por B");
        printf("\n");
        }

        else printf("\n A n�o � divis�vel por B");

        printf("\n");


return 0;

}
