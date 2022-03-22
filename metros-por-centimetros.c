#include <stdio.h>

int main(){
	//Declaração de variáveis
	int metros, centimetros;

	//Entradas
	printf("Informe o valor em metros: ");
	fflush(stdout);
	scanf("%d", &metros);

	//Processamentos
	centimetros = (metros * 100);

	//Saída
	printf("%d metros em centímetros é %d", metros, centimetros);

}
