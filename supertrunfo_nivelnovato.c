#include <stdio.h>


int main(){
    // Variáveis para  a prImeira carta.
    char carta1;
    char Estado1;
    char Codigo1[3];
    char Cidade1;
    int Populacao1;
    float Area1;
    float PIB1;
    int Pontos_turisticos1;
    float densidade1;
    float pibpercapta1;

    // Variáveis para a segunda carta.
    char carta2;
    char Estado2;
    char Codigo2[3];
    char Cidade2;
    int Populacao2;
    float Area2;
    float PIB2;
    int Pontos_turisticos2;
    float densidade2;
    float pibpercapta2;
    

   // Obtendo os dados da carta 1 utilizando as funções pritf e scanf.

    printf("Digite o numero da primeira carta: (ex: 1)");
    scanf("%s", &carta1);
   
    printf("Digite o estado (Utilize uma letra de A a H para definir o nome do estado e use letra maiúscula.): \n");
    scanf("%s", &Estado1);

    printf("Digite o codigo da carta( Utiliza a letra definida para o Estado e um numero. Ex: A01,B03): \n");
    scanf("%3s", &Codigo1);
   
    printf("Digite o nome da cidade: \n");
    scanf("%s", &Cidade1);

    printf("Digite a polupacao da cidade: \n");
    scanf("%d", &Populacao1);

    printf("Digite a area da cidade(em quilometros quadrados): \n");
    scanf("%f", &Area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB1);

    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf("%d", &Pontos_turisticos1);
      

    // Obtendo os dados da carta 2 utilizando as funções pritf e scanf.

    printf("Digite o numero da segunda carta: (ex: 1)");
    scanf("%s", &carta2);
   
    printf("Digite o estado (Utilize uma letra de A a H para definir o nome do estado e use letra maiúscula.): \n");
    scanf("%s", &Estado2);

    printf("Digite o codigo da carta( Utiliza a letra definida para o Estado e um numero. Ex: A01,B03): \n");
    scanf("%3s", &Codigo2);
   
    printf("Digite o nome da cidade: \n");
    scanf("%s", &Cidade2);

    printf("Digite a polupacao da cidade: \n");
    scanf("%d", &Populacao2);

    printf("Digite a area da cidade(em quilometros quadrados): \n");
    scanf("%f", &Area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB2);

    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf("%d", &Pontos_turisticos2);  

    //Calculando os valores da densidade populacional e o PIB per capta da carta 1.

    densidade1 = (float) Populacao1 / Area1;
    densidade2 = (float) Populacao2 / Area2;
    pibpercapta1 = (float) PIB1 / Populacao1;
    pibpercapta2 = (float) PIB2 / Populacao2;
    

    
    printf("Carta: &s\n", carta1);    
    printf("Estado: %s\n", Estado1);
    printf("Codigo: %s\n", Codigo1);
    printf("Nome da Cidade: %s\n", Cidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %.2f\n", Area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Pontos turisticos: %d\n", Pontos_turisticos1);
    printf("A desidade populaciona é: %.2f\n", densidade1);
    printf("O PIB percapta é: %.2f\n", pibpercapta1);

    printf("Carta: %s\n", carta2);    
    printf("Estado: %s\n", Estado2);
    printf("Codigo: %s\n", Codigo2);
    printf("Nome da Cidade: %s\n", Cidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f\n", Area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos turisticos: %d\n", Pontos_turisticos2);
    printf("A desidade populaciona é: %.2f\n", densidade2);
    printf("O PIB percapta é: %.2f\n", pibpercapta2);

           

    return 0;
    
}