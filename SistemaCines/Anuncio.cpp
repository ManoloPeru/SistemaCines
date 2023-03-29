#include "Anuncio.h"
using namespace SistemaCinesModel;

Anuncio::Anuncio() {

}

Anuncio::Anuncio(int idAnuncio, String^ duracion, String^ tipo, String^ fechaInicio, String^ fechaFin, String^ contenido, int importe) {
	this->duracion = duracion;
	this->fechaInicio = fechaInicio;
	this->fechaFin = fechaFin;
	this->tipo = tipo;
	this->importe = importe;
	this->contenido = contenido;
	this->idAnuncio = idAnuncio;
}