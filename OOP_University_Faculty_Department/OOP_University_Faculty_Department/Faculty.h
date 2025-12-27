#pragma once
#include "University.h"

class Faculty : public University {
protected:
    std::string facultyName;
    std::string dean;
    int students;

public:
    Faculty(std::string n, std::string c, int y,
        std::string fac, std::string d, int st);

    void show() const override;   // override Ч важливо
    ~Faculty() override;
};