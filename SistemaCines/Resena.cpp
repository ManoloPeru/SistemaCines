#include "Resena.h"

using namespace SistemaCinesModel;

Resena::Resena() {
}

Resena::Resena(int codigo, String^ autor, String^ correo, String^ descripcion) {
	this->codigo = codigo;
	this->autor = autor;
	this->correo = correo;
	this->descripcion = descripcion;
}