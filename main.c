#include <stdio.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char nome[50]="";
	char endereco[55]="" ;
	char telefone[20]= "" ;
	
	printf("Digite seu nome aqui:\n");
	fgets(nome,50,stdin);
	
	printf("Digite seu endereco aqui:\n");
	fgets(endereco,55,stdin);
	
	printf("Digite seu numero aqui:\n");
	fgets(telefone,20,stdin);
	
	printf("Seu nome é : %s\n",nome);
	printf("Seu endereco é : %s\n", endereco);
	printf("Seu numero é : %s\n", telefone);
	
	system("pause");
	return 0;
}
