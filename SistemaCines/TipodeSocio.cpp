#include "TipodeSocio.h"
using namespace SistemaCinesModel;
TipodeSocio::TipodeSocio() {

}

TipodeSocio::TipodeSocio(int codigo, String^ usuario, String^ contrasena, String^ fechaEmision, String^ fechaVencimiento, String^ claseSocio) {
	this->codigo=codigo;
	this->usuario=usuario;
	this->contrasena=contrasena;
	this->fechaEmision=fechaEmision;
	this->fechaVencimiento=fechaVencimiento;
	this->claseSocio=claseSocio;
}