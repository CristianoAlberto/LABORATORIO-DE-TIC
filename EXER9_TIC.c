#include<stdio.h>
#include<locale.h>
int main(){
	
	setlocale(LC_ALL, "Portuguese");
	float pesosaco,quantidadefornecida;
	float restodaracao;
	
	printf("Digite o peso do saco de ra��o e quantidade de ra��o fornecida: ");
	scanf("%f%f",&pesosaco,&quantidadefornecida);
	
	
	restodaracao= pesosaco - ((quantidadefornecida / 1000) * 2 * 5);;
	
	printf("Ap�s cinco dias restara %.2f kg de ra��o",restodaracao);
	return 0;
}
	