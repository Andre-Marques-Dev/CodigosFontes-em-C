#include <stdio.h>

int main(){
	// Declaração de variáveis
	int num1, num2, soma;

    //Entradas
	printf("Informe o primeiro número: ");
	fflush(stdout);
	scanf("%d", &num1);

	printf("Informe o segundo número: ");
	fflush(stdout);
	scanf("%d", &num2);

    //Processamentos
	soma = num1 + num2;

	//Saída
	printf("O resultado da soma é: %d", soma);
}
