#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {

// Variáveis declaradas primeiro.

	char cidade_a[21];
	char cidade_b[21];
	float area_a;
	float area_b;
	float pib_a;
	float pib_b;
	int pontos_a;
	int pontos_b;

// Entrada de dados do usuário / Cadastro das cartas
    
    printf("Bem vindo ao Super Trunfo Países Digital, duas cartas vão competir uma com a outra.\nPara começar, digite o nome da primeira cidade. \n");
    	fgets(cidade_a, 21, stdin); // Utilizando fgets porque algumas cidades (São Paulo, Rio de Janeiro, Belo Horizonte...) têm espaços no nome.

    printf("Quantos quilômetros ela tem de Área? \n");
    	scanf("%f", &area_a);

    printf("Qual o PIB dessa cidade? \n");
    	scanf("%f", &pib_a);

    printf("Quantos pontos turísticos tem essa cidade? \n");
    	scanf("%d", &pontos_a);
    	getchar(); // Uma quebra de linha fica no buffer e quebra o fgets que vem em seguinte, getchar() resolve o problema.  
    	
   	printf("Ótimo! E com qual cidade ela vai competir? \n");
    	fgets(cidade_b, 21, stdin);

    printf("Quantos quilômetros ela tem de Área? \n");
    	scanf("%f", &area_b);

    printf("Qual o PIB dessa cidade? \n");
    	scanf("%f", &pib_b);

    printf("Quantos pontos turísticos tem essa cidade? \n");
    	scanf("%d", &pontos_b);

    printf("Essas são as cartas: \n \n"); // Linha dupla pra ficar mais legível.

    printf("Carta 1 ⬎ \n");
    printf("Nome da Cidade: %s", cidade_a); // Não precisa de quebra de linha, o usuário pressiona 'enter' quando digita o nome da cidade então quando adiciona \n se torna uma quebra de linha dupla (adicionar \n caso troque para scanf)
    printf("Área da Cidade: %.2fkm \n", area_a);
    printf("PIB: %.2f Reais \n", pib_a);
    printf("Número de pontos turísticos: %d \n \n", pontos_a);

    printf("Carta 2 ⬎ \n");
    printf("Nome da Cidade: %s", cidade_b);
    printf("Área da Cidade: %.2fkm \n", area_b);
    printf("PIB: %.2f Reais \n", pib_b);
    printf("Número de pontos turísticos: %d \n \n", pontos_b);

    return 0;
}

