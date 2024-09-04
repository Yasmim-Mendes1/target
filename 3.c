// 3)
#include <stdio.h>
#include <float.h>

int main() {
    double faturamento[] = {22174.1664, 24537.6698, 26139.6134, 0, 0, 26742.6612, 0, 0, 42889.2258, 46251.174, 11191.4722, 0, 0, 0, 0, 0, 0, 0, 11994.1486, 25230.0578, 26963.2428, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int diasComFaturamento = 0;
    double menorFaturamento = DBL_MAX;
    double maiorFaturamento = DBL_MIN;
    double somaFaturamento = 0;

    for(int i = 0; i < 30; i++) {
        if (faturamento[i] > 0) {
            if (faturamento[i] < menorFaturamento) {
                menorFaturamento = faturamento[i];
            }
            if (faturamento[i] > maiorFaturamento) {
                maiorFaturamento = faturamento[i];
            }
            somaFaturamento += faturamento[i];
            diasComFaturamento++;
        }
    }

    double mediaMensal = somaFaturamento / diasComFaturamento;
    int diasAcimaMedia = 0;

    for(int i = 0; i < 30; i++) {
        if (faturamento[i] > mediaMensal) {
            diasAcimaMedia++;
        }
    }

    printf("Menor faturamento: %.2f\n", menorFaturamento);
    printf("Maior faturamento: %.2f\n", maiorFaturamento);
    printf("Dias com faturamento acima da média mensal: %d\n", diasAcimaMedia);

    return 0;
}