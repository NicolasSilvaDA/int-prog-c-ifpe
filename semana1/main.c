#include <stdio.h>

void trocar(int num, int num2) {
    int temp = num;
    num = num2;
    num2 = temp;
    printf("%d e %d", num, num2);
}

int main() {
    int num = 5, num2 = 3;

    printf("Troca de números - Antes: %d e %d || Depois: ", num, num2);
    trocar(num, num2);

    return 0;
}