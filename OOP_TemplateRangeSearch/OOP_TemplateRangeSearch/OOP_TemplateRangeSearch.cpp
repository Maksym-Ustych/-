#include <iostream>
#include <vector>
#include <string>
#include <locale>

using namespace std;

// ===============================
// Шаблонна функція пошуку елементів
// у діапазоні [low; high]
// ===============================
template <typename T>
vector<T> findInRange(const vector<T>& arr, T low, T high) {
    vector<T> result;

    for (const T& el : arr) {
        if (el >= low && el <= high) {
            result.push_back(el);
        }
    }
    return result;
}

// ===============================
// Шаблонна функція виведення вектора
// ===============================
template <typename T>
void printVector(const vector<T>& v) {
    if (v.empty()) {
        cout << "Немає елементів у заданому діапазоні." << endl;
        return;
    }

    for (const T& el : v) {
        cout << el << " ";
    }
    cout << endl;
}

int main() {
    // Коректне відображення української мови
    setlocale(LC_ALL, "");
    system("chcp 65001 > nul");

    // ===== Перевірка для int =====
    vector<int> arrInt = { 1, 5, 10, 20, 50, 100 };
    cout << "int, діапазон [5; 30]:" << endl;
    printVector(findInRange(arrInt, 5, 30));
    cout << endl;

    // ===== Перевірка для double =====
    vector<double> arrDouble = { 1.1, 5.5, 7.2, 12.8, 30.3 };
    cout << "double, діапазон [5.0; 15.0]:" << endl;
    printVector(findInRange(arrDouble, 5.0, 15.0));
    cout << endl;

    // ===== Перевірка для char =====
    vector<char> arrChar = { 'a', 'b', 'c', 'd', 'x', 'z' };
    cout << "char, діапазон ['b'; 'x']:" << endl;
    printVector(findInRange(arrChar, 'b', 'x'));
    cout << endl;

    // ===== Перевірка для string =====
    vector<string> arrString = { "apple", "banana", "car", "desk", "zoo" };
    cout << "string, діапазон [\"banana\"; \"desk\"]:" << endl;
    printVector(findInRange(arrString, string("banana"), string("desk")));
    cout << endl;

    return 0;
}