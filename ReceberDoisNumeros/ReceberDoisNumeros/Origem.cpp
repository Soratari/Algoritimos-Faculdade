#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n1, n2;

	printf("Digite o primeiro numero:");
	scanf_s("%d", &n1);
	printf("Digite o segundo numero:");
	scanf_s("%d", &n2);

	if (n1 > n2) {


		printf("\n O numero da variavel n1 é maior que o numero da variavel n2\n\n");

	}
	else {
		printf("\n O numero da variavel n1 he maior que o numero da variavel n2\n\n");


	}


	printf("Os numeros digitados sao: %d e %d\n", n1, n2);

	system("pause");

	return 0;
}