#include <stdio.h>
#include <locale.h>


int main()
{

    setlocale(LC_ALL, "portuguese");

    int n1,n2;

    printf("\n--------------- QUAL É O MAIOR NÚMERO? ---------------\n");

    printf("\n Digite um número inteiro: ");
    scanf("%d", &n1);
    printf("\n Digite outro número inteiro: ");
    scanf("%d", &n2);

        if (n1>n2)
        {
        printf("\n O número maior é: %d", n1);
        printf("\n");
        }

        else
        {
        printf("\n O número maior é: %d", n2);
        printf("\n");
        }

        printf("\n");


return 0;

}
