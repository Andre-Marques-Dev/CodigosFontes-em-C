#include <stdio.h>
// std = Standadrd (Padr�o)
// io = input/output (Entrada/Sa�da)
int main(){
    // Declara��o de vari�veis
	int num1, num2, soma, multiplicacao;

	//Entradas
	 printf("Digite o primeiro n�mero: ");
	 fflush(stdout);
	 scanf("%d", &num1);

	 printf("Digite o segundo n�mero: ");
	 fflush(stdout);
	 scanf("%d", &num2);

	 //Processamentos
	  soma = num1 + num2;
	  multiplicacao = soma * num1;

	  //Sa�da
	  printf("O resultado da multiplicacao � %d", multiplicacao);
}
