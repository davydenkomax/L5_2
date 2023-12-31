﻿/*
    Дан массив A размера N. Сформировать новый массив B того же
    размера по следующему правилу: элемент Bk равен сумме элементов массива
    A с номерами от 0 до K
*/
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    // Объявление пременных
    int n;
    double sum = 0;
    // Ввод значения переменной n
    cout << "Введите размер массива: ";
    cin >> n;
    // Проверка на неправильный ввод размера массивов a, b
    if (n <= 0) {
        cerr << "Неправильный ввод размера массива";
        // Завершение программы
        return 0;
    }
    // Объявление указателя a и b
    double *a;
    double *b;
    // Выделение памяти на целочисленные массивы из n элементов
    a = new double[n];
    b = new double[n];
    // Ввод значений элементов массива a
    for (int i = 0; i < n; i++) {
        cout << "Введите " << i + 1 << " элемент массива: ";
        cin >> *(a + i);
    }

    for (int i = 0; i < n; i++) {
        sum += *(a + i);
        *(b + i) = sum;
    }
    // Вывод результата(заполненного масиива b)
    for (int i = 0; i < n; i++) {
        cout << *(b + i) << " ";
    }
    // Удаление выделенной памяти под массивы a, b
    delete[] b;
    delete[] a;

    return 0;
}