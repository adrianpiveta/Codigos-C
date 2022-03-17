#include <stdio.h>

int main(){
	int i, soma=0, cont, opcao=0, num1, num2;
	float op=0;
	for(i=1; i<10; i++){
		soma += i;
	}
	printf("Resultado da soma: %d \n",soma);
	
	soma=0;
	i=1;
	while(i<100){
		soma = soma+i;
		i++;	
	}
	printf("Resultado da soma: %d \n",soma);
	soma=0;
	i=1;
	// do while sempre roda uma vez
	do{
		soma=soma+i;
		i++;
	} while(i<999);
	printf("Resultado da soma: %d \n",soma);
	
	
	do{
		printf("Primeiro numero : ");
		scanf("%d%*c", &num1);
		printf("Segundo numero : ");
		scanf("%d%*c", &num2);
		printf("\n Digite uma opcao: ");
		scanf("%d%*c", &opcao);
		
		switch(opcao){
			case 1:
				op=num1+num2;
				printf("Resultado soma: %f \n", op);
				
				break;
			
			case 2:
				op=num1/num2;
				printf("Resultado divisao: %f \n", op);
				break;
			
			case 3:
				op=num1*num2;
				printf("Resultado multiplicação: %f \n", op);
				break;
			case 4: 
				break;
			default: printf("operacao invalida \n");
		}
	} while(opcao!=4);
	
	return 0;
}
