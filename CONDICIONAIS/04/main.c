#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    float n1, n2;

    printf("\n Digite um número: ");
    scanf("%f", &n1);

    printf("\n Digite outro número: ");
    scanf("%f", &n2);


        if (n1==n2 && n2==n1)
        {
        printf("\n Números iguais\n");
        }

        else if(n1>n2)
        {
        printf("\n O maior Número é: %.2f\n", n1);
        }

        else if (n2>n1)
        {
        printf("\n O maior Número é: %.2f\n", n2);
        }


    return 0;
}
