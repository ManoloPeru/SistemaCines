#pragma once

namespace SistemaCinesModel {
	using namespace System;

	public ref class Salas {
	public:
		int codigo;
		String^ numerodeSala;
		String^ pelicula;
		int aforo;
		String^ cine;
	public:
		Salas();
		Salas(int codigo, String^ numerodeSala, String^ pelicula, int aforo, String^ cine);
	};
}
