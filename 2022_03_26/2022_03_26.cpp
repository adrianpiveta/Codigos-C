#include <stdio.h>
#include <locale.h>

int main(){
	//se digita double com virgula, esta em portugues
	setlocale (LC_ALL, "portuguese");
	float numero[3];
	int aux=0, contOrdem=0;
	for(int cont=0; cont<3; cont++){
		printf("Digite o %dº numero: ",cont+1);
		scanf("%f%*c", &numero[cont]);
	}
	aux=numero[0];
	while(contOrdem<3){
		for(int cont=0; cont<2; cont++){
			if(numero[cont]>numero[cont+1]){
				aux=numero[cont];
				numero[cont]=numero[cont+1];
				numero[cont+1]=aux;
				contOrdem++;
			}else{
				contOrdem++;
			}
		}
	}
	for(int cont=0; cont<3; cont++)
		printf("Numero na posição %d == %.2f \n", cont+1, numero[cont]);
	
	
}
