#pragma once
#include "RotationFigure.h"
#include <cmath>

// щоб M_PI точно працювало у Visual Studio
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

class Cone : public RotationFigure {
    double r;  // радіус основи
    double h;  // висота

public:
    Cone(double radius, double height)
        : RotationFigure("Конус"), r(radius), h(height) {
    }

    double volume() const {
        return (M_PI * r * r * h) / 3.0;
    }

    double area() const {
        double l = std::sqrt(r * r + h * h);   // твірна
        return M_PI * r * (r + l);             // повна площа
    }

    void show() const override {
        std::cout << "Фігура обертання: " << name << std::endl;
        std::cout << "Радіус r: " << r << std::endl;
        std::cout << "Висота h: " << h << std::endl;
        std::cout << "Об’єм V: " << volume() << std::endl;
        std::cout << "Площа поверхні S: " << area() << std::endl << std::endl;
    }

    ~Cone() override {}
};