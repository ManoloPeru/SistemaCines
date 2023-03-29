#pragma once

namespace SistemaCinesController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SistemaCinesModel;

	public ref class PeliculasController2 {
	public:
		PeliculasController2();
		List<Pelicula^>^ buscarPelicula(String^ nombre, String^ genero);
		void eliminarPelicula(String^ nombre);
		List<Pelicula^>^ buscarAll();
		void escribirArchivo(List<Pelicula^>^ listaPeliculas);
		Pelicula^ buscarPeliculaxCodigo(int codigo);
		void actualizarPelicula(Pelicula^ objPelicula);
		void agregarPelicula(int codigo, String^ nombre, String^ genero, String^ fechaestreno, String^ restriccion, String^ sinopsis, String^ duracion);
	};

}