#include "Cliente.h"

Cliente::Cliente() : idCliente(0), nombre("") {}

Cliente::Cliente(int id, std::string nom) : idCliente(id), nombre(nom) {}

void Cliente::display() const {
    std::cout << "Cliente: " << nombre << " con id: " << idCliente << std::endl;
}
