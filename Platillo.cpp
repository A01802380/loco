#include "Platillo.h"

Platillo::Platillo(std::string nom, double precio) : nombre(nom), precio(precio) {}

double Platillo::getPrecio() const {
    return precio;
}

void Platillo::display() const {
    std::cout << nombre << " y cuesta: " << precio << " pesos" << std::endl;
}
