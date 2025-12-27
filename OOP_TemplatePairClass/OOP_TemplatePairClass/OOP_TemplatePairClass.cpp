#include <iostream>
#include <locale>

using namespace std;

// Шаблон класу Pair (пара значень різних типів)
template <typename T1, typename T2>
class Pair {
private:
    T1 first;
    T2 second;

public:
    Pair(T1 a, T2 b) : first(a), second(b) {}

    T1 getFirst() const { return first; }
    T2 getSecond() const { return second; }

    void setFirst(T1 a) { first = a; }
    void setSecond(T2 b) { second = b; }

    void show() const {
        cout << "Перше значення: " << first << endl;
        cout << "Друге значення: " << second << endl;
    }
};

int main() {
    // Українська вивід (як ти просив — щоб не було кракозябр)
    setlocale(LC_ALL, "");
    system("chcp 65001 > nul");

    cout << "=== Шаблон класу Pair (пара чисел) ===\n\n";

    // 1) int + double
    Pair<int, double> p1(10, 3.14);
    cout << "Пара 1 (int + double):\n";
    p1.show();
    cout << endl;

    // 2) double + int
    Pair<double, int> p2(5.75, 20);
    cout << "Пара 2 (double + int):\n";
    p2.show();
    cout << endl;

    // 3) long + float
    Pair<long, float> p3(100000, 2.5f);
    cout << "Пара 3 (long + float):\n";
    p3.show();
    cout << endl;

    // 4) string + int (додатково, але норм для демонстрації шаблону)
    Pair<string, int> p4("Значення", 55);
    cout << "Пара 4 (string + int):\n";
    p4.show();
    cout << endl;

    return 0;
}