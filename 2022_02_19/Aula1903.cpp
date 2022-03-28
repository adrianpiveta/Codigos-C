// agregados homogeneos são conjunto de dados de mesmo tipo
// posição = indice +1 (forma que se pede ao usuário escolher, por exemplo)
#include <stdio.h>

void menorValor(){
	
	int matA[2][2];
	int matB[2][2];
	int maior=matA[0][0];
	for (int i =0; i<2; i++){
		for (int j =0; j<2; j++){
			printf("Digite o valor [%d][%d]:  ", i+1, j+1);
			scanf("%d%*c", &matA[i][j]);
		}
	}
	for (int i =0; i<2; i++){
		for (int j =0; j<2; j++){
			if(matA[i][j]>maior)
				maior=matA[i][j];
		}
	}
	for (int i =0; i<2; i++){
		for (int j =0; j<2; j++){
			matB[i][j]=matA[i][j]*maior;
		}
	}
	for (int i =0; i<2; i++){
		for (int j =0; j<2; j++){
			printf("%d | ",matB[i][j]);
		}
		printf("\n");
	}
	
}

int main(){
	menorValor();
	int mat[3][5];
	int i, j;
	float x[2][6];
	x[1][2] = 2.1;
	for (i=0; i<3; i++){
		for(j=0; j<5; j++){
			printf("Digite o valor da posicao [%d] [%d]:  ", i+1, j+1);
			scanf("%d%*c", &mat[i][j]);
		}
	}
	for (i=0; i<3; i++){
		for(j=0; j<5; j++){
			printf("Valor da posicao [%d] [%d] = %d \n", i+1, j+1, mat[i][j]);
		}
	}
	return 0;
}


