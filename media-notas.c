#include <stdio.h>

int main(){

	int nota1, nota2, nota3, nota4, media_nota;

	printf("Informe a nota da prova 1:");
	fflush(stdout);
	scanf("%d", &nota1);

	printf("Informe a nota da prova 2:");
	fflush(stdout);
	scanf("%d", &nota2);

	printf("Informe a nota da prova 3:");
	fflush(stdout);
	scanf("%d", &nota3);

	printf("Informe a nota da prova 4:");
	fflush(stdout);
	scanf("%d", &nota4);

	media_nota = (nota1 + nota2 + nota3 + nota4) / 4;

	printf("A média das notas do semestre é %d", media_nota);
}
