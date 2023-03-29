#include "Proveedor.h"

using namespace SistemaCinesModel;

Proveedor::Proveedor() {

}

Proveedor::Proveedor(int codigo, String^ RazonSocial, String^ RUC, String^ producto, String^ telefono, String^ correo) {
	this->codigo = codigo;
	this->RazonSocial = RazonSocial;
	this->RUC = RUC;
	this->producto = producto;
	this->telefono = telefono;
	this->correo = correo;
}