#include <stdio.h>

main(){
	float media, a, b, c;
	int p1, p2, p3;
	printf("Nota 1: \n");
	scanf("%f%*c", &a);
	printf("Peso 1: \n");
	scanf("%d%*c", &p1);
	
	printf("Nota 2: \n");
	scanf("%f*c", &b);
	printf("Peso 2: \n");
	scanf("%d%*c", &p2);
	
	printf("Nota 3: \n");
	scanf("%f%*c", &c);
	printf("Peso 3: \n");
	scanf("%d%*c", &p3);
	
	media=(a*p1 + b*p2 + c*p3)/(p1+p2+p3);
	
	printf("Media ponderada: %.2f",media);
}

