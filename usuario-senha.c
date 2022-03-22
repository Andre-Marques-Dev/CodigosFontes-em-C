#include <stdio.h>
#include <string.h>

int main(){
	//Variáeis
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
	printf("Nomes de usuário e senha devem ser diferentes.\n");
	printf("Informe o nome: ");
	fflush(stdout);
	gets(nome);

	printf("Informe a senha: ");
	fflush(stdout);
	gets(senha);

	}
}
