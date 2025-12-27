#pragma once
#include <iostream>
#include <string>

class RotationFigure {
protected:
    std::string name;

public:
    RotationFigure(const std::string& n) : name(n) {}

    virtual void show() const {
        std::cout << "Фігура обертання: " << name << std::endl;
    }

    virtual ~RotationFigure() {}
};