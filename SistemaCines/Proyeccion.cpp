#include "Proyeccion.h"

using namespace SistemaCinesModel;

Proyeccion::Proyeccion() {

}

Proyeccion::Proyeccion(int codigo, String^ pelicula, int  sala, DateTime HoraFecha) {
	this->codigo = codigo;
	this->pelicula = pelicula;
	this->sala = sala;
	this->HoraFecha = HoraFecha;
}