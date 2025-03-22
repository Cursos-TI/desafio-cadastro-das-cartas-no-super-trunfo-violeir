#include <stdio.h>

int main () {

 
    int opcaoMenu, opcaoAtributo1, opcaoAtributo2; // Usadas nos switches
    
    char pais1[20] = "Brasil";
    char pais2[20] = "Canadá";

    // Para não exibir um número enorme durante a comparação, os números serão simplificados.
    // Quantidade real comentada ao lado.

    int populacao1 = 211; // Duzentos e onze milhões de habitantes (211.000.000)
    int populacao2 = 40;  //(40.000.000)

    float area1 = 8.510; // Oito milhões e quinhentos e dez mil quilômetros quadrados (8.510.000 km²)
    float area2 = 9.985; // (9.985.000 km²)

    float pib1 = 2170; // Dois trilhões e cento e setenta bilhões de dólares (2.170.000.000 USD)
    float pib2 = 2140; // (2.140.000.000)

    int pontosTuristicos1 = 52; // Não tem como ver *exatamente* quantos pontos turísticos os países tem, já que a definição de ponto turístico muda,
    int pontosTuristicos2 = 47; // então o número é arbitrário e muito vagamenete aproximado.

    float densidade1 = (populacao1 / area1); // habitantes por quilômetro quadrado.
    float densidade2 = (populacao2 / area2); // Multiplicando por milhão para o cálculo correto

    float primeiroAtributo1, segundoAtributo1; // Seleção dos atributos a serem comparados, primeiro e segundo baseado na ordem que forem escolhidos,
    float primeiroAtributo2, segundoAtributo2; // e 1 corresponde à carta 1, 2 corresponde à carta 2

// Função a ser chamada depois da primeira escolha ser feita:
    void escolhaSegundoAtributo() { 
        switch (opcaoAtributo1) {
        case 1:
            primeiroAtributo1 = (float)populacao1;
            primeiroAtributo2 = (float)populacao2;
            printf("Qual o outro atributo a se comparar?\n");
            printf("✓ - [ População - Selecionado ]\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Pontos Turísticos\n");
            printf("5. Densidade Demográfica\n");
            printf("Escolha: ");
            scanf("%d", &opcaoAtributo2);
        break;

        case 2:
            primeiroAtributo1 = area1;
            primeiroAtributo2 = area2;
            printf("Qual o outro atributo a se comparar?\n");
            printf("1. População\n");
            printf("✓ - [ Área - Selecionado ]\n");
            printf("3. PIB\n");
            printf("4. Pontos Turísticos\n");
            printf("5. Densidade Demográfica\n");
            printf("Escolha: ");
            scanf("%d", &opcaoAtributo2);
        break;

        case 3: 
            primeiroAtributo1 = pib1;
            primeiroAtributo2 = pib2;
            printf("Qual o outro atributo a se comparar?\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("✓ - [ PIB - Selecionado ]\n");
            printf("4. Pontos Turísticos\n");
            printf("5. Densidade Demográfica\n");
            printf("Escolha: ");
            scanf("%d", &opcaoAtributo2);
        break;

        case 4:
            primeiroAtributo1 = (float)pontosTuristicos1;
            primeiroAtributo2 = (float)pontosTuristicos2;
            printf("Qual o outro atributo a se comparar?\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("✓ - [ Pontos Turísticos - Selecionado ]\n");
            printf("5. Densidade Demográfica\n");
            printf("Escolha: ");
            scanf("%d", &opcaoAtributo2);
        break;
        
        case 5:
            primeiroAtributo1 = (densidade1 * -1);
            primeiroAtributo2 = (densidade2 * -1);
            printf("Qual o outro atributo a se comparar?\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Pontos Turísticos\n");
            printf("✓ - [ Densidade Demográfica - Selecionado ]\n");
            printf("Escolha: ");
            scanf("%d", &opcaoAtributo2);
        break;

        default:
            printf("Opção Inválida! Digite apenas o número da opção!");
        };
    };
    
// Menu e 'bem-vindo' :
        printf("――― Bem vindo(a) ao Super Trunfo - Países ! ―――\n");
        printf("1. Comparação das Cartas\n");
        printf("2. Regras/Explicação\n");
        printf("3. Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcaoMenu);

// Switch pra escolher qual opção do menu quer enviar.
        switch (opcaoMenu) {
            case 1:
                printf("\nCARTA 1 - %s\nCARTA 2 - %s\n\n", pais1, pais2);
                printf("O que você deseja comparar?\n");
                printf("1. População\n");
                printf("2. Área\n");
                printf("3. PIB\n");
                printf("4. Pontos Turísticos\n");
                printf("5. Densidade Demográfica\n");
                printf("Escolha: ");
                scanf("%d", &opcaoAtributo1);
                escolhaSegundoAtributo(); // Chamando a função de seleção do segundo atributo

                break;
            case 2:
                printf("\nSelecione dois atributos das cartas, o programa soma eles\ne aquela com o maior número, vence.\nNo caso de densidade demográfica, o número é subtraído.\n\n");
                main(); // Retornar o usuário pro menu.
                break;
            case 3:
                printf("\nSaindo...\n\n");
                break;

            default:
                printf("\n\nOpção Inválida - Insira apenas o número da opção !!\n―――――――――――――――――――――――――――――――――――――――――――――――\n");
                main(); // Retornar o usuário pro menu.
            };
        
// Verificação dos atributos escolhidos, se foram os mesmos o programa encerra.        
            if(opcaoAtributo1 == opcaoAtributo2){
                printf("\n\nOpção Inválida - Você já escolheu esse atributo !!\n―――――――――――――――――――――――――――――――――――――――――――――――\n"); 
        };

// Switch de seleção do segundo atributo, baseado na variável opcaoAtributo2.
        switch (opcaoAtributo2) {
                case 1:
                    segundoAtributo1 = populacao1;
                    segundoAtributo2 = populacao2;
                break;
    
                case 2:
                    segundoAtributo1 = area1;
                    segundoAtributo2 = area2;
                break;
            
                case 3:
                    segundoAtributo1 = pib1;
                    segundoAtributo2 = pib2;
                break;
    
                case 4:
                    segundoAtributo1 = pontosTuristicos1;
                    segundoAtributo2 = pontosTuristicos2;
                break;
    
                case 5:
                    segundoAtributo1 = (densidade1 * -1); // Tornando o número negativo.
                    segundoAtributo2 = (densidade2 * -1); // Como o país com a menor densidade demográfica ganha, a densidade subtrai, em vez de adicionar.
                break;
                
                default:
                    printf("Opção inválida!\n");
        };

// Comparação das cartas em si.
            printf("\n――― COMPARAÇÃO DAS CARTAS ! ―――\n");
            printf("Carta 1 - %s / Carta 2 - %s\n", pais1, pais2);
            printf("%.1f + %.1f VS %.1f + %.1f\n", primeiroAtributo1, segundoAtributo1, primeiroAtributo2, segundoAtributo2);
            printf("TOTAL Carta 1: %.1f - TOTAL Carta 2: %.1f\n\n", (primeiroAtributo1 + segundoAtributo1), (primeiroAtributo2, segundoAtributo2));
            if ((primeiroAtributo1 + segundoAtributo1) > (primeiroAtributo2 + segundoAtributo2)) {
                printf("Carta 1 (%s) venceu!\n\n", pais1); 
            } else if ((primeiroAtributo1 + segundoAtributo1) == (primeiroAtributo2 + segundoAtributo2)) {
                printf("Deu empate..!\n\n");
            } else {
                printf("Carta 2 (%s) venceu!\n\n", pais2);
            };
        
    return 0;
};
