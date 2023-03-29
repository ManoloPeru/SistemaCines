#pragma once

namespace SistemaCinesModel {
	using namespace System;

	public ref class ProyeccionCliente {
	public:
		int codigo;
		String^ pelicula;
		int  sala;
		int butaca;
		String^ hora;
		String^ fecha;
	public:
		ProyeccionCliente();
		ProyeccionCliente(int codigo,String^ pelicula, int  sala, int butaca, String^ hora, String^ fecha);
	};
}
