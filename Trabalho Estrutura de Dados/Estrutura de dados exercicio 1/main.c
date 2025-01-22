#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

using namespace std;

struct playlist_musical {
	char musica[50], cantor[50];
	float tempo;
	struct playlist_musical* prox;
}; struct playlist_musical* inicio, * meio, * fim, * aux;


void inserirmusica()
{
	int c;
	playlist_musical* novo = (struct playlist_musical*) malloc(sizeof(struct playlist_musical));

	printf("Selecione a musica\n");
	fgets(novo->musica, 49, stdin);

	printf("Selecione o artista");
	fgets(novo->cantor, 49, stdin);

	printf("Duracao da musica");
	scanf_s("%f", &novo->tempo);

	while ((c = getchar()) != 'n' && c != EOF) {}
	novo->prox = NULL;
	if (inicio == NULL)
	{
		inicio = fim = novo;
	}
	else
	{
		fim->prox = novo;
		fim = novo;
	}
}
void limpar_lista()
{
	char ch;
	if (inicio == NULL)
	{
		printf("\nLista");
	}
	else
	{
		printf("s\n");
		ch = getchar();
		if (ch == 's');
		while (inicio != NULL)
		{
			aux = inicio;
			inicio = inicio->prox;
			free(aux); // limpar memoria
		}
		printf("\n Lista vazia");
	}

}

void visualizar_lista()
{
	aux = inicio;
	if (inicio == NULL)
	{
		printf("\n Lista Vazia");
	}
	else
	{
		while (aux != NULL)
		{
			printf("musica:%s", aux->musica);
			printf("cantor:%s", aux->cantor);
			printf("duracao: %f\n", aux->tempo);
			aux = aux->prox;
		}
	}

}

void procurar_musica()
{
	aux = inicio;
	if (inicio == NULL)
	{
		printf("\n Lista vazia");
	}
	else
	{
		char musica[50];
		printf("Digiete a faixa:");
		scanf_s("%s", &aux);

		while (aux != NULL)
		{
			if (musica == aux->musica)
			{
				printf("\n Musica %s encontrada\n", aux->musica);
				printf("musica: %s", aux->musica);
				printf("cantor:%s\n", aux->cantor);
				return;
			}
			else
			{
				aux = aux->prox;
			}
		}
		if (aux == NULL)
		{
			printf("\n Musica %s nao encontrada", musica);
		}
	} printf("\n");
}

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "");
	int opc, c;

	do
	{
		printf("1 Inserir Musica\n");
		printf("2 Procurar Musica\n");
		printf("3 Ver Lista\n");
		printf("4 Limpar Lista\n");
		printf("5 Sair\n");

		printf("Escolha uma opcao");
		scanf_s("%d", &opc);
		while ((c = getchar()) != '\n' && c != EOF); {}

		switch (opc)
		{
		case 1:
		{
			inserirmusica();
			system("pause");
			break;
		}
		case 2:
		{
			procurar_musica();
			system("pause");
			break;
		}
		case 3:
		{
			visualizar_lista();
			system("pause");
			break;
		}
		case 4:
		{
			limpar_lista();
			system("pause");
			break;
		}
		default:
			printf("Opcao nao existe");
			break;
		}
		system("cls");

	} while (opc != 5);

	return 0;
	system("PAUSE");
	return EXIT_SUCCESS;
}
