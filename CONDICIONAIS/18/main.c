#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    char nome[10];
    float nota[2];
    int nf;

    printf("\n---------------- APROVADO OU REPROVADO? ----------------\n");

    printf("\n Nome do aluno: "); fgets(nome, 11, stdin);
    printf("\n Digite a primeira nota: "); scanf("%f", &nota[0]);
    printf("\n Digite a segunda nota: "); scanf("%f", &nota[1]);
    printf("\n Digite a terceira nota: "); scanf("%f", &nota[2]);
    printf("\n Digite o número de faltas: "); scanf("%d",&nf);

    if(((nota[0]+nota[1]+nota[2])/3) >= 7 && nf > 0.25*80)
        {
        printf("\n Reprovado(a) por Falta");
        }

    else if(((nota[0]+nota[1]+nota[2])/3) < 7 && nf <= 0.25*80)
        {
        printf("\n Reprovado(a) por Média");
        }

    else
        {
        printf("\n Aprovado");
        }

    printf("\n\n");

    return 0;
}
