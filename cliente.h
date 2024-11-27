#ifndef CLIENTE_H
#define CLIENTE_H

#include <iostream>
#include <string>

class Cliente {
private:
    int idCliente;
    std::string nombre;
public:
    Cliente();
    Cliente(int id, std::string nom);
    void display() const;
};

#endif // CLIENTE_H
