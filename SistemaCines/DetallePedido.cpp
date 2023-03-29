#include "DetallePedido.h"

using namespace SistemaCinesModel;

DetallePedido::DetallePedido() {

}

DetallePedido::DetallePedido(int codigo, String^ productos, int cantPedidos, int precioUnit) {
	this->codigo = codigo;
	this->productos = productos;
	this->cantPedidos = cantPedidos;
	this->precioUnit = precioUnit;
}