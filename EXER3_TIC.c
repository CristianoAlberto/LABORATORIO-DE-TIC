#include<stdio.h>
#include<locale.h>
int main(){
	
	setlocale(LC_ALL, "Portuguese");
	int idade,anonascimento,ano2050,anoactual;
	
	printf("Digite o teu ano de nascimento e o ano actual: ");
	scanf("%i%i", &anonascimento,&anoactual);
	
	idade=anoactual-anonascimento;
	ano2050=2050-anonascimento;
	
	printf("Você tem %i anos de idade e em 2050 terás %i anos de idade",idade,ano2050);
	
	return 0;
}