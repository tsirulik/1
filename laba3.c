#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Функция для проверки, является ли число простым
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    
    return true;
}

// Функция для поиска простых элементов в массиве
void findPrimes(int arr[], int size) {
    // Переменная для хранения количества простых элементов
    int count = 0;
    
    // Массив для хранения индексов простых элементов
    int indexes[size];
    
    // Перебираем элементы массива
    for (int i = 0; i < size; i++) {
        if (isPrime(arr[i])) {
            // Если элемент является простым, увеличиваем счетчик
            count++;
            
            // Сохраняем индекс простого элемента
            indexes[count-1] = i;
        }
    }
    
    if (count == 1) {
        // Если простой элемент один, выводим его на экран
        printf("Простой элемент: %d\n", arr[indexes[0]]);
    } else if (count == 2) {
        // Если простых элементов два, меняем их местами
        int temp = arr[indexes[0]];
        arr[indexes[0]] = arr[indexes[1]];
        arr[indexes[1]] = temp;
        printf("Простые элементы поменялись местами.\n");
    } else if (count > 2) {
        // Если простых элементов больше двух, выводим все индексы
        printf("Индексы простых элементов: ");
        for (int i = 0; i < count; i++) {
            printf("%d ", indexes[i]);
        }
        printf("\n");
    }
}

int main() {
    int size;
    
    // Запрос количества элементов массива
    printf("Введите количество элементов массива: ");
    scanf("%d", &size);
    
    // Создание массива и заполнение случайными числами
    int arr[size];
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 1000;
    }
    
    // Вывод исходного массива
    printf("Исходный массив: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Поиск простых элементов
    findPrimes(arr, size);
    
    // Вывод измененного массива
    printf("Измененный массив: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}