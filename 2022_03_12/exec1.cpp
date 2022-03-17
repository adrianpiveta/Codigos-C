#include <stdio.h>

/*
int main (){
	float salario=1000;
	int ano;
	printf("Digite o ano atual : ");
	scanf("%d%*c", &ano);
	salario= salario * 1.015;
	for (int i=1; i<(ano-2016); i++){
		salario += salario*0.02;
	}
	printf("Salario: %.2f", salario);
}
*/

int main (){
	float salario=1000;
	int ano;
	salario = salario * 1.015;
	for (ano=2017; ano<2022; ano++){
		salario += salario*0.02;
	}
	printf("Salario: %.2f", salario);
}
