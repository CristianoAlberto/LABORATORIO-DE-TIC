#include <stdio.h>
#include <locale.h>

int main(){
	int soma = 0;
	
	setlocale(LC_ALL, "portuguese");
	
	for(int i = 1; i <= 500; i++){
		if(i % 2 != 0)
			if(i % 3 == 0)
				soma += i;
	}
	
	printf("A soma dos �mpares que s�o m�ltiplos de 3 entre 1 e 500 �: %d\n", soma);
	
	return 0;
}