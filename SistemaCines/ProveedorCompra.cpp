#include "ProveedorCompra.h"

using namespace SistemaCinesModel;

ProveedorCompra::ProveedorCompra() {

}

ProveedorCompra::ProveedorCompra(String^ codigo, int cantCompra, double precio, String^ detalles) {
	this->codigo = codigo;
	this->cantCompra = cantCompra;
	this->precio = precio;
	this->detalles = detalles;
}