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

void regConsumo(float consumo[DIAS][RECURSOS]){
	float agua, energia, oxigenio;
	for (int i = 0; i < DIAS; i++) {
		printf("Dia %d: \n", i + 1);
		printf("Litros de agua: \n");
		scanf("%f", &consumo[i][0]);
		printf("Watts de energia: \n");
		scanf("%f", &consumo[i][1]);
		printf("Cilindros de oxigenio: \n");
		scanf("%f", &consumo[i][2]);
	}
	
	for (int i = 0; i < DIAS; i++){
		printf("Dia: %d ", i + 1);
		printf("Litros de agua: %0.f ||", consumo[i][0]);
		printf("Watts de energia: %0.f ||", consumo[i][1]);
		printf("Cilindros de oxigenio: %0.f \n", consumo[i][2]);
	}
}
 float calcTotalRecurso(float consumo[DIAS][RECURSOS], int recurso) {
 	int dias;
 	for (dias= 0; dias < DIAS; dias++){

 	total por recurso += [DIAS][RECURSO];
 }

//Principal
int main() {
	
	char tripulantes[TRIPULANTES][TAM_NOME];
	float consumo[DIAS][RECURSOS] = {0};
	int opcao;
	
	do {
		printf("\n===== SISTEMA DA MISSAO ESTELAR ORION =====\n");
        printf("1. Cadastrar tripulantes\n");
		printf("2. Registrar consumo dos recursos\n");
		printf("3. Exibir matriz de consumo\n");
		printf("4. Exibir consumo total de cada recurso\n");
		printf("5. Exibir consumo medio diario\n");
		printf("6. Verificar alertas da missao\n");
		printf("7. Gerar relatorio final\n");
		printf("0. Sair\n");
		printf("Escolha uma opcao: ");
		scanf("%d", &opcao);
		
		
		switch (opcao) {
		
		case 1: cadTripulantes(tripulantes); break;
		
		case 2: regConsumo(consumo); break;
		
	    case 4:
		 printf("\nTotal de oxigenio: %.2f", calcTotalRecurso(consumo,
		 0));
		 
		 printf("\nTotal de agua: %.2f", calcTotalRecurso(consumo, 1));
		 
		 printf("\nTotal de energia: %.2f\n", calcTotalRecurso(consumo,
		 2));
		 
		 break;
		
		default: return 0;
		
	
	}} while (opcao != 0);
	
	return 0;
}

