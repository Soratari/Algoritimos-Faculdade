#include <stdio.h> // Biblioteca de entreada e saida padr�o C
#include <stdlib.h> // Biblioteca padr�o C ela quem faz a aloca��o de mem�ria e controla os processsos

int main(void) // Para o Codigo ser executado precisamos iniciar nosso codigo com a fun��o main
{// Utilizamos chaves para dar inicio ao c�digo
	struct dados // � utilizado para criar variaveis diferentes dentro do c�digo
	{
		char *nome; // Declara��o da variavel 
		int ru;// Declara��o da variavei 

	}; 
	typedef struct dados aluno; // nome da variavel
					aluno a1;
					aluno *a = &a1;
					a->nome = (char*)malloc(sizeof(char) * 60);
	
		printf("Digite o nome do aluno:"); // mensagem impressa na tela 

		fgets(a->nome, 60, stdin); // utlizado para fazer a captura dos caracteres da variavel (aluno)

		printf("\n Digite o RU:"); // mensagem impressa na tela 
		scanf_s("%d", &a->ru); // fazendo a leitura dos dados de etntrada 

		printf("\n\n Resumo dos Dados \n\n"); // mensagem impressa na tela 
		printf(" Nome do Aluno:%s", a->nome); // mensagem impressa na tela 
		printf("\n RU do Aluno:%d \n", a->ru); // mensagem impressa na tela 

system("pause"); // comando que pausa a mensagem na tela e solicita que aperte uma tecla para continuar
return 0; // comando para reiniciar a opre��o

}