#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int n1, n2, n3;

    printf("\n Digite três valores DIFERENTES\n");

    printf("\n Primeiro valor: ");
    scanf("%d", &n1);

    printf("\n Segundo valor: ");
    scanf("%d", &n2);

    printf("\n Terceiro valor valor: ");
    scanf("%d", &n3);


        if (n1<n2 && n2<n3)
        {
        printf("\n Ordem crescente: %d %d %d\n", n1, n2, n3);
        }
        else if (n1<n3 && n3<n2)
        {
        printf("\n Ordem crescente: %d %d %d\n", n1, n3, n2);
        }
        else if (n2<n1 && n1<n3)
        {
        printf("\n Ordem crescente: %d %d %d\n", n2, n1, n3);
        }
        else if (n2<n3 && n3<n1)
        {
        printf("\n Ordem crescente: %d %d %d\n", n2, n3, n1);
        }
        else if (n3<n1 && n1<n2)
        {
        printf("\n Ordem crescente: %d %d %d\n", n3, n1, n2);
        }
        else if (n3<n2 && n2<n1)
        {
        printf("\n Ordem crescente: %d %d %d\n", n3, n2, n1);
        }

        else
        {
        printf("\n NÚMEROS IGUAIS FORAM DIGITADOS");
        }

        printf("\n\n");

    return 0;
}
