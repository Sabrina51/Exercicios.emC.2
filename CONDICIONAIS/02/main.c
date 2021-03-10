#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    float altura;
    int opcao;


    printf("\n Cálculo IMC\n");

    printf("\n Digite altura (m,cm): ");
    scanf("%f", &altura);


    printf("\n Escolha o sexo:");
    printf("\n 1 - FEMININO\n 2 - MASCULINO\n Opção: ");
    scanf("%d",&opcao);

    fflush(stdin);

    if (opcao==1)
        {
        printf("\n Peso Ideal - sexo feminino: %.3fKg", (62.1*altura) - 44.7);
        }

    else
    {
    printf("\n Peso Ideal - sexo masculino: %.3fKg",(72.7*altura) - 58);
    }


    printf("\n");

return 0;

}
