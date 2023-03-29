#include "DetalleComprobante.h"

using namespace SistemaCinesModel;

DetalleComprobante::DetalleComprobante() {

}

DetalleComprobante::DetalleComprobante(String^ codigoQR, String^ detalles, double precio) {
	this->codigoQR = codigoQR;
	this->detalles = detalles;
	this->precio = precio;
}