#include<stdio.h>
#include<locale.h>
int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float salariominimo,quantidadequilowatt,quilowatt,valoraserpago,valoraserpago2,percentagem;
	
	printf("Digite o sal�rio min�mo e a quantidade de quilowatt consumida por uma resid�ncia: ");
	scanf("%f%f",&salariominimo,&quantidadequilowatt);
	
	quilowatt=salariominimo * 0.2;
	valoraserpago= quantidadequilowatt* quilowatt;
	percentagem=(valoraserpago*15)/100;
	valoraserpago2=valoraserpago-percentagem;
	
	printf("O valor de cada quilowatt � %.2f\nO valor a ser pago por essa resid�ncia � %.2f\nO valor a ser pago por essa resid�ncia com desconto de 15%% � %.2f",quilowatt,valoraserpago,valoraserpago2);
	return 0;
}
	