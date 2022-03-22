#include <stdio.h>

int main(){
	//Variáveis
	float p, m;
	char e[8] = "excesso"; // '\0'

	//Entradas
	printf("Informe o peso dos peixes: ");
	fflush(stdout);
	scanf("%f", &p);

	//Processamento
	if(p > 50){
		m = (p - 50) * 4.00;

		//Saídas
		printf("Você deverá pagar R$ %.2f em multas.", m);
	}else{
		m = 0;
		e[0] = 0;
		printf("Multas: %.2f\n", m);
		printf("Excesso: %d", e[0]);
	}


}
