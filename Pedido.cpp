#include "Pedido.h"

Pedido::Pedido(int id, Cliente cli) : idPedido(id), miCliente(cli) {}

void Pedido::agregarPlatillo(Platillo* p) {
    platillos.push_back(p);
}

double Pedido::getTotal() const {
    double total = 0;
    for (const auto& platillo : platillos) {
        total += platillo->getPrecio();
    }
    return total;
}

void Pedido::display() const {
    miCliente.display();
    std::cout << "Información del Pedido número " << idPedido << std::endl;
    int index = 1;
    for (const auto& platillo : platillos) {
        std::cout << index++ << ": ";
        platillo->display();
    }
    std::cout << "El costo total de tu orden es: " << getTotal() << " pesos" << std::endl;
}
