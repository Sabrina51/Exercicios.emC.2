#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    float a1, a2, a3;

    printf("\nDigite �ngulo 1: ");
    scanf("%f", &a1);

    printf("\nDigite �ngulo 2: ");
    scanf("%f", &a2);

    printf("\nDigite �ngulo 3: ");
    scanf("%f", &a3);



        if ((a1==90 && a2!=90 && a3!=90) || (a1!=90 && a2==90 && a3!=90) || (a1!=90 && a2!=90 && a3==90))
        {
        printf("\nTri�ngulo Ret�ngulo\n");
        }

        else if ((a1>90 && a2!=90 && a3!=90) || (a1!=90 && a2>90 && a3!=90) || (a1!=90 && a2!=90 && a3>90))
        {
        printf("\nTri�ngulo Obtus�ngulo\n");
        }

        else if ((a1<90 && a2!=90 && a3!=90) || (a1!=90 && a2<90 && a3!=90) || (a1!=90 && a2!=90 && a3<90))
        {
        printf("\nTri�ngulo Acut�ngulo\n");
        }


    return 0;
}
