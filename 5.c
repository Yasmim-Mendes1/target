//5
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Exemplo de string";
    int len = strlen(str);

    printf("String original: %s\n", str);
    printf("String invertida: ");

    for (int i = len - 1; i >= 0; i--) {
        putchar(str[i]);
    }
    printf("\n");

    return 0;
}