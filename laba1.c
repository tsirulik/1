#include <stdio.h>

int main() {
    // Объявление переменных
    int b1, b2, b3;
    int minVal, minPos;

    // Ввод значений
    printf("Введите число b1: ");
    scanf("%d", &b1);
    printf("Введите число b2: ");
    scanf("%d", &b2);
    printf("Введите число b3: ");
    scanf("%d", &b3);

    // Нахождение наименьшего значения и его позиции
    minVal = b1;
    minPos = 1;

    if (b2 < minVal) {
        minVal = b2;
        minPos = 2;
    }

    if (b3 < minVal) {
        minVal = b3;
        minPos = 3;
    }

    // Проверка на четность или нечетность наименьшего значения
    if (minVal % 2 == 0) {
        // Наименьшее число четное
        printf("Частное номера и значения наименьшего параметра: %d / %d = %d\n", minPos, minVal, minPos / minVal);
    } else {
        // Наименьшее число нечетное
        printf("Номер наименьшего параметра: %d\n", minPos);
    }

    return 0;
}


