#include<stdio.h>
#include<locale.h>
int main()
{
	
	setlocale(LC_ALL, "Portuguese");
	float salariominimo,valordosalario,quant;

	printf("Digite o sal�rio minimo e o valor do sal�rio: ");
	scanf("%f%f",&salariominimo,&valordosalario);
	
	quant=valordosalario/salariominimo;
		
	if(quant==1)
		printf("O funcion�rio recebe %.0f vez o salario minimo",quant);
	else
		printf("O funcion�rio recebe %.0f vezes salarios minimos",quant);
	
	return 0;
}
	
	