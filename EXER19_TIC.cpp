#include <stdio.h>

int main(){
	int numero1 = 0, numero2 = 1, fib;
	
	fib = numero1 + numero2; 
	
	printf("%d %d %d ", numero1, numero2, fib);
	
	for(int i = 4; i <= 20; i++){
		numero1 = numero2;
		numero2 = fib;
		fib = numero1 + numero2;
		
		printf("%d ", fib);
	}
	
	printf("\n");
	
	return 0;
}