// variaveis são declaradas com DECLARE, são inseridas na função principal
// DECLARE X 
/*  float x;
	float x, y
	char [100] -> cadeira de caracteres, como se fosse String, máximo 100
*/

//importa biblioteca, a padrão é stdio.h
/*
Não existe booleano, considera como verdade qualquer coisa diferente de 0
*/
// case sensitive de maiusculo e minusculo
#include <stdio.h> // importa algumas funções de entrada e saída do compilador
#include <locale.h>
#define pi 3.14;
#define nome "vergaira";

void inteiro(){
	int a,b, soma;
	printf("Escreva a e b \n");
	scanf("%d%*c", &a); //atribui o scan de inteiro a A
	scanf("%d%*c", &b); //.........................
	soma= a+b;
	printf("Soma: %d",soma);
	
}

int main(){
	
	/*
	float raio , area;
	printf("Defina o raio \n");
	scanf("%d", &raio);
	area = raio * raio * pi;
	printf("area: %d \n", area);
	printf("Olá admirável mundo da programação \n");
	return 0;
	*/
	inteiro();
	
}



/*
Scanf é entrada de dados
scanf(%d%*c",&X); // d signidica inteiro
scanf(%f%*c",&Z); // f é de float (ou real)
scanf(%s%*c",&NOME); // cadeia de caracteres
scanf(%c%*c",&Y); //unico caractere

//%*c é opcional, ele limpa dados anteriormente digitados
// & significa o endereço, o e comercial diz que pega o endereço
//	 e grava naquele endereço da memória o que foi digitado

"%d% "*/


