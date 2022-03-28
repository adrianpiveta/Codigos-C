#include <stdio.h>
#include <locale.h>

	int main(){
		setlocale (LC_ALL, "portuguese");
		float entrada[10], auxiliar;
		int contador=0;
		for(int numero=0; numero<10; numero++){
			printf("\nDigite o %dº número: =>  ", numero+1);
			scanf("%f%*c",&entrada[numero]);
		}
		for(int aux=0; aux<10; aux++){
			for(int aux1=0; aux1<9; aux1++){
				if(entrada[aux1]<entrada[aux1+1]){
					auxiliar=entrada[aux1];
					entrada[aux1]=entrada[aux1+1];
					entrada[aux1+1]=auxiliar;
				}
			}
		}
		
		for(int posicao=0; posicao<10; posicao++){
			printf("Posição %d = %.2f \n",posicao, entrada[posicao]);
		}
	}
