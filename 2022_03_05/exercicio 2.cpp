#include <stdio.h>

int main(){
	float n1, n2, n3, media;
	int p1, p2, p3;
	p1=2;
	p2=3;
	p3=5;
	printf("Digite a nota 1 \n");
	scanf("%f%*c", &n1);
	printf("Digite a nota 2 \n");
	scanf("%f%*c", &n2);
	printf("Digite a nota 3 \n");
	scanf("%f%*c", &n3);
	media=(n1+n2+n3)/3;
	printf("Media Poderada: %.2f \n", (n1*p1 + n2*p2 + n3*p3)/(p1+p2+p3));
	if(media>=0 && media<5.0){
		printf("Conceito E \n");
	} else{
		if(media<6.0){
			printf("Conceito D \n");
		} else{
			if(media<7){
				printf("Conceito C");
			} else{
				if(media<8)
					printf("Conceito B");
				else
					if(media<=10)
						printf("Conceito A");
					else
						printf("Media fora de padrao, verifique as entradas e tente novamente");
			}
		}
	}
}
