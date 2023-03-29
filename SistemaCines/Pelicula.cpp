#include "Pelicula.h"

using namespace SistemaCinesModel;

Pelicula::Pelicula() {

}

Pelicula::Pelicula(int codigo, String^ nombre, String^ genero, String^ fechaestreno, String^ restriccion, String^ sinopsis, String^ duracion) {
	this->codigo = codigo; 
	this->nombre = nombre;
	this->fechaestreno = fechaestreno;
	this->duracion = duracion;
	this->genero = genero;
	this->restriccion = restriccion;
	this->sinopsis = sinopsis;
}