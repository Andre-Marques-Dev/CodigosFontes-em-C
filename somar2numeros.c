#include <stdio.h>
// std = Standadrd (Padrão)
// io = input/output (Entrada/Saída)
int main(){
    // Declaração de variáveis
	int num1, num2, soma, multiplicacao;

	//Entradas
	 printf("Digite o primeiro número: ");
	 fflush(stdout);
	 scanf("%d", &num1);

	 printf("Digite o segundo número: ");
	 fflush(stdout);
	 scanf("%d", &num2);

	 //Processamentos
	  soma = num1 + num2;
	  multiplicacao = soma * num1;

	  //Saída
	  printf("O resultado da multiplicacao é %d", multiplicacao);
}
