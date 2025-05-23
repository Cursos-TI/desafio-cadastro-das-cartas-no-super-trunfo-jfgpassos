#include <stdio.h>

int main() {
    char Cidade[20];
    int População;
    float AreaKM;
    float PIB;
    int PontosTuristicos;

    printf("Cidade: \n");
    scanf("%s", Cidade);

    printf("População: \n");
    scanf("%d", &População);

    printf("ÁreaKM: \n");
    scanf("%f", &AreaKM);

    printf("PIB: \n");
    scanf("%f", &PIB);

    printf("PontosTurísticos: \n");
    scanf("%d", &PontosTuristicos);

    return 0;
}

