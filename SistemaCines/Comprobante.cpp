#include "Comprobante.h"

using namespace SistemaCinesModel;

Comprobante::Comprobante() {

}

Comprobante::Comprobante(DateTime fechahora, String^ nombreCliente, String^ DocIdent, String^ mododepago, int cantidad, String^ descripcion, double importe) {
	this->fechahora = fechahora;
	this->nombreCliente = nombreCliente;
	this->DocIdent = DocIdent;
	this->mododepago = mododepago;
	this->cantidad = cantidad;
	this->descripcion = descripcion;
	this->importe = importe;
}

