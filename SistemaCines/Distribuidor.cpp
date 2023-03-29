#include "Distribuidor.h"
using namespace SistemaCinesModel;

Distribuidor::Distribuidor() {

}

Distribuidor::Distribuidor(String^ ruc, int contacto, String^ razonSocial) {
	this->ruc = ruc;
	this->contacto=contacto;
	this-> razonSocial=razonSocial;
}