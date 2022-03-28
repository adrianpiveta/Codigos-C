#include <stdio.h>

int main(){
	int inteiros[2][4];
	int entre1020=0, pares=0, contpares=0;
	float mediaPares;
	
	for(int linha=0; linha<2; linha++){
		for(int coluna=0; coluna<4; coluna++){
			printf("Digite o valor posicao [%d][%d]",linha+1, coluna+1);
			scanf("%d%*c", &inteiros[linha][coluna]);
		}
	}
	for(int linha=0; linha<2; linha++){
		for(int coluna=0; coluna<4; coluna++){
			if(inteiros[linha][coluna]>=10 && inteiros[linha][coluna]<=20)
				entre1020++;			
			if(inteiros[linha][coluna]%2==0){
				pares+=inteiros[linha][coluna];
				contpares++;
			}
		}
	}
	mediaPares = pares/contpares;
	if(entre1020>0)
		printf("Ha %d elementos entre 10 e 20 \n", entre1020);
	else
		printf("Nao ha elementos entre 20 e 20");
		
	if(contpares>0)
		printf("A media dos pares e %.2f ", mediaPares);
	else
		printf("Não há elementos pares \n");
}
