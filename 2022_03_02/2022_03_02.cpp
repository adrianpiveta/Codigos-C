/*
estrutura condicional e de repetição

decisão
if(condicao){
	comando;
	comando2;
}


//para 1 comando
if(condicao)
	comando;
else
	comando;
	
//para mais comandos (coloca chaves)
if(condicao){
	comando1;
	comando2;
}
else{
	comando;
	comando2;
}

// varias condições, para executar somente 1 ação
if(condicao){
	codigo;
} else{
	if(condicao2){
		codigo;
	}
}

//como se fosse uma lista de if´s e executa de acordo com a condição
switch(variavel){
	case 1:
		comandos;
		break;
	case 2:
		comandos;
		break;
	// defalt caso nenhum comando tenha sido executado
	default: 
		comandos;
}
após o include colocar tab (boa prática em C)
*/
#include <stdio.h>

void epar(int numero){
		if(numero%2==0)
			printf("par");
		else
			printf("impar");
		
	}




	int main(){
		int i;
		printf("digite 1 numero \n");
		scanf("%d%*c", &i);
		
		switch(i){
			case 1:
				printf("Numero 1");
				break;
			case 2:
				printf("Numero 2");
				break;
			default:
				printf("Numero diferente de 1 e 2");
		}
		printf("\n");
		
		epar(i);
		return 0;
		getchar(); // utilizamos para limpar a memoria do computador
	
	}

	
/*
operadores condicionais

! operação not
&& e 
|| ou 

//x não é menor que zero nem maior que 10
if( x<0 ! x>10)

*/

