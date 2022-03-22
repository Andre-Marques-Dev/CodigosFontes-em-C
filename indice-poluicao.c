#include <stdio.h>

int main(){
	//Variáveis
	float indice;

	//Entradas
	printf("Informe o índice de poluição: ");
	fflush(stdout);
	scanf("%f", &indice);

	//Processamento
	if(indice >= 0.3 && indice < 0.4){
		printf("Atençaõ: Indústrias do 1° grupo devem suspender as atividades.");

	}else if (indice >= 0.4 && indice < 0.5){
		printf("Atenção: Indústrias do 1° e 2° grupos devem suspender as atividades.");
	}else if(indice >= 0.5){
		printf("Atenção: Todos os grupos devem suspender as atividades.");
	}

}
