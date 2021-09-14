#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float salario,novosalario,percentagem,percentualdeaumento;
	
	printf("Digite o teu salário e o percentual de aumento: ");
	scanf("%f%f",&salario,&percentualdeaumento);
	
	percentagem=(salario*percentualdeaumento)/100;
	novosalario=percentagem+salario;
	system("cls");
	printf("O teu salário sofreu um aumento de %.0f%% e actualmente será: %.3f ",percentualdeaumento,novosalario);
	return 0;
}