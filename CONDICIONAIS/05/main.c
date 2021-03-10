#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int n1, n2, n3;

    printf("\n *Digite apenas números inteiros*\n");
    printf("\n Digite um número: ");
    scanf("%d", &n1);

    printf("\n Digite outro número: ");
    scanf("%d", &n2);

    printf("\n Digite outro número: ");
    scanf("%d", &n3);


        if ((n1==n2 && n1!=n3) || (n1!=n2 && n2==n3) || (n1!=n2 && n1==n3))
        {
        printf("\n FORAM DIGITADOS NÚMEROS IGUAIS\n");
        }

        else if (n1>n2 && n1>n3)
        {
        printf("\n O maior Número é: %d\n", n1);
        }

        else if (n2>n1 && n2>n3)
        {
        printf("\n O maior Número é: %d\n", n2);
        }

        else if (n3>n1 && n3>n2)
        {
        printf("\n O maior Número é: %d\n",n3);
        }


        printf("\n");

    return 0;
}
