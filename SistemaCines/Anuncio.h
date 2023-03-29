#pragma once

namespace SistemaCinesModel {
	using namespace System;
	public ref class Anuncio {
	public:
		int idAnuncio;
		String^ tipo;
		String^ duracion;
		String^ fechaInicio;
		String^ fechaFin;
		String^ contenido;
		int importe;
	public:
		Anuncio();
		Anuncio(int idAnuncio, String^ duracion, String^ tipo, String^ fechaInicio, String^ fechaFin, String^ contenido, int importe);
	};
}