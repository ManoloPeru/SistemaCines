#include "LugaresdeAtencion.h"

using namespace SistemaCinesModel;

LugaresdeAtencion::LugaresdeAtencion() {

}

LugaresdeAtencion::LugaresdeAtencion(String^ nombre, int numerodePersonal) {
	this->nombre = nombre;
	this->numerodePersonal = numerodePersonal;
}