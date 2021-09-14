#include<stdio.h>
#include<locale.h>
int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float horastrabalhadas,salariominimo,salariobruto,imposto,valorhorastrabalhadas,salarioreceber;
	
	printf("Digite o número de horas trabalhadas e o salário minímo: ");
	scanf("%f%f",&horastrabalhadas,&salariominimo);
	
	valorhorastrabalhadas=salariominimo/2;
	salariobruto=valorhorastrabalhadas*horastrabalhadas;
	imposto=(salariobruto*3)/100;
	salarioreceber=salariobruto-imposto;
	
	printf("O salário a receber é: %.2f ",salarioreceber);
	return 0;
}