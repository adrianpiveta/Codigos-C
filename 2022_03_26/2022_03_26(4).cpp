#include <stdio.h>
#include <locale.h>

	int main(){
		setlocale (LC_ALL, "portuguese");
		int matriz[10][20];
		int somaLinha[10], somap;

		for(int a = 0; a<10; a++){
			somap=0;
			for(int b=0; b<20; b++){
				printf("\n Digite o elemento posicao [%d] [%d] =>  ", a+1, b+1);
				scanf("%d%*c",&matriz[a][b]);
			}
		}
		
		for(int a = 0; a<10; a++){
			somap=0;
			for(int b=0; b<20; b++){
				somap+=matriz[a][b];
			}
			somaLinha[a]=somap;
		}
		for(int a = 0; a<10; a++){
			for(int b=0; b<20; b++){
				matriz[a][b]=matriz[a][b]*somaLinha[a];
			}
		}
		
		printf("--------------------------------\n Matriz Resultantes \n {");
		for(int a = 0; a<10; a++){
			printf("{");
			for(int b=0; b<20; b++){
				if(b!=19)
					printf(" %d ,",matriz[a][b]);
				else
					printf(" %d ",matriz[a][b]);
			}
			if(a!=9)
				printf("}, \n");
			else
				printf("} \n");
		}
	}
