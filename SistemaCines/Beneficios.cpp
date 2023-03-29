#include "Beneficios.h"
using namespace SistemaCinesModel;

Beneficios::Beneficios() {

}

Beneficios::Beneficios(int codigo, int puntos, String^ descuentos, String^ fechaInicio, String^ fechaFin, String^ beneficio1, String^ beneficio2, String^ beneficio3){
	this->codigo = codigo;
	this->puntos = puntos;
	this->descuentos = descuentos;
	this->fechaInicio = fechaInicio;
	this->fechaFin = fechaFin;
	this->beneficio1 = beneficio1;
	this->beneficio2 = beneficio2;
	this->beneficio3 = beneficio3;
}