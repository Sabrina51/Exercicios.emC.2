#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


int main()
{

    setlocale(LC_ALL, "portuguese");

    float lado, mlado;

    printf("\n Digite a quantidade de lados do pol�gono: ");
    scanf("%f", &lado);

        if (lado<3)
        {
        printf("\n N�O � UM POL�GONO\n");
        }

        else if (lado>5)
        {
        printf("\n POL�GONO N�O IDENTIFICADO\n");
        }

        if (lado==3)
        {
        printf("\n Digite a medida dos lados(cm): ");
        scanf("%f", &mlado);
        printf("\n TR�NGULO com �rea de %.2fcm�", pow(mlado,2)*sqrt(3)/4);
        printf("\n");
        }

        else if (lado==4)
        {
        printf("\n Digite a medida dos lados(cm): ");
        scanf("%f", &mlado);
        printf ("\n QUADRADO com �rea de %.1fcm�",pow(mlado,2));
        printf("\n");
        }

        else if (lado==5)
        {
        printf("\n PENT�GONO");
        printf("\n");
        }

        else

        printf("\n");


return 0;

}

