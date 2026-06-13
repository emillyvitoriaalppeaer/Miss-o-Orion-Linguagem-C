//Bibliotecas
#include <stdio.h>
#include <stdlib.h>

//Constantes
#define DIAS 7
#define RECURSOS 3
#define TRIPULANTES 5
#define TAM_NOME 50

//Funções

//Cadastro de tripulantes
void cadTripulantes(char tripulantes[TRIPULANTES][TAM_NOME]) {
	int s;
	for (int i = 0; i < TRIPULANTES; i++){
		printf("Digite o nome do tripulante %d.\n", i + 1);
		scanf("%s", &tripulantes[i]);
	}
	
	printf("OS ESCOLHIDOS FORAM: \n");
	for (int i = 0; i < TRIPULANTES; i++) {
		printf("%d. %s\n", i + 1, &tripulantes[i]);
	}
}

//Registro de consumo
void regConsumo(float consumo[DIAS][RECURSOS]){
	float agua, energia, oxigenio;
	for (int i = 0; i < DIAS; i++) {
		printf("\nDia: %d \n", i + 1);
		printf("Litros de agua: ");
		scanf("%f", &consumo[i][0]);
		printf("Watts de energia: ");
		scanf("%f", &consumo[i][1]);
		printf("Cilindros de oxigenio: ");
		scanf("%f", &consumo[i][2]);
		printf("\n--------------------------------------------------------------------------------------------- \n");
	}

}
//Mostrar matriz de consumo
void exibConsumo(float consumo[DIAS][RECURSOS]){
	printf("--------------------------------------------------------------------------------------------- \n");
	
	for (int i = 0; i < DIAS; i++){
		printf("|| Dia: %d ", i + 1);
		printf("|| Litros de agua: %0.f ", consumo[i][0]);
		printf("|| Watts de energia: %0.f ", consumo[i][1]);
		printf("|| Cilindros de oxigenio: %0.f || \n", consumo[i][2]);
	}
	printf("-------------------------------------------------------------------------------------------\n");
}
//Total de recursos
 float calcTotalRecurso(float consumo[DIAS][RECURSOS], int recurso) {
 	
 	int dias;
 	float total;
 	for (dias= 0; dias < DIAS; dias++){

 	total += consumo[dias][recurso];
 	}
 	return total;
 	
 }
 
//Média de recursos
float calcMediaRecurso(float consumo[DIAS][RECURSOS], int recurso) {
 	
 	int dias;
 	float total;
 	float media;
 	for (dias= 0; dias < DIAS; dias++){

 	total += consumo[dias][recurso];
 	}
 	
 	media = total / DIAS;
 	
 	return media;
 	
 }
 

//Principal
int main() {
	
	char tripulantes[TRIPULANTES][TAM_NOME];
	float consumo[DIAS][RECURSOS] = {0};
	int opcao;
	
	do {
		printf("\n|==== SISTEMA DA MISSAO ESTELAR ORION ====|\n");
        printf("|1. Cadastrar tripulantes                 |\n");
		printf("|2. Registrar consumo dos recursos        |\n");
		printf("|3. Exibir matriz de consumo              |\n");
		printf("|4. Exibir consumo total de cada recurso  |\n");
		printf("|5. Exibir consumo medio diario           |\n");
		printf("|6. Verificar alertas da missao           |\n");
		printf("|7. Gerar relatorio final                 |\n");
		printf("|0. Sair                                  |\n");
		printf("|_________________________________________|\n");

		printf("\nEscolha uma opcao: ");

		scanf("%d", &opcao);
		
		
		switch (opcao) {
		
		case 1: printf("\nCadastro de tripulantes: \n\n"); 
			cadTripulantes(tripulantes); break;
		
		case 2: printf("\nRegistro de Consumo: \n\n");
			regConsumo(consumo); break;
		
		case 3: printf("\nMatriz de consumo: \n\n");exibConsumo(consumo); break;
		
	    case 4:
	    	printf("\nTotal de recursos: \n\n");
	    	for (int i = 0; i < 3; i++) {
			
				if (i == 0) {
			
		 			printf("\nTotal de agua: %.2f", calcTotalRecurso(consumo, i));
		 			} else if (i == 1) {
		 	 		printf("\nTotal de energia: %.2f", calcTotalRecurso(consumo, i));
					} else {
		 	 		printf("\nTotal de oxigenio: %.2f \n", calcTotalRecurso(consumo, i));
		 		}
		}
		 break;
		
		case 5:
		 printf("\nMedia diaria de agua: %.2f", calcMediaRecurso(consumo, 0));
		 
		 printf("\nMedia diaria de energia: %.2f", calcMediaRecurso(consumo, 1));
		 
		 printf("\nMedia diaria de oxigenio: %.2f\n", calcMediaRecurso(consumo, 2));
		 break;
		 
		default: printf("Digite uma opcao valida!");
		
	
	}} while (opcao != 0);
	
	return 0;
}


