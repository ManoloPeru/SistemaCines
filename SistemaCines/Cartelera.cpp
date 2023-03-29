#include "Cartelera.h"

using namespace SistemaCinesModel;

Cartelera::Cartelera() {

}

Cartelera::Cartelera(int codigo, String^ fechaInicio, String^ fechaFin, Pelicula^ listadePeliculas) {
	
	this->codigo = codigo;
	this->listadePeliculas = listadePeliculas;
	this->fechaInicio = fechaInicio;
	this->fechaFin = fechaFin;
}