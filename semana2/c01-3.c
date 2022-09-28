#include <stdio.h>
#include <stdlib.h>

// 35, 37, 39, 40, 43, 44, 46, 47, 48, 49, 51, 53

// Exercício 35

float hypotenuse() {
  float a, b, hypo;

  printf("Digite os valores os catetos: ");
  scanf("%f %f", &a, &b);

  hypo = sqrt((a * a) + (b * b));
  
  return hypo;
}

int main() {
    // printf("Hipotenusa: %.2f", hypotenuse()); // Exercício 35

    return 0;
}