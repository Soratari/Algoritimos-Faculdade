#include<stdio.h> // Biblioteca de entrada e saida padr�o C
#include<stdlib.h> // Biblioteca pad�o C ela quem faz a aloca��o de mem�ria e controla os processos

void maior(int* x, int* y);// void inicial para ter o retorno do ponteiro maior
int main() // Para o codigo ser executado precisamos iniciar nosso codigo com a fun��o main
{// Utilizamos chaves para dar in�cio ao c�digo
	int ru, ru2, * r1, * r2; // Declara��o das vari�veis
		
	printf(" Digite seu RU, e precione a tecla ENTER:"); // printf oara imprimir na tela os endere�os de mem�ria e os valores de cada uma das vari�veis
	scanf_s("%d", &ru);  // fazendo a leitura dos primeiros dados de entrada
	printf("\n\n"); //pulando duas linhas
	printf("Digite os segundo RU, e precione a tecla ENTER:"); // mesma fun��o descrita na linha 9 
	scanf_s("%d", &ru2); // Fazendo a leitura do segundo codigo

	r1 = &ru; // declara��o do primeiro ponteiro
	r2 = &ru2; // declara��o do segundo ponteiro

	printf("\n Seu RU: %d", *r1); // mensagem impressa na tela com indica��o do ponteiro 1
	printf("\n Segundo RU: %d\n\n",*r2); // mensagem impressa na tela com indica��o do ponteiro 2
	
	maior(&ru, &ru2); // retorno da maior vari�vel

	system("pause"); // comando que pausa a mensagem na tela e solicita que aperte uma tecla para continuar 
	return 0; // comando para reiniar a opera��o

}// para finalizar o codigo

void maior(int* x, int* y) { // void inicial para ter o retorno do ponteiro maior
	if (*x > * y) // estar� trazendo o valor maior 
	{
		printf("RU maior E :%d\n", *x); // se caso a variavel for maior vai me trazer o valor de x
	}
	else
	{
		printf("RU maior E: %d\n", *y); // se caso a varivel for maior vai me trazer o valor de y
	} // if_else para determinar qual vai ser o maior RU
}