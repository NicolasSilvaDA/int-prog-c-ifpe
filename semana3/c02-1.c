#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// 4, 6, 10, 11, 12, 14, 15, 41

// Exercício 4

void isPositive(){
  float num;

  printf("Insira um número: ");
  scanf("%f", &num);
  
  if (num >=0){
    printf("Quadrado: %f\n", num*num);
    printf("Raiz quadrada: %f", sqrt(num));
  }
  
}

// Exercício 6

void greaterNumber(){
  int num1, num2;

  printf("Digite dois números: ");
  scanf("%d %d", &num1, &num2);

  if (num1 >=  num2){
    printf("Maior número: %d\n", num1);
    printf("Diferença entre os dois números: %d", num1 - num2);
  } else {
    printf("Maior número: %d\n", num2);
    printf("Diferença entre os dois números: %d", num2 - num1);
  }
}

// Exercício 10

void idealWeight(){
  float altura, ideal;
  char sexo;

  printf("Insira sua altura e seu sexo(M|F): ");
  scanf("%f %c", &altura, &sexo);

  if(sexo == 'M'){
    ideal = (72.7 * altura) - 58;
    printf("Peso ideal: %.2f", ideal);
    
  } else if (sexo == 'F'){
    ideal = (62.1 * altura) - 44.7;
    printf("Peso ideal: %.2f", ideal);
    
  } else {
    printf("Dados inválidos!");
  }
}

// Exercício 11

void algarismsSum(){
  int num, total;

  printf("Insira um número maior que 0: ");
  scanf("%d", &num);
  
  if (num > 0) {
    while(num != 0) {
      total += num % 10;
      num /= 10;
    }
    printf("Soma dos algarismos: %d",total);
    
  } else {
    printf("Número inválido!");
  }
}

// Exercício 12

void logarithm(){
  int num;
  float logarithm;

  printf("Insira um número inteiro: ");
  scanf("%d", &num);

  logarithm = log10(num);
  
  printf("Logaritmo: %.2f", logarithm);
}

// Exercício 14

void finalScore(){
  float nota1, nota2, nota3, media;

  printf("Insira as três notas: ");
  scanf("%f %f %f", &nota1, &nota2, &nota3);

  if (nota1 < 0 || nota2 < 0 || nota3 < 0) {
    printf("Dados inválidos!");
  } else {
     media = (nota1 * 0.2) + (nota2 * 0.3) + (nota3 * 0.5);

    if (media <= 2.9) {
      printf("Reprovou!");
    } else if (media >= 3.0 && media <=   4.9) {
      printf("Recuperação!");
    } else {
      printf("Aprovou!");
    } 
  }
}

// Exercício 15

void weekDay(){
  int num;

  printf("Insira um número entre 1 e 7: ");
  scanf("%d", &num);

  switch(num){
    case 1: printf("Segunda-feira"); break;
    case 2: printf("Terça-feira"); break;
    case 3: printf("Quarta-feira"); break;
    case 4: printf("Quinta-feira"); break;
    case 5: printf("Sexta-feira"); break;
    case 6: printf("Sábado"); break;
    case 7: printf("Domingo"); break;
    default: printf("Número inválido!");
  }
}

// Exercício 41

void imc() {
  float peso, altura, imc;

  printf("Insira seu peso e sua altura: ");
  scanf("%f %f", &peso, &altura);

  imc = peso / (altura * altura);

  if(imc < 18.5) {
    printf("Abaixo do peso");
  } else if (imc >= 18.6 && imc <= 24.9) {
    printf("Saudável");
  } else if (imc >= 25.0 && imc <= 29.9) {
    printf("Peso em excesso");
  } else if (imc >= 30.0 && imc <= 34.9) {
    printf("Obesidae Grau I");
  } else if (imc >= 35.0 && imc <= 39.9) {
    printf("Obesidade Grau II(severa)");
  } else {
    printf ("Obesidade Grau III(mórbida)");
  }

}

int main(int argc, char const *argv[])
{
  //isPositive();
  //greaterNumber();
  //idealWeight();
  //algarismsSum();
  //logarithm();
  //finalScore();
  //weekDay();
  //imc();
  return 0;
}
