#include <stdio.h>
#include <string.h>

int main(){
	//Vari�eis
	char nome[100], senha[100];

	//Entradas
	printf("Informe o nome: ");
	fflush(stdout);
	gets(nome);

	printf("Informe a senha: ");
	fflush(stdout);
	gets(senha);

	//Processamento
	while(!strcmp(nome, senha)){
	printf("Nomes de usu�rio e senha devem ser diferentes.\n");
	printf("Informe o nome: ");
	fflush(stdout);
	gets(nome);

	printf("Informe a senha: ");
	fflush(stdout);
	gets(senha);

	}
}
