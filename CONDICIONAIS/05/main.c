#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int n1, n2, n3;

    printf("\n *Digite apenas n�meros inteiros*\n");
    printf("\n Digite um n�mero: ");
    scanf("%d", &n1);

    printf("\n Digite outro n�mero: ");
    scanf("%d", &n2);

    printf("\n Digite outro n�mero: ");
    scanf("%d", &n3);


        if ((n1==n2 && n1!=n3) || (n1!=n2 && n2==n3) || (n1!=n2 && n1==n3))
        {
        printf("\n FORAM DIGITADOS N�MEROS IGUAIS\n");
        }

        else if (n1>n2 && n1>n3)
        {
        printf("\n O maior N�mero �: %d\n", n1);
        }

        else if (n2>n1 && n2>n3)
        {
        printf("\n O maior N�mero �: %d\n", n2);
        }

        else if (n3>n1 && n3>n2)
        {
        printf("\n O maior N�mero �: %d\n",n3);
        }


        printf("\n");

    return 0;
}
