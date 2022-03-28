

	//relatorio dos alunos
	for (int linha = 0; linha<10; linha++){
		printf("Aluno %d \n", linha+1);
		menorNota[0]=notas[linha][0];
		for (int coluna = 0; coluna<3; coluna++){
			if(notas[linha][coluna]<menorNota[0]){
				menorNota[0]=notas[linha][coluna];
				menorNota[1]=coluna+1;
			}
			printf("Nota %d: %.2f, ",coluna+10, notas[linha][coluna]);
		}
		if((int)menorNota[1] == 1)
			quantidadeAlunos[0]+=1;
		if((int)menorNota[1] == 3)
			quantidadeAlunos[2]+=1;
		if((int)menorNota[1] == 2)
			quantidadeAlunos[1]++;


		printf("\nMenor nota foi na prova %.0f, com valor de %.2f",menorNota[1], menorNota[0]);
		printf("\n \n");
	}

	for(int quantidade=0; quantidade<3; quantidade++){
		printf("Houveram %d alunos com piores notas na prova %d \n",quantidadeAlunos[quantidade],quantidade+1);
	}
}
