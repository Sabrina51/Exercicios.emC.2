#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{

    setlocale(LC_ALL, "portuguese");

    float s;

    printf("\n------------------  SALÁRIO ------------------\n");

    printf("\n Digite o valor do salário: ");
    scanf("%f", &s);

    if (s<=600)
        {
        printf("\n Salário com aumento de 30%%: R$%.2f", 0.30*s+s);
        }

    else if ((s>600)  && (s<=1100))
        {
        printf("\n Salário com aumento de 25%%: R$%.2f", 0.25*s+s);
        }

    else if ((s>1.100)  && (s<=2400))
        {
        printf("\n Salário com aumento de 20%%: R$%.2f", 0.20*s+s);
        }

    else if ((s>2.400  && s<=3550))
        {
        printf("\n Salário com aumento de 15%%: R$%.2f", 0.15*s+s);
        }

    else
        {
        printf("\n Salário com aumento de 10%%: R$%.2f", 0.10*s+s);
        }

    printf("\n");

return 0;

}
