#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int num,suc;

	while(num>=0){
	printf("Digite um número: ");
	scanf("%i",&num);
	
	suc=num+1;
	if(suc>0)
	printf("O número digitado é %i e o seu sucessor é %i\n\n",num,suc);
	else
	{
		printf("\nTERMINOU VOCÊ DIGITOU UM NÚMERO NEGATIVO");
	}
}


	return 0;

}