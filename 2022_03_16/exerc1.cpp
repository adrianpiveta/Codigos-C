/*vetores são matrizes unidimensionais que possuem valores de mesmo tipo
tipos = float, char, int
*/
#include <stdio.h>

void media(){
	
	float medias[20], mediag=0;
	
	
	for(int i = 0; i<20; i++){
		printf("Digite a nota do %d aluno: ", i+1);
		scanf("%f%*c", &medias[i]);
	}
	
	for(int i=0; i<20; i++){
		mediag+=medias[i];
	}
	printf("\n Media geral %.2f", mediag/20);
}

void adicionaDobro(){
	float a[10], b[10];
	
	for(int i = 0; i<10; i++){
		printf("Digite o %d valor: ", i+1);
		scanf("%f%*c", &a[i]);
		b[i]=a[i]*2;
	}
	
	for(int i = 0; i<10; i++){
		printf("A,B  = %.2f | %.2f \n", a[i], b[i]);
	}
}



	int main(){
		//media();
		adicionaDobro();
		int vet[10];
		for(int i = 0 ; i<10; i++){
			printf("Digite o valor para a posicao %d : ", i);
			scanf("%d%*c", &vet[i]);
		}
		for(int i=0; i<10; i++){
			printf("Valor: %d \n", vet[i]);
		}
	
		return 0;
	}
