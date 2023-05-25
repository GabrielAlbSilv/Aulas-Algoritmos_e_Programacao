#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h> //Biblioteca para caracteres
#include <locale.h>

int main() {
	system("cls");
	setlocale(LC_ALL,"");
	float n1, n2;
	char op;
	printf("Calculadora\n");
	scanf("%f %c%f",&n1,&op,&n2);
	return 0;
}
