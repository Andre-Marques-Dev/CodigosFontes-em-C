#include <stdio.h>

int main(){
	//Declara��o de vari�veis
	int n;

	//Entrada
	printf("Informe um n�mero: ");
	fflush(stdout);
	scanf("%d", &n);

	//Processamento
	if(n > 100){
		printf("%d", n);
	}else{
		n = 0;
		printf("%d", n);
	}

}
