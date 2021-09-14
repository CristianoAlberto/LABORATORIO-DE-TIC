#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int n, unid = 0, dez = 0, cen = 0, mil = 0, mil_milhares = 0;
	
	printf("Digite um numero de 5 digitos:\n");
	scanf("%i",&n);
	
	unid = ((n / 1) % 10);
	dez = ((n / 10) % 10);
	cen = ((n / 100) % 10);
	mil = ((n / 1000) % 10);
	mil_milhares = ((n / 10000) % 10);
	
	if(mil_milhares == unid && mil == dez)
	{
		printf("\n O número é um Palindromo");
	}
	else
	{
		printf("\n O número não é um Palindromo");
	}

	return 0;
}
