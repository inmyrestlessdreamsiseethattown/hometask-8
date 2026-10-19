#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "RUS");

    int n;
    double S = 0.0;
    double term = 1.0;
    int k;

    printf("Введите целое n (n >= 0): ");
    if (scanf("%d", &n) != 1) {
        fprintf(stderr, "Ошибка: ожидалось целое число.\n");
        return 1;
    }

    if (n < 0) {
        fprintf(stderr, "Ошибка: n должно быть неотрицательным (n >= 0).\n");
        return 1;
    }

    for (k = 0; k <= n; k++) {
        S += term;
        term = -term / 2.0;
    }

    printf("S = %.6f\n", S);
    printf("Количество членов ряда: %d\n", n + 1);

    return 0;
}
