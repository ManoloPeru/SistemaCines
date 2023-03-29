#include "Reclamos.h"
using namespace SistemaCinesModel;

Reclamos::Reclamos() {

}

Reclamos::Reclamos(String^ codigo, String^ tipodeBien, String^ tipodeReclamo, String^ detalle, String^ pedido, String^ fecha) {
	this->codigo=codigo;
	this->tipodeBien=tipodeBien;
	this->tipodeReclamo=tipodeReclamo;
	this->detalle=detalle;
	this->pedido=pedido;
	this->fecha = fecha;
}