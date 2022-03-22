#include <stdio.h>

int main(){
	//Variáveis
	int vetor1[10], vetor2[10], soma[10];

	//Entrada
	for(int i  = 0; i < 10; i++){
		printf("Informe o valor para o primeiro vetor: ");
		fflush(stdout);
		scanf("%d", &vetor1[i]);

		printf("Informe o valor para o segundo vetor: ");
		fflush(stdout);
		scanf("%d", &vetor2[i]);

		//Processamento
		soma[i] = vetor1[i] + vetor2[i];
	}
	//Processamento
	for(int i  = 0; i < 10; i++){
		printf("%d\n", soma[i]);
	}
}
