#include "Personal.h"

using namespace SistemaCinesModel;

Personal::Personal() {

}

Personal::Personal(int codigo, String^ nombre, String^ apellido, String^ correo, String^ contrase�a, String^ tipodePersona){
	this->codigo = codigo;
	this->nombre = nombre;
	this->apellido = apellido;
	this->correo = correo;
	this->contrase�a = contrase�a;
	this->tipodePersona = tipodePersona;
}