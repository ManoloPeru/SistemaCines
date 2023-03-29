#include "Cliente.h"

using namespace SistemaCinesModel;

Cliente::Cliente() {

}

Cliente::Cliente(int codigo, String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ tipoDocumento, String^ nroDocumento, String^ correo, String^ celular) {
	this->codigo = codigo;
	this->nombre = nombre;
	this->apellidoPaterno = apellidoPaterno;
	this->apellidoMaterno = apellidoMaterno;
	this->tipoDocumento = tipoDocumento;
	this->nroDocumento = nroDocumento;
	this->correo = correo;
	this->celular = celular;

}