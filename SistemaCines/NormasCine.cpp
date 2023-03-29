#include "NormasCine.h"

using namespace SistemaCinesModel;

NormasCine::NormasCine() {

}

NormasCine::NormasCine(String^ resolucionNormativa, String^ tipoNorma, String^ descripcion, String^ plandeAccion) {

	this->tipoNorma = tipoNorma;
	this->descripcion = descripcion;
	this->resolucionNormativa = resolucionNormativa;
	this->plandeAccion = plandeAccion;
}