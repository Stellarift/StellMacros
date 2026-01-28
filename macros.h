#pragma once
#ifndef MACROS_H
#define MACROS_H

// 1. Нахождение меньшего из двух чисел
#define MIN(a, b) ((a) < (b) ? (a) : (b))

// 2. Нахождение большего из двух чисел
#define MAX(a, b) ((a) > (b) ? (a) : (b))

// 3. Возведение числа в квадрат
#define SQUARE(x) ((x) * (x))

// 4. Возведение числа в степень
int power(int base, int exp);

// 5. Проверка числа на четность
#define IS_EVEN(n) ((n) % 2 == 0)

// 6. Проверка числа на нечетность
#define IS_ODD(n) ((n) % 2 != 0)

#endif 