#include <stdio.h> // Biblioteca de entreada e saida padrão C
#include <stdlib.h> // Biblioteca padrão C ela quem faz a alocação de memória e controla os processsos

int main(void) // Para o Codigo ser executado precisamos iniciar nosso codigo com a função main
{// Utilizamos chaves para dar inicio ao código
	struct dados // É utilizado para criar variaveis diferentes dentro do código
	{
		char *nome; // Declaração da variavel 
		int ru;// Declaração da variavei 

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
return 0; // comando para reiniciar a opreção

}