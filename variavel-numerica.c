#include <stdio.h>

int main(){
	//Declaração de variáveis
	int n;

	//Entrada
	printf("Informe um número: ");
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
