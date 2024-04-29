#include <stdio.h>
#include <stdlib.h>

int main () {
	char operacao;
	int n1,n2, total;
	char continuar;

	printf ("========== calculadora ==========\n");

	while (continuar == 's' || continuar == 'S'); {
		printf ("Digite a operação desejada: (+,-,*,/)");
		scanf ("%c", &operacao);
		printf ("Digite o primeiro valor:");
		scanf ("%d", &n1);
		printf ("Digire o segundo número:");
		scanf ("%d", &n2);
		

		switch (operacao) {
			case '+':
				total = n1+n2;
				printf ("Resultado: %d\n", total);
				break;
			case '-':
				total = n1-n2;
				printf ("Resultado: %d\n", total);
				break;
			case '*':
				total = n1*n2;
				printf("Resultado: %d\n", total);
			case '/':
				if (n2!=0) {
					total = n1/n2;
						printf("Resultado: %d\n", total);
				}
				else {
					printf ("Erro: divisão por zero\n"); }
				break;
			default:
				printf ("Operação inválida\n"); }

		printf ("Deseja prosseguir (s/n)?");
		scanf ("%c", &continuar);
		
	}

	

	return 0;

}
