#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// 35, 37, 39, 40, 43, 44, 46, 47, 48, 49, 51, 53

// Exercício 35

float hypotenuse() {
  float a, b, hypo;

  printf("Digite os valores os catetos: ");
  scanf("%f %f", &a, &b);

  hypo = sqrt((a * a) + (b * b));
  
  return hypo;
}

// Exercício 37

float discount(){
  float value, discountedValue;

  printf("Insira um valor: ");
  scanf("%f", &value);

  discountedValue = value * 0.88;

  return discountedValue;
}

// Exercício 39

void partitioningPrize(){
  float prize = 780000, firstWin, secWin, thiWin;
  
  firstWin = prize * 0.46;
  secWin = prize * 0.32;
  
  prize -= firstWin;
  prize -= secWin;
  thiWin = prize;

  printf("1º ganhador: %.2f\n2º ganhador: %.2f\n3º ganhador: %.2f", 
  firstWin, secWin, thiWin);
}

// Exercício 40

void daysPerWork(){
  int workDays;
  float total;

  printf("Insira a quantidade de dias trabalhados: ");
  scanf("%d", &workDays);

  total = (workDays * 30) * 0.92;

  printf("Salário líquido: %.2f", total);
}

// Exercício 43

void salesmenHelper(){
  float value;
  
  printf("Insira o valor: ");
  scanf("%f", &value);

  printf("Valor total com desconto(10%): %.2f\n", value * 0.9);
  printf("Valor parcelado(3x): %.2f\n", value / 3);
  printf("Comissão do vendedor(À vista): %.2f\n", (value * 0.9) * 0.05);
  printf("Comissão do vendedor(Parcelada): %.2f\n", value * 0.05);
}

// Exercício 44

void stairDegrees(){
  float degree, height;
  int total;

  printf("Insira a altura do degrau e a altura desejada: ");
  scanf("%f %f", &degree, &height);

  total = height / degree;

  printf("É necessário subir %d degrau(s)", total);
}

// Exercício 46

void reverseInt(){
  int valor, reverso, resto;

  printf("Insira um valor inteiro: ");
  scanf("%d", &valor);

  while(valor != 0) {
    resto = valor % 10;
    reverso = reverso * 10 + resto;
    valor /= 10;
  }

  printf("Valor invertido: %d", reverso);
}

// Exercício 47

void digitPerLine(){
  int valor, digito;

  printf("Insira um valor: ");
  scanf("%d", &valor);

  while(valor != 0){
    digito = valor % 10;
    printf("%d\n", digito);
    valor /= 10;
  }
}

// Exercício 49

void biologicalExperiment(){
  int horas, minutos, segundos, duracao;

  printf("Insira o horário e a duração: ");
  scanf("%d %d %d %d", &horas, &minutos, &segundos, &duracao);

  while(duracao != 0){
    if(duracao >= 3600){
      horas += 1;
      duracao -= 3600;
    } else if(duracao >= 60) {
      minutos += 1;
      duracao -= 60;
    } else {
      segundos += duracao;
      duracao -= duracao;
    }

    if(horas >= 24){
        horas -= 24;
    }
    if(minutos >= 60){
      horas += 1;
      minutos -= 60;
    }
    if(segundos >= 60){
      minutos += 1;
      segundos -= 60;
    }
  }

  printf("Horário do término do experimento: %d:%d:%d", horas, minutos, segundos);
}

// Exercício 51

void coordinates(){
  int x1, y1, x2, y2;
  float distancia;

  printf("Insira as coordenadas dos pontos(x1, y1, x2, y2): ");
  scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

  distancia = sqrt(((x2-x1) * (x2-x1)) + ((y2 - y1) * (y2 - y1)));

  printf("Distância entre os dois pontos: %.2f", distancia);
}

// Exercício 53

void terrain(){
  float comp, larg, valorMetro, custoTotal;

  printf("Insira as dimensões do terreno e o valor por metro de tela: ");
  scanf("%f %f %f", &comp, &larg, &valorMetro);

  custoTotal = ((comp * 2) + (larg * 2)) * valorMetro;

  printf("Valor do custo total por metro de tela: %.2f", custoTotal);
}


int main(int argc, char const *argv[]) {
    // printf("Hipotenusa: %.2f", hypotenuse()); // Exercício 35
    // printf("Valor com desconto(12%): %.2f", discount()); // Exercício 37
    // partitioningPrize(); // Exercício 39
    // daysPerWork(); // Exercício 40
    // salesmenHelper(); // Exercício 43
    // stairDegrees(); // Exercício 44
    // reverseInt(); // Exercício 46
    // digitPerLine(); // Exercício 47
    // biologicalExperiment(); // Exercício 49
    // coordinates(); // Exercício 51
    // terrain(); // Exercício 53
    
    return 0;
}