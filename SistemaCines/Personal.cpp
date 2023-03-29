#include "Personal.h"

using namespace SistemaCinesModel;

Personal::Personal() {

}

Personal::Personal(int codigo, String^ nombre, String^ apellido, String^ correo, String^ contraseña, String^ tipodePersona){
	this->codigo = codigo;
	this->nombre = nombre;
	this->apellido = apellido;
	this->correo = correo;
	this->contraseña = contraseña;
	this->tipodePersona = tipodePersona;
}