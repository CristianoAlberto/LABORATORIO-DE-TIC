#include<stdio.h>
#include<locale.h>
int main(){
	
	setlocale(LC_ALL, "Portuguese");
	float imposto,lucrodistribuidor,precodefabrica,percentualdistribuidor,percentualimposto,precofinalveiculo;
	printf("Digite o preço de fábrica do veículo, o percentual de lucro do distribuidor e o percentual de imposto: \n");
	scanf("%f%f%f",&precodefabrica,&percentualdistribuidor,&percentualimposto);
	
	lucrodistribuidor=(precodefabrica*percentualdistribuidor)/100;
	imposto=(precodefabrica*percentualimposto)/100;
	
	precofinalveiculo=precodefabrica+lucrodistribuidor+imposto;
	
	printf("O valor correspondente ao lucro do distribuidor é %.1f\nO valor correspondente ao imposto é %.1f\nO preço final do carro é %.2f",lucrodistribuidor,imposto,precofinalveiculo);
	return 0;
}