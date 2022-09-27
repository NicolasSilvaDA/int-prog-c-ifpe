#include <stdio.h>

// Exercício 1

int leitorIntPrint() {
    int valor;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);
    
    return valor;
}

// Exercício 2

float leitorRealPrint() {
  float valor;

  printf("Digite um número real: ");
  scanf("%f", &valor);

  return valor;
}

// Exercício 3

int somaInt() {
  int a, b, c, total;

  printf("Digite três valores para efetuar a soma: ");
  scanf("%d %d %d", &a, &b, &c);

  total = a + b + c;

  return total;
}
// Exercício 4

float potencia() {
  float x, pot;

  printf("Digite um valor: ");
  scanf("%f", &x);

  pot = x * x;

  return pot;
}

// Exercício 5

float quintaParteNum() {
  float valor;

  printf("Digite um valor real: ");
  scanf("%f", &valor);

  return (valor / 5);
}

// Exercício 6

float celsiusToF() {
  float celsius, fahrenheit;

  printf("Insira os graus em Celsius: ");
  scanf("%f", &celsius);

  fahrenheit = ((9 * celsius) + 160) / 5;
  
  return fahrenheit;
}

// Exercício 7

float fahrenheitToC() {
  float celsius, fahrenheit;

  printf("Insira os graus em Fahrenheit: ");
  scanf("%f", &fahrenheit);

  celsius = ((5 * fahrenheit) - 160) / 9;
  
  return celsius;
}

// Exercício 8 

float kelvinToC() {
  float kelvin, celsius;

  printf("Digite o valor em graus Kelvin: ");
  scanf("%f", &kelvin);

  celsius = kelvin - 273;
  
  return celsius;
}

// Exercício 9

float celsiusToK() {
  float kelvin, celsius;

  printf("Digite o valor em graus Celsius: ");
  scanf("%f", &celsius);

  kelvin = celsius + 273.15;
  
  return kelvin;
}

// Exercício 10

float kilometersHToMetersS() {
  float kmPerH, mPerS;
  printf("Digite o valor em Km/h: ");
  scanf("%f", &kmPerH);

  mPerS = kmPerH / 3.6;
  
  return mPerS;
}

int main() {
    // printf("%d", leitorIntPrint()); // Exercício 1
    // printf("%f", leitorRealPrint()); // Exercício 2
    // printf("%d", somaInt()); // Exercício 3
    // printf("%f", potencia()); // Exercício 4
    // printf("%.2f", quintaParteNum()); // Exercício 5
    // printf("%.2f", celsiusToF()); // Exercício 6
    // printf("%.1f", fahrenheitToC()); // Exercício 7
    // printf("%.1f", kelvinToC()); // Exercício 8
    // printf("%.1f", celsiusToK()); // Exercício 9
    // printf("%.2f", kilometersHToMetersS()); // Exercício 10
}