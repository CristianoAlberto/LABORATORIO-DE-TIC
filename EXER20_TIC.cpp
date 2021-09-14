#include <stdio.h>
#include <locale.h>

int main(){
	float alturaChico = 1.50, alturaJuca = 1.10;
	int i;
	
	setlocale(LC_ALL, "portuguese");
	
	for(i = 1; alturaChico > alturaJuca; i++)
		alturaChico += 0.02, alturaJuca += 0.03;
	
	
	printf("São necessários %d anos para que O Juca seja maior que Chico\n", i);
	
	return 0;
}