#include<stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
	float altura,cont,menoraltura,maioraltura;
	
	menoraltura=0;
	maioraltura=0;
		
    printf("Digite uma altura: ");
	scanf("%f",&altura);	
	while(cont <= 15){
		printf("Digite uma altura: ");
	    scanf("%f",&altura);
		
		if(cont == 1)
			menoraltura = altura, maioraltura = altura;
		
		else{
			if(altura < menoraltura)
				menoraltura = altura;
		
			if(altura > maioraltura)
				maioraltura = altura;
		}
		
		cont++;
	}
		
          printf("A maior altura é: %.1f\nA menor altura é: %.1f",maioraltura,menoraltura);	
	
	return 0;
}
