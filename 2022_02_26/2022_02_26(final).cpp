#include<stdio.h>
main(){
	//exercicio 1
	int soma, z, y, x, w;
	printf("Numero 1: \n");
	scanf("%d%*c", &z);
	printf("Numero 2: \n");
	scanf("%d%*c", &y);
	printf("Numero 3: \n");
	scanf("%d%*c", &x);
	printf("Numero 4: \n");
	scanf("%d%*c", &w);
	soma=(z+y+x+w);
	printf("Soma: %d \n", soma);

// exercicio 2
	float media, a, b, c;
	printf("Nota 1: \n");
	scanf("%f%*c", &a);
	printf("Nota 2: \n");
	scanf("%f*c", &b);
	printf("Nota 3: \n");
	scanf("%f%*c", &c);
	media= (a+b+c)/3;
	printf("Media: %.2f \n",media);


// exercicio 3
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

