#include <stdio.h>

int main(){
	//Vari�veis
	int n, maior = 0;

	//Entrada
	printf("Informe um n�mero: ");
	fflush(stdout);
	scanf("%d", &n);

	//Processamento
	while(n != 0){
		if(n > maior){
			maior = n;
		}
	//Entradas
	printf("Informe um n�mero: ");
	fflush(stdout);
	scanf("%d", &n);

	}
	printf("O maior n�mero  � %d", maior);
}
