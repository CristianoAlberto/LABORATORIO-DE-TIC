#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float salario,novosalario,percentagem;
	printf("Digite o teu salário: ");
	scanf("%f",&salario);
	
	percentagem=(salario*25)/100;
	novosalario=percentagem+salario;
	system("cls");
	printf("O teu salário sofreu um aumento de 25%% e actualmente será: %.3f ",novosalario);

	return 0;
}