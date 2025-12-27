#pragma once
#include "Faculty.h"

class Department : public Faculty {
    std::string departmentName;
    std::string head;
    int teachers;

public:
    Department(std::string n, std::string c, int y,
        std::string fac, std::string d, int st,
        std::string dep, std::string h, int t);

    void show() const override;
    ~Department() override;
};