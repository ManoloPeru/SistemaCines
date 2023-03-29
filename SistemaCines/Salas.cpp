#include "Salas.h"

using namespace SistemaCinesModel;

Salas::Salas() {

}

Salas::Salas(int codigo, String^ numerodeSala, String^ pelicula, int aforo, String^ cine) {
	this->codigo = codigo;
	this->numerodeSala = numerodeSala;
	this->pelicula = pelicula;
	this->aforo = aforo;
	this->cine = cine;
}