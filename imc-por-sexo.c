#include <stdio.h>
#include <ctype.h>

int main(){
	//Desclarando vari�veis
	float altura, peso_ideal;
	char sexo;

	//Entradas
	printf("Informe sua altura: ");
	fflush(stdout);
	scanf("%f", &altura);

	gets(stdin); //corrigir bug

	printf("Informe o sexo m/f: ");
	fflush(stdout);
	scanf("%c", &sexo);

	//Processamento
	if(tolower(sexo) == 'm'){
		peso_ideal = (72.7 * altura) - 58;
		printf("O seu peso ideal � %.2f", peso_ideal);
	}
	if(tolower(sexo) == 'f'){
		peso_ideal = (62.1 * altura) - 44.7;
		printf("O seu peso ideal � %.2f", peso_ideal);
	}
	if(tolower(sexo) != 'm' && tolower(sexo) != 'f'){
		printf("Sexo n�o reconhecido. \n");
	}
}
