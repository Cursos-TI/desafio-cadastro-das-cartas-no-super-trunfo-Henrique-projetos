#include <stdio.h>



int main() {

    printf("\n************ Desafio Super Trunfo Nível Novato ************\n");

    printf("\n");



    //Declaração das variáveis para as duas cartas



    char estado_1[8] = {'A','B','C','D','E','F','G','H'};

    char estado_2[8] = {'A','B','C','D','E','F','G','H'};

    char codigo_da_carta_1[4], codigo_da_carta_2[4];

    char nome_da_cidade_1[100], nome_da_cidade_2[100];

    int populacao_1, populacao_2;

    float area_1, area_2;

    float pib_1, pib_2;

    int pontos_turisticos_1, pontos_turisticos_2;



        //ESTRADAS E SAÍDAS;

    //Intruções;

    printf("--------------------------SUPER TRUNFO---------------------------\n");

    printf("O jogador deve fornecer os dados de cadastro das cartas,\n");

    printf("sobre as cidades, descritos na ordem abaixo:\n");

    printf("Um letra de 'A' a 'H' (representando um dos oitos Estados).\n");

    printf("O Código da carta, deve ser inseridas de: 01 a 04.\n");

    printf("O nome da cidade segundo o estado representado.\n");

    printf("O Número de habitantes da cidade.");

    printf("A área quadrada(KM²) da cidade, insira apenas o valor com o ponto.\n");

    printf("O PIB(Produto Interno Bruto), insira apenas o valor com o ponto.\n");

    printf("O Número de ponto turísticos.\n");

    printf("-----------------------------------------------------------------\n");

    printf("\n");



    //Entrada de dados para a primeira carta

    printf("\n*** Digite os dados da Carta 1 ***\n");


    printf("\nDigite a letra do Estado: \n");
    scanf("%c", &estado_1);
    

    printf("Digite o Código da carta: \n");
    scanf("%s", codigo_da_carta_1);
    

    printf("Digite o nome da Cidade: (Sem espaço): \n");
    scanf("%s",nome_da_cidade_1);
    

    printf("Digite a População: (Não utilizar ponto) \n");
    scanf("%i", &populacao_1);
    

    printf("Digite a Área (Não utilizar virgula usar ponto) \n");
    scanf("%f", &area_1);          
    

    printf("Digite o PIB (Não utilizar virgula usar ponto) \n");
    scanf("%f", &pib_1);            
    

    printf("Digite o Número de pontos Turísticos: \n");
    scanf("%i", &pontos_turisticos_1);
    

   
    // Entrada de dados para a segunda carta

    printf("\n*** Digite os dados da Carta 2 ***\n");

   
    printf("\nDigite a letra do Estado: \n");
    scanf("%c", &estado_2);
    while(getchar()!= '\n');


    printf("Digite o Código da carta: \n");
    scanf("%s", codigo_da_carta_2);
    while(getchar()!= '\n');


    printf("Digite o nome da Cidade (sem espaços): \n");
    scanf("%s",nome_da_cidade_2);
    

    printf("Digite a População: (Não utilizar ponto) \n");
    scanf("%i", &populacao_2);
    

    printf("Digite a Área (Não utilizar virgula usar ponto) \n");
    scanf("%f", &area_2);          
    

    printf("Digite o PIB (Não utilizar virgula usar ponto) \n");
    scanf("%f", &pib_2);          
    

    printf("Digite o Número de pontos Turísticos: \n");
    scanf("%i", &pontos_turisticos_2);
    


    // Saída de dados da carta 1

    printf("\n=== Dados da Carta 1 ===\n");

    printf("\nCódigo: %s\n", codigo_da_carta_1);

    printf("Estado: %c\n", estado_1);

    printf("Cidade: %s\n", nome_da_cidade_1);

    printf("População: %i de habitantes.\n", populacao_1);

    printf("Àrea: %.3f km²\n", area_1);

    printf("PIB: R$ %.3f Bilhões de Reais\n", pib_1);

    printf("Pontos turísticos: %i\n", pontos_turisticos_1);

   

    // Saida de dados da carta 2

    printf("\n=== Dados da Carta 2 ===\n");

    printf("\nCódigo: %s\n", codigo_da_carta_2);

    printf("Estado: %c\n", estado_2);

    printf("Cidade: %s\n", nome_da_cidade_2);

    printf("População: %i de habitantes.\n", populacao_2);

    printf("Àrea: %.3f km²\n", area_2);

    printf("PIB: R$ %.3f Bilhões de Reais\n", pib_2);

    printf("Pontos turísticos: %i\n", pontos_turisticos_2);

   
   
return 0;

}