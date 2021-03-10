#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");


	int  l1, l2, l3;

	printf("\n Digite as medidas dos lados\n");

	printf("\n Medida do lado 1: ");
	scanf("%d", &l1);
	printf("\n Medida do lado 2: ");
	scanf("%d", &l2);
	printf("\n Medida do lado 3: ");
	scanf("%d", &l3);

	if ((l1==l2 && l1==l3 && l2==l1 && l2==l3 && l3==l1 && l3==l2))
	{
	printf("\n Triângulo Equilatero");
	}

	else if ((l1==l2 && l1!=l3) || (l1!=l2 && l2==l3) || (l1!=l2 && l1==l3))
	{
	printf("\n Triângulo Isóscele");
	}

	else
	{
	printf("\n Triângulo Escaleno");
	}

	printf("\n");

return 0;

}
