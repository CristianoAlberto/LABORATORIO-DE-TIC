#include <stdio.h>
#include <locale.h>

int main(){
	int numero, fat;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Informe um número: ");
	scanf("%d", &numero);
	
	fat = numero;
	
	printf("\n%d! = %d ", numero, numero);
	for(int i = numero - 1; i >= 1; i--){
		fat *= i;
		printf("x %d ", i);
	}
	
	printf("= %d\n", fat);
	
	return 0;
}