#include "Cine.h"

using namespace SistemaCinesModel;

Cine::Cine() {

}

Cine::Cine(int codigo, String^ departamento, String^ provincia, String^ distrito, String^ direcci�n, String^ horaInicio, String^ horaFin) {
	this->codigo = codigo;
	this->departamento = departamento;
	this->provincia = provincia;
	this->distrito = distrito;
	this->direcci�n = direcci�n;
	this->horaInicio = horaInicio;
	this->horaFin = horaFin;

}