#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "portuguese");
	/*
	[time][jogador][caracteristica do jogador]
	em caracteristica do jogador, temos idade[0]  peso[1] altura[2]
	*/
	printf("-----------------------------------\nPrograma de calculo de times \n");
	printf("Respeite as unidades de medida, valores podem ter entrada em real, com a separação das casas decimais dadas por vírgulas \n");
	printf("Exemplo: 00,00 \n");
	printf("-----------------------------------	\nFaça um bom uso ;) \n");
	float times [5][11][3], mediaIdade[5], somaIdades, mediaAltura, gordinhos=0;
	int menorIdade=0;  
	for(int time=0; time<5; time++){
		printf("---------------------------------\n Digite dados referentes ao %dº time: \n", time+1);
		for(int jogador=0; jogador<11; jogador++){
			printf("----------------------------------------\n Jogador %d \n", jogador+1);
			printf(" Digite o idade (anos)=>  ");
			scanf("%f%*c", &times [time][jogador][0]);
			printf(" Digite o peso (KG))=>  ");
			scanf("%f%*c", &times [time][jogador][1]);
			printf(" Digite a altura (metros)=>  ");
			scanf("%f%*c", &times [time][jogador][2]);
		}
	}
	
	for(int time=0; time<5; time++){
		somaIdades=0;
		for(int jogador=0; jogador<11; jogador++){
			if(times[time][jogador][0] <18)
					menorIdade++;
			if(times[time][jogador][1] >80.0)
				gordinhos++;
			somaIdades+=times[time][jogador][0];
			mediaAltura+=times[time][jogador][2];
		}
		mediaIdade[time]=(somaIdades/11);
	}
	
	printf("\n----------------------------------------\n Quantidade de jogadores menores de 18: %d", menorIdade);
	for(int medias=0; medias<5; medias++)
		printf("\n--------------------------------------\n A média de idade do time %d é %.2f",medias, mediaIdade[medias]);
	printf("\n--------------------------------------\n A média de altura de todos jogadores é %.2f", mediaAltura/(55));	
	printf("\n--------------------------------------\n A procentagem de jogadores com mais de 80kg é %.2f %", (gordinhos/(5*11)));	
}
