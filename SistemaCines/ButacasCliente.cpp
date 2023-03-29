#include "ButacasCliente.h"

using namespace SistemaCinesModel;

ButacasCliente::ButacasCliente() {

}
/*
Butacas::Butacas(int salaCodigo, DateTime horarioButacas, int butaca1numerobutaca, int estado) {
	this->salaCodigo = salaCodigo;
	this->horarioButacas = horarioButacas;
	this->numerobutaca = numerobutaca;
	this->estado = estado;
}
*/

ButacasCliente::ButacasCliente(int CodigoProyeccion, int butaca1, int butaca2, int butaca3, int butaca4, int butaca5, int butaca6, int butaca7, int butaca8, int butaca9, int butaca10) {
	this->CodigoProyeccion = CodigoProyeccion;
	this->butaca1 = butaca1;
	this->butaca2 = butaca2;
	this->butaca3 = butaca3;
	this->butaca4 = butaca4;
	this->butaca5 = butaca5;
	this->butaca6 = butaca6;
	this->butaca7 = butaca7;
	this->butaca8 = butaca8;
	this->butaca9 = butaca9;
	this->butaca10 = butaca10;
}

