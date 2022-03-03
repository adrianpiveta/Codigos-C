#include<stdio.h>
# define pi = 3.14; //declara constantes com define
int main(){
	int x;
	printf("Digite um numero \n");
	scanf("%d%*c", &x);
	if(x%2==0){
		printf("o numero e par");
	}
	else
		printf("o numero e impar");
	getchar();
	return 0;
}
