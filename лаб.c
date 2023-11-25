#include <stdio.h>
#include <stdbool.h>

int main() {
    int b1, b2, b3;
    bool exit = false;

    FILE* logFile = fopen("log.txt", "w");

    while (!exit) {
        printf("Введите значение b1: ");
        scanf("%d", &b1);
        fprintf(logFile, "b1: %d\n", b1);

        printf("Введите значение b2: ");
        scanf("%d", &b2);
        fprintf(logFile, "b2: %d\n", b2);

        printf("Введите значение b3: ");
        scanf("%d", &b3);
        fprintf(logFile, "b3: %d\n", b3);

        // Проверка на выход из цикла
        if (b1 == 0 && b2 == 0 && b3 == 0) {
            exit = true;
            continue;
        }

        int smallest;
        float result;

        if (b1 % 2 != 0 && b1 != 0) {
            smallest = 1;
            result = (float) b1 / smallest;
        }
        else if (b2 % 2 != 0 && b2 != 0) {
            smallest = 2;
            result = (float) b2 / smallest;
        }
        else if (b3 % 2 != 0 && b3 != 0) {
            smallest = 3;
            result = (float) b3 / smallest;
        }
        else {
            printf("Нет нечётных значений параметров\n\n");
            fprintf(logFile, "Нет нечётных значений параметров\n\n");
            continue;
        }

        printf("Наименьший параметр: b%d\n", smallest);
        printf("Результат: %.2f\n\n", result);

        fprintf(logFile, "Наименьший параметр: b%d\n", smallest);
        fprintf(logFile, "Результат: %.2f\n\n", result);
    }

    fclose(logFile);

    return 0;
}



