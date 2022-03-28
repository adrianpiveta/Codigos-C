#include <stdio.h>
#include <stdlib.h>
int main(){
	int d1=10, d2=20, d3;
	
	printf("{");
	for(int time=0; time<d1; time++){
		printf(" {");
		for(int jogador=0; jogador<d2; jogador++){
			printf("{");
			for(int caracteristica=0; caracteristica<d3; caracteristica++){
				if(caracteristica<d3)
					printf(" %d, ", rand());
				if(caracteristica==d3)
					printf(" %d ", rand());
			}
			if(jogador!=10)
				printf("}, \n");
			else
				printf("}");
		}
		if(time!=4)
			printf("}, ");
		else
			printf("} ");
	}
	printf("}");
	
	printf("{");
	for(int time=0; time<d1; time++){
		printf(" {");
		for(int jogador=0; jogador<d2; jogador++){
			if(jogador!=d2-1)
				printf("%d ,", rand());
			else
				printf("%d ", rand());
		}
		if(time!=d1-1)
			printf("}, ");
		else
			printf("} ");
	}
	printf("}");
}
