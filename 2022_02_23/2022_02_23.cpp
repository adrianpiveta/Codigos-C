// variaveis s�o declaradas com DECLARE, s�o inseridas na fun��o principal
// DECLARE X 
/*  float x;
	float x, y
	char [100] -> cadeira de caracteres, como se fosse String, m�ximo 100
*/

//importa biblioteca, a padr�o � stdio.h
/*
N�o existe booleano, considera como verdade qualquer coisa diferente de 0
*/
// case sensitive de maiusculo e minusculo
#include <stdio.h> // importa algumas fun��es de entrada e sa�da do compilador
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
	printf("Ol� admir�vel mundo da programa��o \n");
	return 0;
	*/
	inteiro();
	
}



/*
Scanf � entrada de dados
scanf(%d%*c",&X); // d signidica inteiro
scanf(%f%*c",&Z); // f � de float (ou real)
scanf(%s%*c",&NOME); // cadeia de caracteres
scanf(%c%*c",&Y); //unico caractere

//%*c � opcional, ele limpa dados anteriormente digitados
// & significa o endere�o, o e comercial diz que pega o endere�o
//	 e grava naquele endere�o da mem�ria o que foi digitado

"%d% "*/


