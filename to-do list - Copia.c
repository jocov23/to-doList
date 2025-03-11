#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
struct tarefa
{
	char nome[100];
	char motivo[100];
	int feito;
};

//FUNCÃO ADICIONAR TAREFA
void addtarefa(struct tarefa ta[6][100], int contarefa, int qnt[6]) 
{
system ("cls");
fflush (stdin);
int i=contarefa;
int i2;
printf ("digite a descricao da lista: ");
gets((ta[i][0]).motivo);
printf ("digite quantas tarefas voce quer adicionar: ");
scanf ("%d", &qnt[contarefa]);
printf ("digite as tarefas que voce quer adicionar:  ");
printf ("\n");
for (i2=0;i2<qnt[contarefa]+1;i2++)
{
    printf ("%d.: ", i2);
    gets ((ta[i][i2]).nome);
}
for (i2=0;i2<qnt[contarefa]+1;i2++)
{
    printf ("\n%d.: %s ", i2, ta[i][i2].nome);
    
}
printf ("\ndescricao: %s", ta[i][0].motivo);
printf ("%d", contarefa);

};
//FUNÇÃO MOSTRAR TAREFA
void seetarefa(struct tarefa ta[6][100],int contarefa, int qnt[6])
{
system ("cls");
fflush (stdin);
int i;
int opcao;
printf ("qual lista deseja ver?");
for (i=0;i<=contarefa;i++)
{
printf("\n Lista %d", i+1);
}
printf ("\n");
scanf ("%d", &opcao);
	for (i=0;i<qnt[opcao]+1;i++)
	{
	printf ("\n%d. %s", i, ta[opcao][i].nome );
	}
	printf("\n\nDescricao: %s", ta[opcao][0].motivo);
};


//INICIO
int main ()
{
int continuar = 0;
int cont = 1;
do
{
system ("cls");
int i=0;
int i2=0;
int opcao;
struct tarefa t[6][100];
char siorno;
int qnt[6];

for (i=0;i>5;i++)
{
  for (i2=0;i2<100;i2++)
  {  
	strcpy(t[i][i2].nome, "NULL");
  }
  strcpy(t[i][0].motivo, "NULL");
}

printf ("escolha o que voce quer fazer: ");
printf ("\n1.mostrar listas");
printf ("\n2.adicionar listas");
printf ("\n");
scanf ("%d", &opcao);

switch (opcao)
{
	case 1:
		seetarefa(t, cont, qnt);
		break;
	case 2:
		addtarefa(t, cont, qnt);
		cont= cont + 1;
		break;
}
printf ("\n\ndeseja voltar? (S/N): ");
		scanf ("%c", &siorno);
		if (siorno == 'S' || siorno == 's')
	    {
		continuar = 1;
	    }
		else if (siorno == 'N' || siorno == 'n')
		{
		continuar = 2;
	    }
		else 
		{
		printf ("Invalido. Digite sua resposta novamente: ");
		fflush (stdin);
		scanf ("%c", &siorno);
	    }
} while (continuar == 1);
};
