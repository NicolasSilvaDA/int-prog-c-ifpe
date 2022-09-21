#include <stdio.h>


float conversorDolarToBRL(float quantiaDolar){
    float cotacao;
    printf("Insira a cotação da moeda: ");
    scanf("%f", &cotacao);
    return quantiaDolar * cotacao;
}

int main() {
    float quantiaEmDolar;
    
    printf("Digite o valor em dólares($): ");
    scanf("%f", &quantiaEmDolar);
    
    printf("$%.2f = R$%.2f", quantiaEmDolar, conversorDolarToBRL(quantiaEmDolar));
    return 0;
}