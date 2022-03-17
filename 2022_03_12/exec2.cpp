#include <stdio.h>

int main(){
	int N, count, entrada, fatorial=1, count2;
	printf("Digite quantos numeros devem ser lidos: ");
	scanf("%d%*c", &N);
	for(count=1; count<N+1; count++){
		printf("Digite o %d mo numero \n", count);
		scanf("%d%*c",&entrada);
		for(count2=1;entrada>=count2; count2++){
			fatorial=fatorial*count2;
		}
		printf("fatorial de %d = %d \n",entrada, fatorial);
		fatorial=1;
	}
}

