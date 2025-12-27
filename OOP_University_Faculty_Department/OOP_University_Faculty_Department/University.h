#pragma once
#include <iostream>
#include <string>

class University {
protected:
    std::string name;
    std::string city;
    int foundedYear;

public:
    University(std::string n, std::string c, int y);

    virtual void show() const;   // для поліморфізму
    virtual ~University();       // важливо: virtual деструктор
};