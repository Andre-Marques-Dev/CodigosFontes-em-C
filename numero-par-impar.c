#include <stdio.h>

int main(){
	//Declara��o de vari�veis
	int numero, p = 0, i = 0;

	//Entradas
	printf("Informe um n�mero: ");
	fflush(stdout);
	scanf("%d", &numero);

	//Processamento
	if(numero % 2 == 0){
		p = numero;
	}else{
		i = numero;
	}
	printf("%d\n", p);
	printf("%d", i);

}
