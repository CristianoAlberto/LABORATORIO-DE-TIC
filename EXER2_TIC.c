#include<stdio.h>
#include<locale.h>
int main()
{
	
	setlocale(LC_ALL, "Portuguese");
	float salariominimo,valordosalario,quant;

	printf("Digite o salário minimo e o valor do salário: ");
	scanf("%f%f",&salariominimo,&valordosalario);
	
	quant=valordosalario/salariominimo;
		
	if(quant==1)
		printf("O funcionário recebe %.0f vez o salario minimo",quant);
	else
		printf("O funcionário recebe %.0f vezes salarios minimos",quant);
	
	return 0;
}
	
	