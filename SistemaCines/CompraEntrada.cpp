#include "CompraEntrada.h"

using namespace SistemaCinesModel;

CompraEntrada::CompraEntrada() {
	
}

CompraEntrada::CompraEntrada(String^ codigo, String^ fecha, double precio, int cantidad_asientos, int numero_asientos, String^ pelicula) {
	this->codigo = codigo;
	this->fecha = fecha;
	this->precio = precio;
	this->cantidad_asientos = cantidad_asientos;
	this->numero_asientos = numero_asientos;
	this->pelicula = pelicula;
}