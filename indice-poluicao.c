#include <stdio.h>

int main(){
	//Vari�veis
	float indice;

	//Entradas
	printf("Informe o �ndice de polui��o: ");
	fflush(stdout);
	scanf("%f", &indice);

	//Processamento
	if(indice >= 0.3 && indice < 0.4){
		printf("Aten�a�: Ind�strias do 1� grupo devem suspender as atividades.");

	}else if (indice >= 0.4 && indice < 0.5){
		printf("Aten��o: Ind�strias do 1� e 2� grupos devem suspender as atividades.");
	}else if(indice >= 0.5){
		printf("Aten��o: Todos os grupos devem suspender as atividades.");
	}

}
