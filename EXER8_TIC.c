#include<stdio.h>
#include<locale.h>
int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float horastrabalhadas,salariominimo,salariobruto,imposto,valorhorastrabalhadas,salarioreceber;
	
	printf("Digite o n�mero de horas trabalhadas e o sal�rio min�mo: ");
	scanf("%f%f",&horastrabalhadas,&salariominimo);
	
	valorhorastrabalhadas=salariominimo/2;
	salariobruto=valorhorastrabalhadas*horastrabalhadas;
	imposto=(salariobruto*3)/100;
	salarioreceber=salariobruto-imposto;
	
	printf("O sal�rio a receber �: %.2f ",salarioreceber);
	return 0;
}