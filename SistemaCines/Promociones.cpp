#include "Promociones.h"
using namespace SistemaCinesModel;

Promociones::Promociones() {

}

Promociones::Promociones(int codigo, String^ fechaInicio, String^ fechaFin, String^ restricciones, String^ tipoPromocion) {
	this->codigo = codigo;
	this->fechaInicio = fechaInicio;
	this->fechaFin = fechaFin;
	this->restricciones = restricciones;
	this->tipoPromocion = tipoPromocion;
}