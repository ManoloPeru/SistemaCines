#pragma once

namespace SistemaCinesModel {
	using namespace System;

	public ref class Proyeccion {
	public:
		int codigo;
		String^ pelicula;
		int sala;
		DateTime HoraFecha;
	public:
		Proyeccion();
		Proyeccion(int codigo, String^ pelicula, int  sala, DateTime HoraFecha);
	};
}
