#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    int Carta_1;
    int Cidade[20];
    int População;
    float ÁreaKM;
    float PIB;
    int PontosTuristicos;

//CARTA 1

printf("Carta_1");

printf("Cidade: \n");
scanf("%s", Cidade);

printf("Populução: \n");
scanf("%s", População);

printf("ÁreaKM: \n");
scanf("%f", ÁreaKM);

printf("PIB: \n");
scanf("%f", PIB);

printf("PontosTurísticos: \n");
scanf("%s", PontosTuristicos);


    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
