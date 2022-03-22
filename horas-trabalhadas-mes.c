#include <stdio.h>

int main(){
	//Declaração de variáveis
	float valor_por_hora, salario;
	int horas_trabalhadas;

	//Entradas
	printf("Quantas horas você trabalhou neste mês?: ");
		fflush(stdout);
		scanf("%d", &horas_trabalhadas);

	printf("Qual valor você ganha por hora?: ");
	   fflush(stdout);
	   scanf("%f", &valor_por_hora);

	//Processamentos
	salario = (horas_trabalhadas * valor_por_hora);

	//Saída
	printf("Neste mês você vai receber R$ %.2f", salario);



}
