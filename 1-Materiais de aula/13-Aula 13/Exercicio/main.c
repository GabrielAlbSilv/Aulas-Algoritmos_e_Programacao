#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <locale.h>
int main() {
	system("cls");
	setlocale(LC_ALL,"");
	int i=0;
	float val, acum=0, acum2=0; //sempre iniciar a variável acumladora 
	for (i=0; i<5;i++){
		printf("\nPor favor, insira um valor: ");
		scanf("%f",&val);
		acum = acum + val;
		if (val < 50){
			acum2 = acum2 + val;
		}
		 //acumalador somando todos os valores inseridos
	}
	printf("\nSoma dos valores menores que 50: %.2f", acum2);
	printf("\nMédia de todos os valores: %.2f", acum/i);
	return 0;
}
