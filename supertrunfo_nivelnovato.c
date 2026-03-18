#include <stdio.h>


int main(){
    char Estado;
    char Codigo[3];
    char Cidade;
    int Populacao;
    float Area;
    float PIB;
    int Pontos_turisticos;

   
   printf("Digite o estado (Utilize uma letra de A a H para definir o nome do estado e use letra maiúscula.): \n");
   scanf("%s", &Estado);

   printf("Digite o codigo da carta( Utiliza a letra definida para o Estado e um numero. Ex: A01,B03): \n");
   scanf("%3s", &Codigo);
   
   printf("Digite o nome da cidade: \n");
   scanf("%s", &Cidade);

   printf("Digite a polupacao da cidade: \n");
   scanf("%d", &Populacao);

   printf("Digite a area da cidade(em quilometros quadrados): \n");
   scanf("%f", &Area);

   printf("Digite o PIB da cidade: \n");
   scanf("%f", &PIB);

   printf("Digite o numero de pontos turisticos da cidade: \n");
   scanf("%d", &Pontos_turisticos);
      
      
    
    printf("Carta 1\n");    
    printf("Estado: %s\n", Estado);
    printf("Codigo: %s\n", Codigo);
    printf("Nome da Cidade: %s\n", Cidade);
    printf("População: %d\n", Populacao);
    printf("Área: %.2f\n", Area);
    printf("PIB: %.2f\n", PIB);
    printf("Pontos turisticos: %d\n", Pontos_turisticos);
           

    return 0;

    
    
















}