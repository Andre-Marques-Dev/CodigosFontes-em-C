#include <stdio.h>

int main(){
	//Vari�veis
	int numero;

	//Entradas
	printf("Informe um n�mero entre 1 e 10: ");
	fflush(stdout);
	scanf("%d", &numero);

	//Processamento
	while(numero < 1 || numero > 10){
	printf("Informe um n�mero entre 1 e 10: ");
	fflush(stdout);
	scanf("%d", &numero);
	}
    for( int i = 1; i <= 10; i++){
    	printf("%d x %d = %d\n", numero, i, (numero * i));
    }
}
