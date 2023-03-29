#include "Productos.h"

using namespace SistemaCinesModel;

Productos::Productos() {

}

Productos::Productos(int codigo, String^ nombre, String^ fechaVencimiento, String^ fechaEmision, String^ tipodeProducto, int stock, int precio) {
	this->codigo = codigo;
	this->nombre = nombre;
	this->fechaVencimiento = fechaVencimiento;
	this->fechaEmision = fechaEmision;
	this->tipodeProducto = tipodeProducto;
	this->stock = stock;
	this->precio = precio;
}