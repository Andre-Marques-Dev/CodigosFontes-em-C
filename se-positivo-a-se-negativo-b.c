#include <stdio.h>

int main(){
	//Vari�veis
	int numero, a, b;

	//Entradas
	printf("Informe um n�mero: ");
	fflush(stdout);
	scanf("%d", &numero);

	//Processamento
	if(numero > 0){
		a = numero;
		printf("O n�mero %d � positivo.", numero);
	}else{
		b = numero;
		printf("O n�mero %d � negativo.", numero);
	}
}
