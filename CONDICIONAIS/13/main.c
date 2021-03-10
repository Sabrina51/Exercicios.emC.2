#include <stdio.h>
#include <locale.h>


int main()
{

    setlocale(LC_ALL, "portuguese");

    int n;

    printf("\n-------------------- É MAIOR QUE 10? --------------------\n");

    printf("\n Digite um número inteiro: ");
    scanf("%d", &n);

        if (n>10)
        {
        printf("\n É maior que 10");
        printf("\n");
        }

        else printf("\n Não é maior que 10 ");

        printf("\n");


return 0;

}
