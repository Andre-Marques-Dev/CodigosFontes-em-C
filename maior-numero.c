#include <stdio.h>

int main(){
	//Variáveis
	int n, maior = 0;

	//Entrada
	printf("Informe um número: ");
	fflush(stdout);
	scanf("%d", &n);

	//Processamento
	while(n != 0){
		if(n > maior){
			maior = n;
		}
	//Entradas
	printf("Informe um número: ");
	fflush(stdout);
	scanf("%d", &n);

	}
	printf("O maior número  é %d", maior);
}
