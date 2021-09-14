#include<stdio.h>
#include<locale.h>
int main(){
	
	setlocale(LC_ALL, "Portuguese");
	float pesosaco,quantidadefornecida;
	float restodaracao;
	
	printf("Digite o peso do saco de ração e quantidade de ração fornecida: ");
	scanf("%f%f",&pesosaco,&quantidadefornecida);
	
	
	restodaracao= pesosaco - ((quantidadefornecida / 1000) * 2 * 5);;
	
	printf("Após cinco dias restara %.2f kg de ração",restodaracao);
	return 0;
}
	