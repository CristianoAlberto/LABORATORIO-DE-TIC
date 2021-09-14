#include<stdio.h>
#include<locale.h>
int main(){
	
	setlocale(LC_ALL, "Portuguese");
	int i,custoespetaculo=0,custoconvite=0,qt=0;
	
	printf("Digite o custo do espetaculo e do convite: ");
	scanf("%i %i",&custoespetaculo,&custoconvite);
	
	qt=custoespetaculo/custoconvite;
	
	printf("Será necessario vender %i convites para que pelo o custo do espetáculo seja alcançado",qt);
    return 0;
   }	
