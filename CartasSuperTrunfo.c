     #include <stdio.h>

     int main(){

    char estado1[50], estado2[50], codigo1[50], codigo2[50], cidade1[50], cidade2[50]; //Strings do projeto
    int populacao1, populacao2, turismo1, turismo2;                                    //Int do projeto
    float area1, area2, pib1, pib2;                                                   //Float do projeto
    // coloquei as variaveis respectivas como 1 e 2 pra facilitar no momento de apresentar os dados.
    printf("Digite o nome do primeiro estado: \n");                                   //Pra imputação dos dados eu utilizei o mesmo modelo, apenas alterando a formatação do dado e a variavel.
    scanf("%s",&estado1); 

    printf("Digite o código da carta: \n");
    scanf("%s",&codigo1);

    printf("Digite o nome da primeira cidade: \n");
    scanf("%s",&cidade1); 

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d",&populacao1);

    printf("Digite a área da cidade em KM²: \n");
    scanf("%f",&area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f",&pib1);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d",&turismo1);

    printf("Digite o nome do segundo estado: \n");
    scanf("%s",&estado2); 

    printf("Digite o código da carta: \n");
    scanf("%s",&codigo2);

    printf("Digite o nome da segunda cidade: \n");
    scanf("%s",&cidade2); 

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d",&populacao2);

    printf("Digite a área da cidade em KM²: \n");
    scanf("%f",&area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f",&pib2);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d",&turismo2);

    printf("Carta 1: \n");                                                //Para a apresentação dos dados, utilizei a sequência do desafio.
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %f \n", area1);
    printf("PIB: %f \n", pib1);
    printf("Pontos turísticos: %d \n\n", turismo1);
    


    printf("Carta 2: \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %f \n", area2);
    printf("PIB: %f \n", pib2);
    printf("Pontos turísticos: %d \n", turismo2);

    return 0;
}