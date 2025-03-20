#include <stdio.h>
#include <string.h>

int main() {
    
// Declaração das Variáveis

    int opcaoMenu, opcaoAtributo; // Usadas nos switches

    char paisA[20] = "Brasil";
    char paisB[20] = "Canadá";

    // Simplificando os números pra deixar mais legível durante a exibição, medida comentada ao lado.

    int populacaoA = 211; // Milhões (211.000.000)
    int populacaoB = 40; // (40.000.000)

    float areaA = 8510000; // Milhões de quilômetros quadrados (8.510.000 km²)
    float areaB = 9985000; // (9.985.000 km²)

    float pibA = 2.17; // Trilhões de dólares (2.170.000.000 USD)
    float pibB = 2.14; // (2.140.000.000)

    int pontosTuristicosA = 50; // Não tem como ver *exatamente* quantos pontos turísticos os países tem, número vagamente aproximado
    int pontosTuristicosB = 40;

    float densidadeA = ((populacaoA * 1000000) / (areaA)); // habitantes por quilômetro quadrado.
    float densidadeB = ((populacaoB * 1000000) / (areaB)); // Multiplicando por milhão para o cálculo correto


// Função de comparação das cartas pra poder deixar o código do menu mais limpo.
    void comparacaoCartas() {
        switch (opcaoAtributo) {
            case 1:
                printf("―― Comparação de População!! ――\n");
                printf("Carta 1 - %s: %d milhões!\n", paisB, populacaoA);
                printf("Carta 2 - %s: %d milhões!\n", paisA, populacaoB);
                    if (populacaoA > populacaoB) {
                        printf("― A Carta 1 (%s) ganhou! ―\n", paisA);
                    } else if (populacaoA == populacaoB) {
                        printf("― As cartas empataram! ―\n");
                    } else {
                        printf("― A Carta 2 (%s) ganhou! ―\n", paisB);
                    };
                break;

            case 2:
                printf("―― Comparação de Área!! ――\n");
                printf("Carta 1 - %s: %.2f km²!\n", paisB, areaA);
                printf("Carta 2 - %s: %.2f km²!\n", paisA, areaB);
                    if (areaA > areaB) {
                        printf("― A Carta 1 (%s) ganhou! ―\n", paisA);
                    } else if (areaA == areaB) {
                        printf("― As cartas empataram! ―\n");
                    } else {
                        printf("― A Carta 2 (%s) ganhou! ―\n", paisB);
                    };
                break;

            case 3:
                printf("―― Comparação de Produto Interno Bruto!! ――\n");
                printf("Carta 1 - %s: %.2f trilhões de dólares!\n", paisB, pibA);
                printf("Carta 2 - %s: %.2f trilhões de dólares!\n", paisA, pibB);
                    if (pibA > pibB) {
                        printf("― A Carta 1 (%s) ganhou! ―\n", paisA);
                    } else if (pibA == pibB) {
                        printf("― As cartas empataram! ―\n");
                    } else {
                        printf("― A Carta 2 (%s) ganhou! ―\n", paisB);
                    };
                break;

            case 4:
                printf("―― Comparação de Pontos Turísticos!! ――\n");
                printf("Carta 1 - %s: %d Pontos Turísticos!\n", paisB, pontosTuristicosA);
                printf("Carta 2 - %s: %d Pontos turísticos!\n", paisA, pontosTuristicosB);
                    if (pontosTuristicosA > pontosTuristicosB) {
                        printf("― A Carta 1 (%s) ganhou! ―\n", paisA);
                    } else if (pontosTuristicosA == pontosTuristicosB) {
                        printf("― As cartas empataram! ―\n");
                    } else {
                        printf("― A Carta 2 (%s) ganhou! ―\n", paisB);
                    };
                break;

            case 5:
                printf("―― Comparação da Densidade Demográfica!! ――\n");
                printf("Carta 1 - %s: %.2f hab/km²!\n", paisB, densidadeB);
                printf("Carta 2 - %s: %.2f hab/km²!\n", paisA, densidadeA);
                    if (pibA < pibB) { // Trocando o sinal de comparação, pois o país com MENOR densidade vence.
                        printf("― A Carta 1 (%s) ganhou! ―\n", paisA);
                    } else if (densidadeA == densidadeB) {
                        printf("― As cartas empataram! ―\n");
                    } else {
                        printf("― A Carta 2 (%s) ganhou! ―\n", paisB);
                    };
                break;

        };
    };

// Função do menu principal, usado como função pra poder "trazer o usuário de volta" quando escolher uma opção, e sair somente quando escolher a opção 3.
    void menuPrincipal() {
        printf("――― Bem vindo(a) ao Super Trunfo - Países ! ―――\n");
        printf("1. Comparação das Cartas\n");
        printf("2. Regras/Explicação\n");
        printf("3. Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcaoMenu);

        switch (opcaoMenu) {
            case 1:
                printf("CARTA 1 - %s\nCARTA 2 - %s\n", paisA, paisB);
                printf("O que você deseja comparar?\n");
                printf("1. População\n");
                printf("2. Área\n");
                printf("3. PIB\n");
                printf("4. Pontos Turísticos\n");
                printf("5. Densidade Demográfica\n");
                printf("Escolha: ");
                scanf("%d", &opcaoAtributo);
                comparacaoCartas();

                break;
            case 2:
                printf("\nO Super Trunfo - Países funciona comparando duas cartas com a temática de países.\nCada carta tem seus atributos específicos, e aquela com o melhor, vence.\n\n");
                menuPrincipal(); // Retornar o usuário pro menu.
                break;
            case 3:
                printf("\nSaindo...\n\n");
                break;

            default:
                printf("Opção Inválida - Insira apenas o número da opção!\n\n");
                menuPrincipal(); // Retornar o usuário pro menu.
            }
        
        };        
    
    menuPrincipal(); // Chamando a função do menu.

    return 0;
}

