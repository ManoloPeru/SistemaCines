#include "ProyeccionCliente.h"

using namespace SistemaCinesModel;

ProyeccionCliente::ProyeccionCliente() {

}

ProyeccionCliente::ProyeccionCliente(int codigo,String^ pelicula, int  sala, int butaca, String^ hora, String^ fecha) {
	this->codigo = codigo;
	this->pelicula = pelicula;
	this->sala = sala;
	this->butaca = butaca;
	this->hora = hora;
	this->fecha = fecha;

}