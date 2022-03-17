#include <stdio.h>
/*
			if(media<=3)reprovados++;
			if(media>3 and media<7) exame++;
			if(media>7) aprovados++;*/
int main(){
	float nota1, nota2, mediaClasse, media;
	int exame=0, aprovados=0, reprovados=0;
	for(int i=1; i<7; i++){
			printf("Digite a 1 a nota do %d o aluno : ", i);
			scanf("%f%*c", &nota1);
			printf("Digite a 2 a nota do %d o aluno : ", i);
			scanf("%f%*c", &nota2);
			media = (nota1+nota2)/2;
			printf(" Media do %do aluno %.2f",i, media);
			if(media<=3){
				printf("\nreprovado\n");
			reprovados++;
			}else{
				if(media>3 and media<7){
					 exame++;
					 printf("exame\n");
				}
			else{
				aprovados++;
				printf("aprovado\n");
			}
			mediaClasse+=media;
		}
		}
	printf(" %d aprovado(s) \n %d em exame \n %d reprovado(s) \n media da classe: %.2f", aprovados, exame, reprovados, (mediaClasse/6));
}
