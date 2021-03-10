#include <stdio.h>
#include <locale.h>


int main()
{

    setlocale(LC_ALL, "portuguese");

    float n;

    printf("\n-------------- ESTÁ ENTRE 20 E 90? --------------\n");

    printf("\n Digite um: ");
    scanf("%f", &n);

        if (n>20 && n<90)
        {
        printf("\n Está compreendido entre 20 e 90");
        printf("\n");
        }

        else printf("\n Não está compreendido entre 20 e 90");

        printf("\n");


return 0;

}
