#include <stdio.h>

int main(){
	//Declara��o de vari�veis
	int metros, centimetros;

	//Entradas
	printf("Informe o valor em metros: ");
	fflush(stdout);
	scanf("%d", &metros);

	//Processamentos
	centimetros = (metros * 100);

	//Sa�da
	printf("%d metros em cent�metros � %d", metros, centimetros);

}
