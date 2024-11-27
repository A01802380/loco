#ifndef PEDIDO_H
#define PEDIDO_H

#include <iostream>
#include <vector>
#include "Cliente.h"
#include "Platillo.h"

class Pedido {
private:
    int idPedido;
    Cliente miCliente;
    std::vector<Platillo*> platillos;
public:
    Pedido(int id, Cliente cli);
    void agregarPlatillo(Platillo* p);
    double getTotal() const;
    void display() const;
};

#endif // PEDIDO_H
