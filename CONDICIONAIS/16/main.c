#include <stdio.h>
#include <locale.h>


int main()
{

    setlocale(LC_ALL, "portuguese");

    int n1,n2;

    printf("\n--------------- QUAL � O MAIOR N�MERO? ---------------\n");

    printf("\n Digite um n�mero inteiro: ");
    scanf("%d", &n1);
    printf("\n Digite outro n�mero inteiro: ");
    scanf("%d", &n2);

        if (n1>n2)
        {
        printf("\n O n�mero maior �: %d", n1);
        printf("\n");
        }

        else
        {
        printf("\n O n�mero maior �: %d", n2);
        printf("\n");
        }

        printf("\n");


return 0;

}
