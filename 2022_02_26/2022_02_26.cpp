/*retomada, sobre entrada
// %*c esvazia o buffer depois da atribuição de conteúdo

 saída de dados é com o printf

int a, b, soma;
	double ab;
	ab = 550 % 2;
	printf("Ola usuario, digite A e B \n");
	scanf("%d%*c", &a);
	// %d é de inteiro %*c é para esvaziar o buffer
	scanf("%d%*c", &b);
	soma = a + b;
	printf("Soma: %d \n",soma);

*/
#include <stdio.h>
#include <math.h>


int dataNascimento(){
	int dia, mes, ano;
	printf("Digite dia: \n");
	scanf("%d%*c", &dia);
	printf("Digite mes: \n");
	scanf("%d%*c", &mes);
	printf("Digite ano: \n");
	scanf("%d%*c", &ano);
	printf("data: %d / %d / %d \n", dia, mes, ano);
	return dia;
}

float celsiusFahrenheit(){
	float temperatura, saida;
	printf("escreva temperatura \n");
	scanf("%f",&temperatura);
	saida = ((temperatura*1.8) + 32);
	printf("Hoje faz %f Fahrenheit",saida);
	return saida;
}

/*anotacao dentro main
	
	printf("Raiz: %f \n", sqrt(soma));
	printf("Absoluto: %d \n", abs(-10));
	printf("%f \n",ab);
	//int data=  dataNascimento();
	//int temp=celsiusFahrenheit();
	printf("%f",celsiusFahrenheit());
*/
main(){
	

	//exercicio 1
	int soma, a, b, c, d;
	printf("Numero 1: \n");
	scanf("%d%*c", &a);
	printf("Numero 2: \n");
	scanf("%d%*c", &b);
	printf("Numero 3: \n");
	scanf("%d%*c", &c);
	printf("Numero 4: \n");
	scanf("%d%*c", &d);
	soma=(a+b+c+d);
	printf("Soma: %d \n", soma);	
}





/*
operador de saida, utilizamos %x.xf   na qual x são as quantidades de casas que desejamos
	o primeiro x define a quantidade de caracteres que existirão, mesmo que não tenha valores
	ele ficará com espaço vazio*/
/*
\t dá um espaço no print
em um print, podemos escrever
em um print de data, exemplo:
printf("dia de ",%d,"/","%d","/","%d", dia, mes ano);
na qual dia, mes e ano são variáveis
*/

