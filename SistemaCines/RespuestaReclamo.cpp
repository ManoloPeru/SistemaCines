#include "RespuestaReclamo.h"
using namespace SistemaCinesModel;

RespuestaReclamo::RespuestaReclamo() {

}

RespuestaReclamo::RespuestaReclamo(int codigo, int fecha, String^ tipodeBien, String^ tipodeReclamo, String^ detalle, bool veredicto) {
	this->codigo = codigo;
	this->fecha = fecha;
	this->tipodeBien = tipodeBien;
	this->tipodeReclamo = tipodeReclamo;
	this->detalle = detalle;
	this->veredicto = veredicto;
}