#include <stdio.h>
#include <stdlib.h>

// Exercício 12

float milToKm() {
  float miles, kilom;

  printf("Digite um valor em milhas: ");
  scanf("%f", &miles);

  kilom = miles * 1.61;

  return kilom;
}

// Exercício 14

float degToRad() {
  float deg, rad;

  printf("Digite o ângulo em graus: ");
  scanf("%f", &deg);

  rad = (deg * 3.14) / 180;

  return rad;
}

// Exercício 16

float polToCm() {
  float pol, cm;

  printf("Digite a medida em polegadas: ");
  scanf("%f", &pol);

  cm = pol * 2.54;

  return cm;
}

// Exercício 18

float mCubToL() {
  float mCub, litres;

  printf("Digite a medida em m³: ");
  scanf("%f", &mCub);

  litres = mCub * 1000;

  return litres;
}

// Exercício 20

float kgToLb() {
  float kg, lb;

  printf("Insira o valor da massa em kg: ");
  scanf("%f", &kg);

  lb = kg / 0.453592;

  return lb;
}

// Exercício 22

float ydToM() {
  float yd, m;

  printf("Digite a distância em jardas: ");
  scanf("%f", &yd);

  m = yd * 0.9144;

  return m;
}

// Exercício 24

float mSquaredToAcre() {
  float mSquared, acre;

  printf("Digite a medida em m²: ");
  scanf("%f", &mSquared);

  acre = mSquared * 0.000247;
  
  return acre;
}

// Exercício 26

float mSquaredToHect() {
  float mSquared, hect;

  printf("Digite a medida em m²: ");
  scanf("%f", &mSquared);

  hect = mSquared * 0.0001;
  
  return hect;
}

// Exercício 28

float squaresSum() {
  float first, second, third, sum;

  printf("Digite três valores para executar a soma de seus quadrados: ");
  scanf("%f %f %f", &first, &second, &third);

  sum = (first * first) + (second * second) + (third * third);

  return sum;
}

// Exercício 29

float arithAverage() {
  float n1, n2, n3, n4, average;

  printf("Digite as 4 notas avaliativas: ");
  scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

  average = (n1 + n2 + n3 + n4) / 4;

  return average;
}


int main() {
    // printf("%.2f Km", milToKm()); // Exercício 12
    // printf("%.2f Rad", degToRad()); // Exercício 14
    // printf("%.2f cm", polToCm()); // Exercício 16
    // printf("%.2f L", mCubToL()); // Exercício 18
    // printf("%.2f lb", kgToLb()); // Exercício 20
    // printf("%.2f m", ydToM()); // Exercício 22
    // printf("%f are", mSquaredToAcre()); // Exercício 24
    // printf("%f hectare", mSquaredToHect()); // Exercício 26
    // printf("Sum = %.2f", squaresSum()); // Exercício 28
    // printf("Average = %.2f", arithAverage()); // Exercício 29
    
    return 0;
}