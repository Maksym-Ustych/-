#include "Faculty.h"
using namespace std;

Faculty::Faculty(string n, string c, int y,
    string fac, string d, int st)
    : University(n, c, y),
    facultyName(fac), dean(d), students(st) {
}

void Faculty::show() const {
    cout << "Факультет" << endl;
    cout << "Університет: " << name << endl;
    cout << "Місто: " << city << endl;
    cout << "Рік заснування: " << foundedYear << endl;
    cout << "Назва факультету: " << facultyName << endl;
    cout << "Декан: " << dean << endl;
    cout << "К-сть студентів: " << students << endl << endl;
}

Faculty::~Faculty() {}