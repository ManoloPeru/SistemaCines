#pragma once

namespace SistemaCinesModel {
	
	using namespace System;
	using namespace System::Collections::Generic;

	public ref class Pelicula {
	
	public:
		int codigo; 
		String^ nombre;
		String^ duracion;
		String^ genero;
		String^ fechaestreno;
		String^ restriccion;
		String^ sinopsis;
	
	public:
		Pelicula();
		Pelicula(int codigo,String^ nombre, String^ genero, String^ fechaestreno, String^ restriccion, String^ sinopsis, String^ duracion);
	};
}