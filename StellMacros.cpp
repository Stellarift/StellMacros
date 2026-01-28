#include <iostream>
#include "macros.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    cout << "ТЕСТИРОВАНИЕ МАКРОСОВ" << endl << endl;

    cout << "1. MIN и MAX:" << endl;
    cout << "   MIN(10, 20) = " << MIN(10, 20) << endl;
    cout << "   MAX(10, 20) = " << MAX(10, 20) << endl;

    cout << "\n2. SQUARE:" << endl;
    cout << "   SQUARE(5) = " << SQUARE(5) << endl;

    cout << "\n3. POWER:" << endl;
    cout << "   2^3 = " << power(2, 3) << endl;
    cout << "   5^2 = " << power(5, 2) << endl;

    cout << "\n4. Проверка четности:" << endl;
    cout << "   Число 4 четное? " << (IS_EVEN(4) ? "Да" : "Нет") << endl;
    cout << "   Число 5 нечетное? " << (IS_ODD(5) ? "Да" : "Нет") << endl;

    cout << "\nТЕСТИРОВАНИЕ ЗАВЕРШЕНО" << endl;

    return 0;
}
