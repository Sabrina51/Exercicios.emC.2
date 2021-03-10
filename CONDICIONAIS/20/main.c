#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    char senha[15];

    printf("\n---------------- SENHA ----------------\n");

    printf("\n Digite sua senha: ");
    scanf("%s",senha);
    fflush(stdin);

    if (strcmp(senha,"batatafrita")==0)
        {
        printf("\n Acesso permitido");
        }

     else
        {
        printf("\n Você não tem acesso ao sistema");
        }

    printf("\n\n");

    return 0;
}
