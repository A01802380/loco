#include <iostream>
#include "Cliente.h"
#include "Platillo.h"
#include "Pedido.h"

int main() {
    Cliente cliente(101, "El Paisa");

    Platillo platillo1("Hamburguesa sencilla", 100);
    Platillo platillo2("Hamburguesa doble", 115);
    Platillo platillo3("Hamburguesa triple", 130);
    Platillo platillo4("Segundo Platillo", 120);
    Platillo platillo5("Segundo Platillo (b)", 144);
    Platillo platillo6("Tercer Platillo", 105);
    Platillo platillo7("Tercer Platillo (b)", 70);

    Pedido pedido(563, cliente);
    pedido.agregarPlatillo(&platillo1);
    pedido.agregarPlatillo(&platillo2);
    pedido.agregarPlatillo(&platillo3);
    pedido.agregarPlatillo(&platillo4);
    pedido.agregarPlatillo(&platillo5);
    pedido.agregarPlatillo(&platillo6);
    pedido.agregarPlatillo(&platillo7);

    pedido.display();

    return 0;
}
