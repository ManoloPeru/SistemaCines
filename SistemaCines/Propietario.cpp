#include "Propietario.h"

using namespace SistemaCinesModel;

Propietario::Propietario() {

}

Propietario::Propietario(String^ ruc, String^ razonSocial, String^ contacto) {
	this->ruc = ruc;
	this->razonSocial = razonSocial;
	this->contacto = contacto;

}

