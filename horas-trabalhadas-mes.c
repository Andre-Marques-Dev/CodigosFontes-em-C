#include <stdio.h>

int main(){
	//Declara��o de vari�veis
	float valor_por_hora, salario;
	int horas_trabalhadas;

	//Entradas
	printf("Quantas horas voc� trabalhou neste m�s?: ");
		fflush(stdout);
		scanf("%d", &horas_trabalhadas);

	printf("Qual valor voc� ganha por hora?: ");
	   fflush(stdout);
	   scanf("%f", &valor_por_hora);

	//Processamentos
	salario = (horas_trabalhadas * valor_por_hora);

	//Sa�da
	printf("Neste m�s voc� vai receber R$ %.2f", salario);



}
