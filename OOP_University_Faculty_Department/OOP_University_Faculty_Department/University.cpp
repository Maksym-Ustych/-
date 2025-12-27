#include "University.h"
using namespace std;

University::University(string n, string c, int y)
    : name(n), city(c), foundedYear(y) {
}

void University::show() const {
    cout << "Університет" << endl;
    cout << "Назва: " << name << endl;
    cout << "Місто: " << city << endl;
    cout << "Рік заснування: " << foundedYear << endl << endl;
}

University::~University() {}
