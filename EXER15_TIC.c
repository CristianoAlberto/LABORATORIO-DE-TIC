#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int num,suc;

	while(num>=0){
	printf("Digite um n�mero: ");
	scanf("%i",&num);
	
	suc=num+1;
	if(suc>0)
	printf("O n�mero digitado � %i e o seu sucessor � %i\n\n",num,suc);
	else
	{
		printf("\nTERMINOU VOC� DIGITOU UM N�MERO NEGATIVO");
	}
}


	return 0;

}