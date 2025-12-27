#include <iostream>
#include <clocale>
#include <exception>

#include "RotationFigure.h"
#include "Cone.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "");
    system("chcp 65001 > nul");

    try {
        RotationFigure* arr[3];

        // різні типи об'єктів у масиві вказівників на базовий клас
        arr[0] = new RotationFigure("Циліндр (умовно)"); // просто базовий об'єкт
        arr[1] = new Cone(3.0, 5.0);
        arr[2] = new Cone(2.5, 4.0);

        cout << "=== Ієрархія класів: Фігури обертання – Конус ===\n\n";

        for (int i = 0; i < 3; i++)
            arr[i]->show();

        for (int i = 0; i < 3; i++)
            delete arr[i];
    }
    catch (const exception& ex) {
        cout << "Помилка: " << ex.what() << endl;
    }
    catch (...) {
        cout << "Невідома помилка!" << endl;
    }

    return 0;
}