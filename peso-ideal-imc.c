#include <stdio.h>

int main(){
	//Declaração de variáveis
	float altura, peso_ideal;

	//Entradas
	printf("Qual a sua altura: ");
	fflush(stdout);
	scanf("%f", &altura);

	//Processamento
	peso_ideal = (72.7 * altura) - 58;

	//Saída
	printf("O seu peso ideal seria: %.2f", peso_ideal);

}
