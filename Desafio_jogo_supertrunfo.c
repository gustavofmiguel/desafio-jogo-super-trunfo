/*
Desafio Faculdade: Criação de um cadastro de cartas do jogo Super Trunfo

Este exercício foi desenvolvido conforme os parâmetros solicitados
Adicionando novos apredizados confome seguiamos nas aulas

Existem outras maneiras de resolver o desafio de forma mais otimizada 
e com menos linhas de código, porém, a implementação segue fluxo 
do basico ao avançado usando o mesmo código

*/

#include <stdio.h>

void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    // Carta 1
    char estado1[3], cod_carta1[4], cidade1[20];
    float populacao1, area1, pib1, densidade1, perCapita1, superPoder1;
    int pontosTuristicos1;

    // Carta 2
    char estado2[3], cod_carta2[4], cidade2[20];
    float populacao2, area2, pib2, densidade2, perCapita2, superPoder2;
    int pontosTuristicos2;

    printf(" --- Cadastro de Cartas Super Trunfo --- \n");

    // Carta 1 inputs

    printf("Carta 1 - Estado: ");
    scanf("%2s", estado1); limpar_buffer();
    printf("Código: "); scanf("%3s", cod_carta1); limpar_buffer();
    printf("Cidade: "); fgets(cidade1, 20, stdin); cidade1[strcspn(cidade1, "\n")] = 0; limpar_buffer();
    printf("População: "); scanf("%f", &populacao1); limpar_buffer();
    printf("Área: "); scanf("%f", &area1); limpar_buffer();
    printf("PIB: "); scanf("%f", &pib1); limpar_buffer();
    printf("Pontos turísticos: "); scanf("%d", &pontosTuristicos1); limpar_buffer();
    
    // Calculo carta 1
    densidade1 = populacao1 / area1;
    perCapita1 = pib1 / populacao1;

    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + perCapita1;


    // Carta 2 inputs

    printf("\nCarta 2 - Estado: ");
    scanf("%2s", estado2); limpar_buffer();
    printf("Código: "); scanf("%3s", cod_carta2); limpar_buffer();
    printf("Cidade: "); fgets(cidade2, 20, stdin); cidade2[strcspn(cidade2, "\n")] = 0; limpar_buffer();
    printf("População: "); scanf("%f", &populacao2); limpar_buffer();
    printf("Área: "); scanf("%f", &area2); limpar_buffer();
    printf("PIB: "); scanf("%f", &pib2); limpar_buffer();
    printf("Pontos turísticos: "); scanf("%d", &pontosTuristicos2); limpar_buffer();
    
    // Calculo carta 2
    densidade2 = populacao2 / area2;
    perCapita2 = pib2 / populacao2;

    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + perCapita2;

    // Saídas
    
    printf("\n -- Carta 1 -- \n");
    printf("Estado: %s | Código: %s | Cidade: %s\n", estado1, cod_carta1, cidade1);
    printf("População: %.0f | Área: %.1f | PIB: %.1f | Pontos: %d\n", 
           populacao1, area1, pib1, pontosTuristicos1);
    printf("Densidade Populacional: %.2f | PIB per Capita: %.2f\n", densidade1, perCapita1);
    printf("Super Poder: ", &superPoder1);
    
    printf("\n ---------------------------- \n");

    printf("\n -- Carta 2 -- \n");
    printf("Estado: %s | Código: %s | Cidade: %s\n", estado2, cod_carta2, cidade2);
    printf("População: %.0f | Área: %.1f | PIB: %.1f | Pontos: %d\n", 
           populacao2, area2, pib2, pontosTuristicos2);
    printf("Densidade Populacional: %.2f | PIB per Capita: %.2f\n", &densidade2, &perCapita2);
    printf("Super Poder: ", &superPoder2);

    // Comparação de cartas 

    printf("\n --- Comparação de Cartas --- \n");

    printf("\nComparação de Cartas:\n");
    printf("População: Carta %d venceu (%d)\n", 
        ((populacao1 > populacao2) ? 1 : 2), 
        ((populacao1 > populacao2) ? 1 : 0));
        
    printf("Área: Carta %d venceu (%d)\n", 
        ((area1 > area2) ? 1 : 2), 
        ((area1 > area2) ? 1 : 0));

    printf("PIB: Carta %d venceu (%d)\n", 
        ((pib1 > pib2) ? 1 : 2), 
        ((pib1 > pib2) ? 1 : 0));

    printf("Pontos Turísticos: Carta %d venceu (%d)\n", 
        ((pontosTuristicos1 > pontosTuristicos2) ? 1 : 2), 
        ((pontosTuristicos1 > pontosTuristicos2) ? 1 : 0));

    printf("Densidade Populacional: Carta %d venceu (%d)\n", 
        ((densidade1 > densidade2) ? 1 : 2), 
        ((densidade1 > densidade2) ? 1 : 0));

    printf("PIB per Capita: Carta %d venceu (%d)\n", 
        ((perCapita1 > perCapita2) ? 1 : 2), 
        ((perCapita1 > perCapita2) ? 1 : 0));

    printf("Super Poder: Carta %d venceu (%d)\n", 
        ((superPoder1 > superPoder2) ? 1 : 2), 
        ((superPoder1 > superPoder2) ? 1 : 0));

    // Agora usando if e else

    printf ("\n --- Comparação de cartas (Atributo: População) --- \n");

    if (populacao1 > populacao2)
    {
        printf("\n Carta 1 - %s: %f \n", cidade1, populacao1);
        printf("\n Carta 2 - %s: %f \n", cidade2, populacao2); 
        printf("\n Carta 1 venceu %s \n", cidade1);
    }else{
        printf("\n Carta 1 - %s: %f \n", cidade1, populacao1);
        printf("\n Carta 2 - %s: %f \n", cidade2, populacao2); 
        printf("\n Carta 2 venceu %s \n - ", cidade2);
    }

    // Usando switch case para escolher o atributo pelo jogador

    int escolhaJogador1, escolhaJogador2;

    printf("\n --- Escolha um atributo para comparar --- ");
    printf("\n1 - População");
    printf("\n2 - Área");
    printf("\n3 - PIB");
    printf("\n4 - Pontos Turísticos");
    printf("\n5 - Densidade Populacional");
    printf("\nSua escolha: ");
    scanf("%d", &escolhaJogador1);

    switch (escolhaJogador1)
    {
    case 1:
        printf("\n Você escolheu a População \n");
        printf("\n População Carta 1: %f\n", populacao1);
        printf("População Carta 2: %f\n", populacao2);
            if (populacao1 > populacao2)
            {
            printf("\n Carta 1 venceu com %.2f habitantes\n", populacao1);
            }else{
            printf("\n Carta 2 venceu com %.2f habitantes\n", populacao2);
            }
        break;
    case 2:
        printf("\nVocê escolheu a Área\n");
        if (area1 > area2)
            {
            printf("\n Carta 1 %s venceu com %.2f km²\n", cidade1, area1);
            }else{
            printf("\n Carta 2 %s venceu com %.2f km²\n", cidade2, area2);
            }
        break;
    case 3:
        printf("\nVocê escolheu o PIB\n");
        if (pib1 > pib2)
            {
            printf("\n Carta 1 venceu com %.2f milhões de reais\n", pib1);
            }else{
            printf("\n Carta 2 venceu com %.2f milhões de reais\n", pib2);
            }
        break;
    case 4:
        printf("\nVocê escolheu os Pontos Turísticos\n");
        if (pontosTuristicos1 > pontosTuristicos2)
            {
            printf("\n Carta 1 %s venceu com %d pontos turísticos\n", cidade1, pontosTuristicos1);
            }else{
            printf("\n Carta 2 %s venceu com %d pontos turísticos\n", cidade2, pontosTuristicos2);
            }
        break;
    case 5:
        printf("\nVocê escolheu a Densidade Populacional\n");
        if (densidade1 < densidade2)
            {
            printf("\n Carta 1 %s venceu com %.2f habitantes por km²\n", cidade1, densidade1);
            }else{
            printf("\n Carta 2 %s venceu com %.2f habitantes por km²\n", cidade1, densidade2);
            }
        break;
    default:
        printf("\nEscolha inválida!\n");
        break;
    }

    // Segunda esolha 

    printf("\n --- Escolha outro atributo para comparar --- ");
    printf("\n1 - População");
    printf("\n2 - Área");
    printf("\n3 - PIB");
    printf("\n4 - Pontos Turísticos");
    printf("\n5 - Densidade Populacional");
    printf("\nSua escolha: ");
    scanf("%d", &escolhaJogador2);

    switch (escolhaJogador2)
    {
    case 1:
        printf("\n Você escolheu a População \n");
        printf("\n População Carta 1: %f\n", populacao1);
        printf("População Carta 2: %f\n", populacao2);
            if (populacao1 > populacao2)
            {
            printf("\n Carta 1 venceu com %.2f habitantes\n", populacao1);
            }else{
            printf("\n Carta 2 venceu com %.2f habitantes\n", populacao2);
            }
        break;
    case 2:
        printf("\nVocê escolheu a Área\n");
        if (area1 > area2)
            {
            printf("\n Carta 1 %s venceu com %.2f km²\n", cidade1, area1);
            }else{
            printf("\n Carta 2 %s venceu com %.2f km²\n", cidade2, area2);
            }
        break;
    case 3:
        printf("\nVocê escolheu o PIB\n");
        if (pib1 > pib2)
            {
            printf("\n Carta 1 venceu com %.2f milhões de reais\n", pib1);
            }else{
            printf("\n Carta 2 venceu com %.2f milhões de reais\n", pib2);
            }
        break;
    case 4:
        printf("\nVocê escolheu os Pontos Turísticos\n");
        if (pontosTuristicos1 > pontosTuristicos2)
            {
            printf("\n Carta 1 %s venceu com %d pontos turísticos\n", cidade1, pontosTuristicos1);
            }else{
            printf("\n Carta 2 %s venceu com %d pontos turísticos\n", cidade2, pontosTuristicos2);
            }
        break;
    case 5:
        printf("\nVocê escolheu a Densidade Populacional\n");
        if (densidade1 < densidade2)
            {
            printf("\n Carta 1 %s venceu com %.2f habitantes por km²\n", cidade1, densidade1);
            }else{
            printf("\n Carta 2 %s venceu com %.2f habitantes por km²\n", cidade1, densidade2);
            }
        break;
    default:
        printf("\nEscolha inválida!\n");
        break;
    }

    if (escolhaJogador1 > escolhaJogador2)
    {
        printf("\nJogador 1 venceu a rodada!\n");
    }
    else if (escolhaJogador2 > escolhaJogador1)
    {
        printf("\nJogador 2 venceu a rodada!\n");
    }
    else
    {
        printf("\nEmpate na rodada!\n");
    }    
    
    return 0;
}



