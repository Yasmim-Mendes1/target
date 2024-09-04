// 1) O valor final da variável SOMA será 91.

// 2)
#include <stdio.h>

int main() {
    int num, a = 0, b = 1, c;

    printf("Informe um número: ");
    scanf("%d", &num);

    if (num == 0 || num == 1) {
        printf("%d pertence à sequência de Fibonacci.\n", num);
        return 0;
    }

    while (b < num) {
        c = a + b;
        a = b;
        b = c;
    }

    if (b == num) {
        printf("%d pertence à sequência de Fibonacci.\n", num);
    } else {
        printf("%d não pertence à sequência de Fibonacci.\n", num);
    }

    return 0;
}