#include<stdio.h>
#include<locale.h>
int main(){
	
	setlocale(LC_ALL, "Portuguese");
	float imposto,lucrodistribuidor,precodefabrica,percentualdistribuidor,percentualimposto,precofinalveiculo;
	printf("Digite o pre�o de f�brica do ve�culo, o percentual de lucro do distribuidor e o percentual de imposto: \n");
	scanf("%f%f%f",&precodefabrica,&percentualdistribuidor,&percentualimposto);
	
	lucrodistribuidor=(precodefabrica*percentualdistribuidor)/100;
	imposto=(precodefabrica*percentualimposto)/100;
	
	precofinalveiculo=precodefabrica+lucrodistribuidor+imposto;
	
	printf("O valor correspondente ao lucro do distribuidor � %.1f\nO valor correspondente ao imposto � %.1f\nO pre�o final do carro � %.2f",lucrodistribuidor,imposto,precofinalveiculo);
	return 0;
}