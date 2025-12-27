#include <iostream>
#include <clocale>
#include <exception>

#include "University.h"
#include "Faculty.h"
#include "Department.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "");
    system("chcp 65001 > nul");

    try {
        University* arr[3];

        arr[0] = new University(
            "Міжнародний науково-технічний університет імені академіка Юрія Бугая",
            "Київ", 1992);

        arr[1] = new Faculty(
            "Міжнародний науково-технічний університет імені академіка Юрія Бугая",
            "Київ", 1992,
            "Факультет комп’ютерних наук та програмної інженерії",
            "Іваненко В.В.", 1500);   // декан – умовні дані

        arr[2] = new Department(
            "Міжнародний науково-технічний університет імені академіка Юрія Бугая",
            "Київ", 1992,
            "Факультет комп’ютерних наук та програмної інженерії",
            "Іваненко В.В.", 1500,
            "Кафедра комп’ютерних наук та інженерії програмного забезпечення",
            "Одарущенко О.М.", 28);

        cout << "=== Ієрархія класів: Університет – Факультет – Кафедра ===\n\n";

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