#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    float a1, a2, a3;

    printf("\nDigite Ângulo 1: ");
    scanf("%f", &a1);

    printf("\nDigite Ângulo 2: ");
    scanf("%f", &a2);

    printf("\nDigite Ângulo 3: ");
    scanf("%f", &a3);



        if ((a1==90 && a2!=90 && a3!=90) || (a1!=90 && a2==90 && a3!=90) || (a1!=90 && a2!=90 && a3==90))
        {
        printf("\nTriângulo Retângulo\n");
        }

        else if ((a1>90 && a2!=90 && a3!=90) || (a1!=90 && a2>90 && a3!=90) || (a1!=90 && a2!=90 && a3>90))
        {
        printf("\nTriângulo Obtusângulo\n");
        }

        else if ((a1<90 && a2!=90 && a3!=90) || (a1!=90 && a2<90 && a3!=90) || (a1!=90 && a2!=90 && a3<90))
        {
        printf("\nTriângulo Acutângulo\n");
        }


    return 0;
}
