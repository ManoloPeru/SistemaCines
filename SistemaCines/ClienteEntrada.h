#pragma once

namespace SistemaCinesModel {
	using namespace System;
	public ref class ClienteEntrada {
	private:
		String^ codigo;
		String^ nombreCliente;
		String^ apellidoCliente;
		String^ historialCompra;
		String^ pelicula;
	public:
		ClienteEntrada();
		ClienteEntrada(String^ codigo, String^ nombreCliente, String^ apellidoCliente, String^ historialCompra, String^ pelicula);
	};
}
