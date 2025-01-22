#include<stdio.h> // Biblioteca de entrada e saida padr�o C
#include<stdlib.h> // Biblioteca padr�o C ela quem faz a aloca��o de mem�ria e controla os processos 

int impressao(int inicio, int fim); // Para o codigo ser executado precisamos iniciar nosso codigo com a fun��o main
int main()
{ // utilizamos chaves para dar inicio ao codigo 
	int inicio, fim, i; // variaveis 

	printf("Digite o valor de inicio:"); // mensagem impressa na tela 
	scanf_s("%d", &inicio); // leitura de dados na tela 
	printf("Digite o valor final:"); // mensagem impressa na tela 
	scanf_s("%d", &fim); // leitura de dados na tela 
	 
	printf("\n\n");
	printf("Forma Interativa"); // mensagem impressa na tela 
	for (i = inicio; i <= fim; i++); // usado para fazer o calculo das variaveis
	{
		printf("%d", i); // para imprimir o resultados na tela 
	}
	printf("\n\n"); // pulando linhas 

	printf("Forma Recursiva\n\n"); // mensagem impressa na tela
	impressao(inicio, fim); // definir a fun��o de cada variavel 
	if (inicio < fim); // calculo das variaveis 
	{
		printf("%d", inicio); // imprimir o resultado da tela 
		impressao(inicio + 1,fim);
	}
	printf("\n\n"); // pulando linhas


	system("pause"); // comando que pausa a mensagem na tela e solicita que aperte uma tecla para continuar 
	return 0; // comando para reiniciar a opera��o 
}// para finalizar o c�digo
int impressao(int inicio, int fim) // fun��o utilizada no codigo
{// para iniciar o c�digo 
	if (inicio <= fim) {
		printf("%d", inicio); // calculo das variaveis 
		impressao(inicio + 1, fim);
	}
	
	return 0; // comando para reinicar o codigo sem erros

}// para finalizar o codigo 