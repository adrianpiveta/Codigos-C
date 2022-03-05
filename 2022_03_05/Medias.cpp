#include <stdio.h>

int main(){
	float n1, n2, n3, media;
	printf("Digite a nota 1 \n");
	scanf("%f%*c", &n1);
	printf("Digite a nota 2 \n");
	scanf("%f%*c", &n2);
	printf("Digite a nota 3 \n");
	scanf("%f%*c", &n3);
	media=(n1+n2+n3)/3;
	printf("Media Aritmetica: %.2f \n", media);
	
	if(media>=0 && media<3.0){
		printf("Reprovado \n");
	} else{
		if(media<6){
			printf("Exame \n");
			printf("Precisa de uma nota maior ou igual a %.2f", (12-media));
		} else{
			if(media<=10){
				printf("Aprovado");
			}
			else{
				printf("Verifique as notas entradas e tente novamente");
			}
		}
	}
}
