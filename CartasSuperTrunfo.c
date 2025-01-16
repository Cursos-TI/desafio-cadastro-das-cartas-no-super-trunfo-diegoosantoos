#include <stdio.h>

int main() {
    
    int codigo;
    char nome[100];
    double populacao;
    float area;
    float pib;
    int pontos_turisticos;

    
    printf("Cadastro de Carta de Cidade\n");
    printf("Digite o código da cidade: ");
    scanf("%d", &codigo);
 
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", nome);
    
    printf("Digite a população da cidade: ");
    scanf("%lf", &populacao);
    
    printf("Digite a área da cidade: ");
    scanf("%f", &area); 

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib); 
    
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos);

    
    printf("\n--- Dados da Carta da Cidade ---\n");
    printf("Código: %d\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %lf habitantes\n", populacao);
    printf("Área: %f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);

    
    return 0;
}
