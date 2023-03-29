#include "ClienteEntrada.h"
using namespace SistemaCinesModel;

ClienteEntrada::ClienteEntrada() {

}

ClienteEntrada::ClienteEntrada(String^ codigo, String^ nombreCliente, String^ apellidoCliente, String^ historialCompra, String^ pelicula) {
	this->codigo=codigo;
	this->nombreCliente=nombreCliente;
	this->apellidoCliente=apellidoCliente;
	this->historialCompra=historialCompra;
	this->pelicula=pelicula;
}