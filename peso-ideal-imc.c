#include <stdio.h>

int main(){
	//Declara��o de vari�veis
	float altura, peso_ideal;

	//Entradas
	printf("Qual a sua altura: ");
	fflush(stdout);
	scanf("%f", &altura);

	//Processamento
	peso_ideal = (72.7 * altura) - 58;

	//Sa�da
	printf("O seu peso ideal seria: %.2f", peso_ideal);

}
