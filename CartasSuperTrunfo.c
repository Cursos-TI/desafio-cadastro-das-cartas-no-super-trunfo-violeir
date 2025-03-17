#include <stdio.h>

int main() {

// Variáveis Básicas declaradas primeiro.

	char cidade_a[21];
	char cidade_b[21];
	
    float area_a;
	float area_b;
	
    int populacao_a;
    int populacao_b;
    
    float pib_a;
	float pib_b;
	
    int pontos_a;
	int pontos_b;

// Entrada de dados do usuário - Cadastro das cartas
    
    printf("Bem vindo ao Super Trunfo Países Digital, duas cartas vão competir uma com a outra.\nPara começar, digite o nome da primeira cidade. \n");
    	fgets(cidade_a, 21, stdin); // Utilizando fgets porque algumas cidades (São Paulo, Rio de Janeiro, Belo Horizonte...) têm espaços no nome.

    printf("Quantos quilômetros ela tem de Área? \n");
    	scanf("%f", &area_a);

    printf("Quantas pessoas vivem nela? \n");
        scanf("%d", &populacao_b);

    printf("Qual o PIB dessa cidade (em bilhões)? \n");
    	scanf("%f", &pib_a);

    printf("Quantos pontos turísticos tem essa cidade? \n");
    	scanf("%d", &pontos_a);
    	fgetc(stdin); // Uma quebra de linha fica no buffer e pula o fgets que vem em seguinte, fgetc ou getchar resolve o problema.  
    	
   	printf("Ótimo! E com qual cidade ela vai competir? \n");
    	fgets(cidade_b, 21, stdin);

    printf("Quantos quilômetros ela tem de Área? \n");
    	scanf("%f", &area_b);

    printf("Quantas pessoas vivem nela? \n");
        scanf("%d", &populacao_b);

    printf("Qual o PIB dessa cidade (em bilhões)? \n");
    	scanf("%f", &pib_b);

    printf("Quantos pontos turísticos tem essa cidade? \n");
    	scanf("%d", &pontos_b);

// Cálculo das variáveis de Densidade Populacional e PIB per Capita.
    
    float densidade_a;
    float densidade_b;
    
    float per_capita_a;
    float per_capita_b;
    
        densidade_a = (float)(populacao_a / area_a); // Conversão explícita da população pro tipo float
        densidade_b = (float)(populacao_b / area_b);

        per_capita_a = pib_a / (float)(populacao_a); 
        per_capita_b = pib_b / (float)(populacao_b);

// Cálculo do Super Poder

    float superPoderA = ((float)populacao_a + area_a + pib_a + (float)pontos_a + per_capita_a) + (densidade_a * -1); // Multiplicando por menos 1 para inverter o valor da densidade populacional
    float superPoderB = ((float)populacao_b + area_a + pib_b + (float)pontos_b + per_capita_b) + (densidade_b * -1);



// Exibir as duas cartas:

printf("Essas são as cartas: \n \n"); // Linha dupla pra ficar mais legível.

    printf("――― Carta 1 ⬎ \n");
    printf("Estado: A\n");
    printf("Código: A01\n");
    printf("Nome da Cidade: %s", cidade_a); // Não precisa de quebra de linha, o usuário pressiona 'enter' quando digita o nome da cidade, quando adiciona \n se torna uma quebra de linha dupla.
    printf("Área da Cidade: %.2f km² \n", area_a);
    printf("População: %d\n", populacao_a);
    printf("PIB: %.2f bilhões de reais \n", pib_a);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_a);
    printf("PIB per Capita: R$ %.2f \n", per_capita_a);
    printf("Número de pontos turísticos: %d \n", pontos_a);
    printf("SUPER PODER: %.2f \n \n", superPoderA);

    printf("――― Carta 2 ⬎ \n");
    printf("Estado: B\n");
    printf("Código: B02\n");
    printf("Nome da Cidade: %s", cidade_b);
    printf("Área da Cidade: %.2f km² \n", area_b);
    printf("População: %d\n", populacao_b);
    printf("PIB: %.2f reais \n", pib_b);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_b);
    printf("PIB per Capita: %.2f reais\n", per_capita_b);
    printf("Número de pontos turísticos: %d \n", pontos_b);
    printf("SUPER PODER: %.2f \n \n", superPoderB);

// Exibir Comparação entre as cartas. Todas as variáveis com a letra A são referentes à Carta 1, as com a letra B são referentes à Carta 2

int vitoriasA; // Declaração da variável de quantas vezes A venceu no geral
int vitoriasB; // Declaração da variável de quantas vezes B venceu no geral


    printf("――― Comparação das Cartas! ――― \n \n");


    if(populacao_a > populacao_b) {
        printf("População: Carta 1 Venceu! \n");
        vitoriasA++;
        
    } else {
            printf("População: Carta 2 Venceu! \n");
            vitoriasB++;        
    };

    if(area_a > area_b) {
        printf("Área: Carta 1 Venceu! \n");
        vitoriasA++;

    } else {
            printf("Área: Carta 2 Venceu! \n");
            vitoriasB++;        
    };

    if(pib_a > pib_b) {
        printf("PIB: Carta 1 Venceu! \n");
        vitoriasA++;

    } else {
            printf("PIB: Carta 2 Venceu! \n");
            vitoriasB++;        
    };
    
    if(pontos_a > pontos_b) {
        printf("Quantidade de Pontos Turísticos: Carta 1 Venceu! \n");
        vitoriasA++;

    } else {
            printf("Quantidade de Pontos Turísticos: Carta 2 Venceu! \n");
            vitoriasB++;        
    };

    if(densidade_a > densidade_b) {
        printf("Densidade Populacional: Carta 2 Venceu! \n"); // Nesse caso, a carta com o MAIOR valor de densidade demográfica perde, logo se densidade_a > densidade_b, cidade B / Carta 2 ganha.
        vitoriasA++;

    } else {
            printf("Densidade Populacional: Carta 1 Venceu! \n");
            vitoriasB++;        
    };

    if(per_capita_a > per_capita_b) {
        printf("PIB per Capita: Carta 1 Venceu! \n");
        vitoriasA++;

    } else {
            printf("PIB per Capita: Carta 2 Venceu! \n");
            vitoriasB++;        
    };

    if(superPoderA > superPoderB) {
        printf("SUPER PODER: Carta 1 Venceu! \n");
        vitoriasA++;

    } else {
            printf("SUPER PODER: Carta 2 Venceu! \n");
            vitoriasB++;        
    };

    if(vitoriasA > vitoriasB) {
    printf("\nRESULTADO - A Carta 1 saiu vitoriosa!\n");

    } else {
            printf("\nRESULTADO - A Carta 2 saiu vitoriosa!\n");
    };

    return 0;
}

