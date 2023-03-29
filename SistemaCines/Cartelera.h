#pragma once
#include "Pelicula.h"

namespace SistemaCinesModel {
	using namespace System;
	using namespace System::Collections::Generic;
	
	public ref class Cartelera {
	public:
		int codigo;
		
		String^ fechaInicio;
		String^ fechaFin;
		Pelicula^ listadePeliculas;

	public:
		Cartelera();
		Cartelera(int codigo, String^ fechaInicio, String^ fechaFin, Pelicula^ listadePeliculas);
	};
}