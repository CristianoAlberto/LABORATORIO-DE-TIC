#include <stdio.h>
#include <locale.h>

int main(){
	int i,num, somapares = 0, somaimpares = 0, quantpares = 0, quantimpares = 0;
	float mediapares, mediaimpares;
	
	setlocale(LC_ALL, "portuguese");
	
	for( i = 1; i <= 10; i++){
		printf("Digite o %d� n�mero: ", i);
		scanf("%i", &num);
		
		if(num % 2 == 0)
			somapares += i, quantpares++;
		
		else
		{
			somaimpares += i, quantimpares++;
		}
	}
	
	mediapares = (float) (somapares / quantpares);
	mediaimpares = (float) (somaimpares / quantimpares);
	
	printf("\nA m�dia dos pares �: %.2f\n", mediapares);
	printf("A m�dia dos �mpares �: %2.2f\n", mediaimpares); 
	
	return 0;
}