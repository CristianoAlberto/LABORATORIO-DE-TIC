#include<stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");

	float lado1, lado2, area;

	printf("Digite o comprimento dos lados do quadrado: ");
	scanf("%f%f", &lado1, &lado2);

	area = lado1 * lado2;

	printf("A �rea do quadrado �: %.1f", area);
	return 0;
}
