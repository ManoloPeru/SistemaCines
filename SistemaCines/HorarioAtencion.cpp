#include "HorarioAtencion.h"

using namespace SistemaCinesModel;

HorarioAtencion::HorarioAtencion() {

}

HorarioAtencion::HorarioAtencion(DateTime HoraApertura, DateTime HoraCierre, String^ diasAtencion) {

	this->HoraApertura = HoraApertura;
	this->HoraCierre = HoraCierre;
	this->diasAtencion = diasAtencion;
}