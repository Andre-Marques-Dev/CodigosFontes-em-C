#include <stdio.h>

int main(){
	//Variáveis
	int numero, a, b;

	//Entradas
	printf("Informe um número: ");
	fflush(stdout);
	scanf("%d", &numero);

	//Processamento
	if(numero > 0){
		a = numero;
		printf("O número %d é positivo.", numero);
	}else{
		b = numero;
		printf("O número %d é negativo.", numero);
	}
}
