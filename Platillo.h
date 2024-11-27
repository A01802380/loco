#ifndef PLATILLO_H
#define PLATILLO_H

#include <iostream>
#include <string>

class Platillo {
protected:
    std::string nombre;
    double precio;
public:
    Platillo(std::string nom, double precio);
    virtual double getPrecio() const;
    virtual void display() const;
};

#endif // PLATILLO_H
