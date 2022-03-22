#include <stdio.h>

int main(){
	//Declaração de variáveis
	int quantidade_minima, quantidade_maxima;
	float estoque_medio;

	//Entradas
	printf("Informe a quantidade mínima: ");
	fflush(stdout);
	scanf("%d", &quantidade_minima);

	printf("Informe a quantidade máxima: ");
	fflush(stdout);
	scanf("%d", &quantidade_maxima);

	//Processamento
	estoque_medio = (quantidade_minima + quantidade_maxima) / 2;

	//Saída
	printf("O estoque médio é: %.2f", estoque_medio);
}
