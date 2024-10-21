#include <stdio.h>

int main() {
    int População1, População2, Pontos_turisticos1, Pontos_turisticos2;
    char Codigo_da_carta1 [5],Codigo_da_carta2 [5], Nome_da_cidade1 [50], Nome_da_cidade2 [50], Estado1[50], Estado2[50];
    float PIB1, PIB2, Area_por_Km1, Area_por_Km2;


printf("Digite o codigo da sua carta:\n");
scanf("%s", Codigo_da_carta1);

printf("Digite o nome do estado da sua carta:\n");
scanf("%s", Estado1);

printf("Digite o nome da cidade da sua carta:\n");
scanf("%s", Nome_da_cidade1);

printf("Digite o numero de habitantes da cidade:\n");
scanf("%d", &População1);

printf("Digite o numero de pontos turisticos:\n");
scanf("%d", &Pontos_turisticos1);

printf("Digite a Area por Km da cidade:\n");
scanf("%f", &Area_por_Km1);

printf("Digite o PIB da cidade:\n");
scanf("%f", &PIB1);



printf("\nDigite o codigo da carta do adversario:\n");
scanf("%s", Codigo_da_carta2);

printf("Digite o nome do estado da carta do seu adversario:\n");
scanf("%s", Estado2);

printf("Digite o nome da cidade da carta do seu adversario:\n");
scanf("%s", Nome_da_cidade2);

printf("Digite o numero de habitantes da cidade:\n");
scanf("%d", &População2);

printf("Digite o numero de pontos turisticos:\n");
scanf("%d", &Pontos_turisticos2);

printf("Digite a Area por Km da cidade:\n");
scanf("%f", &Area_por_Km2);

printf("Digite o PIB da cidade:\n");
scanf("%f", &PIB2);

 printf("\n*** SUA CARTA ***\nCodigo da carta: %s\nEstado: %s\nNome da cidade: %s\nPopulação: %d\nPontos turisticos: %d\nArea por km: %.0f\nPIB: %.2f\n", Codigo_da_carta1, Estado1, Nome_da_cidade1, População1, Pontos_turisticos1, Area_por_Km1, PIB1);

   printf("\n*** CARTA DO ADVERÁRIO ***\nCodigo da carta: %s\nEstado: %s\nNome da cidade: %s\nPopulação: %d\nPontos turisticos: %d\nArea por km: %.0f\nPIB: %.2f\n", Codigo_da_carta2, Estado2, Nome_da_cidade2, População2, Pontos_turisticos2, Area_por_Km2, PIB2);

if (População1 > População2){
        printf("A população da sua carta é maior !\n");

    } else {
         printf("A população da carta do seu adversário é maior !\n");

    }

    if (Pontos_turisticos1 > Pontos_turisticos2){
        printf("A mais pontos turisticos na sua carta !\n");

    } else {
         printf("A mais pontos turisticos na carta de seu adversário !\n");

    }
    
    if (Area_por_Km1 > Area_por_Km2){
        printf("A sua cidade é maior !\n");

    } else {
         printf("A cidade do seu adversário é maior !\n");
         }
    

         if (PIB1 > PIB2){
        printf("O PIB da sua carta é maior !\n");

    } else {
         printf("O PIB da carta do seu adversário é maior !\n");


}

return 0;

}