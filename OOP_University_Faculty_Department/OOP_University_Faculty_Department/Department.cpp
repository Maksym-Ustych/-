#include "Department.h"
using namespace std;

Department::Department(string n, string c, int y,
    string fac, string d, int st,
    string dep, string h, int t)
    : Faculty(n, c, y, fac, d, st),
    departmentName(dep), head(h), teachers(t) {
}

void Department::show() const {
    cout << "Кафедра" << endl;
    cout << "Університет: " << name << endl;
    cout << "Місто: " << city << endl;
    cout << "Рік заснування: " << foundedYear << endl;
    cout << "Факультет: " << facultyName << endl;
    cout << "Декан: " << dean << endl;
    cout << "К-сть студентів: " << students << endl;
    cout << "Кафедра: " << departmentName << endl;
    cout << "Зав. кафедри: " << head << endl;
    cout << "К-сть викладачів: " << teachers << endl << endl;
}

Department::~Department() {}