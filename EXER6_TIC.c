#include<stdio.h>
#include<locale.h>
int main(){
	
	setlocale(LC_ALL, "Portuguese");
	int i,custoespetaculo=0,custoconvite=0,qt=0;
	
	printf("Digite o custo do espetaculo e do convite: ");
	scanf("%i %i",&custoespetaculo,&custoconvite);
	
	qt=custoespetaculo/custoconvite;
	
	printf("Ser� necessario vender %i convites para que pelo o custo do espet�culo seja alcan�ado",qt);
    return 0;
   }	
