#include <stdio.h> // Bliblioteca de entrada e saida padrão C
#include<stdlib.h> // Bliblioteca padrão C é a que faz a alocação de memoria e controla os processos 

int main() // Para o código ser executado precisamos iniciar nosso codigo com a função main
{// utilizamos chaves para dar inicio ao código

	int x = 06; // int para valores inteiros o valor inteiro referente aos dois ultimos RU:2819506  do Aluno Jhonathan
	float y = 95.06; // float para valor real com ponto, valor referente aos quatro ultimos numeros do RU:2819506 do Aluno Jhonathan
	char z = 'J'; // char para demonstrar um caractere solicitado foi a primeira letra J

	int* pX = &x; // Utilizamos o asterisco * para indentificar que é um ponteiro este ponteiro indicara o valor da variavel inteira x=06 
	float* pY = &y; // Utilizamos o asterisco * para indentificar que é um ponteiro este ponteiro indicara o valor da variavel inteira y=95.06
	char* pZ = &z; // Utilizamos o asterisco * para  indentificar que é um ponteiro este ponteiro indicara o valor da variavel inteira z='J'

		printf ("Endereco x = %p - valor de x = %i\n", pX, *pX);
		printf ("Endereco y = %p - valor de x = %f\n", pY, *pY);
		printf ("Endereco z = %p - valor de z = %c\n", pZ, *pZ);
		//printf para imprimir na tela os endereços de memória e os valores referentes a cada uma das variaveis 

		system; ("pause"); // comando que pausa a mensagem na tela e solicita uma tecla para continuar 
		return 0; // para reiniciar sem erro

}// para finalizar o código.