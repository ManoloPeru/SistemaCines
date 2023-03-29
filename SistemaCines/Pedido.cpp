#include "Pedido.h"

using namespace SistemaCinesModel;

Pedido::Pedido() {

}

Pedido::Pedido(String^ codigo, String^ fecha, double precio, String^ comidas) {
	this->codigo = codigo;
	this->fecha = fecha;
	this->precio = precio;
	this->comidas = comidas;
}