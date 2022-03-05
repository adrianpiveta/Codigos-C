#include <stdio.h>

main(){
	float n1,n2;
	printf("Digite o 1º numero \n");
	scanf("%f%*c", &n1);
	printf("Digite o 2º numero \n");
	scanf("%f%*c", &n2);
	if(n1==n2)
		printf("%.2f e igual a %.2f", n1, n2);
	else{
		printf("Maior numero: ");
		if(n1>n2)
			printf("%.2f", n1);
		else
			printf("%.2f", n2);
	}
			
}
