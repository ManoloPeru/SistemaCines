#pragma once

namespace SistemaCinesModel {
	
	using namespace System;
	
	public ref class CompraEntrada {
	
	private:
		String^ codigo;
		String^ fecha;
		double precio;
		int cantidad_asientos;
		int numero_asientos;
		String^ pelicula;

	public:
		CompraEntrada();
		CompraEntrada(String^ codigo, String^ fecha, double precio, int cantidad_asientos, int numero_asientos, String^ pelicula);

	};
}