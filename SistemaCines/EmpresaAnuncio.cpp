#include "EmpresaAnuncio.h"
using namespace SistemaCinesModel;

EmpresaAnuncio::EmpresaAnuncio() {

}

EmpresaAnuncio::EmpresaAnuncio(String^ ruc, String^ contacto, String^ razonSocial) {
	this->ruc = ruc;
	this->contacto = contacto;
	this->razonSocial = razonSocial;
}