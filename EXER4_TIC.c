#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float salario,novosalario,percentagem;
	printf("Digite o teu sal�rio: ");
	scanf("%f",&salario);
	
	percentagem=(salario*25)/100;
	novosalario=percentagem+salario;
	system("cls");
	printf("O teu sal�rio sofreu um aumento de 25%% e actualmente ser�: %.3f ",novosalario);

	return 0;
}