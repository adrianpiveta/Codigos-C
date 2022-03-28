# include <stdio.h>

int main(){
	int valores[5][5],
		somaL4=0, somaC2=0, somaDP=0, somaDS=0, somaM=0;
	
	int quantidadeAlunos[3]={0,0,0};
	for (int linha = 0; linha<5; linha++){
		printf("_______________________________________________\n");
		for (int coluna = 0; coluna<5; coluna++){
			printf("Digite o valor da posicao [%d] [%d] =>  ", linha+1, coluna+1);
			scanf("%d%*c", &valores[linha][coluna]);
		}
	}
	
	for (int linha = 0; linha<5; linha++){
		for (int coluna = 0; coluna<5; coluna++){
			if(linha==3)//aqui se soma elementos da linha 4 (indice 3)
				somaL4+=valores[linha][coluna];
			if(coluna==1)//soma-se elementos da coluna 2
				somaC2+=valores[linha][coluna];
			if(linha==coluna)//soma diagonal principal
				somaDP+=valores[linha][coluna];
			if(coluna+linha == linha+1)//soma diagonal secundaria
				somaDS+=valores[linha][coluna];
			somaM+=valores[linha][coluna];
		}
	}
	
	printf("Soma Linha 4 = %d \n", somaL4);
	printf("soma Coluna 2 = %d \n", somaC2);
	printf("soma Diagonal Principal = %d \n", somaDP);
	printf("soma Diagonal Secundaria = %d \n", somaDS);	
	printf("Soma de todos elementos da matriz = %d", somaM);
}
