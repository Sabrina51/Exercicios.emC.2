#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


int main()
{

    setlocale(LC_ALL, "portuguese");

    float lado, mlado;

    printf("\n Digite a quantidade de lados do polígono: ");
    scanf("%f", &lado);

        if (lado<3)
        {
        printf("\n NÃO É UM POLÍGONO\n");
        }

        else if (lado>5)
        {
        printf("\n POLÍGONO NÃO IDENTIFICADO\n");
        }

        if (lado==3)
        {
        printf("\n Digite a medida dos lados(cm): ");
        scanf("%f", &mlado);
        printf("\n TRÂNGULO com área de %.2fcm²", pow(mlado,2)*sqrt(3)/4);
        printf("\n");
        }

        else if (lado==4)
        {
        printf("\n Digite a medida dos lados(cm): ");
        scanf("%f", &mlado);
        printf ("\n QUADRADO com área de %.1fcm²",pow(mlado,2));
        printf("\n");
        }

        else if (lado==5)
        {
        printf("\n PENTÁGONO");
        printf("\n");
        }

        else

        printf("\n");


return 0;

}

