#include <stdio.h>

main(){
	float media, a, b, c;
	printf("Nota 1: \n");
	scanf("%f%*c", &a);
	printf("Nota 2: \n");
	scanf("%f*c", &b);
	printf("Nota 3: \n");
	scanf("%f%*c", &c);
	media= (a+b+c)/3;
	printf("Media: %.2f",media);
}
