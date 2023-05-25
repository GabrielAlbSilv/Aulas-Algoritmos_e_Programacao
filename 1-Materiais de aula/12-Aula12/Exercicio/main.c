#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <locale.h>

int main() {
	system("cls");
	setlocale(LC_ALL,"");
	int i, cont=0;
	float alt, med;
	for(i=0;i<10;i++){
		printf("\nUsuário: %d", i+1);
		printf("\nInsira a sua altura: ");
		scanf("%f",&alt);
		if(alt > 0){
				if(alt >= 1.60){
				cont++;
			}	
		}else{
			printf("\nAltura inválida, insira novamente! \n \n");
			i--;
		}
}
	printf("\n %d usuários são maiores que 1,60",cont);
	return 0;
}
