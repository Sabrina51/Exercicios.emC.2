#include <stdio.h>
#include <locale.h>


int main()
{

    setlocale(LC_ALL, "portuguese");

    int n;

    printf("\n-------------------- � MAIOR QUE 10? --------------------\n");

    printf("\n Digite um n�mero inteiro: ");
    scanf("%d", &n);

        if (n>10)
        {
        printf("\n � maior que 10");
        printf("\n");
        }

        else printf("\n N�o � maior que 10 ");

        printf("\n");


return 0;

}
