#pragma once

namespace SistemaCinesModel {
	using namespace System;

	public ref class ProveedorCompra {
	private:
		String^ codigo;
		int cantCompra;
		double precio;
		String^ detalles;
	public:
		ProveedorCompra();
		ProveedorCompra(String^ codigo, int cantCompra, double precio, String^ detalles);
	};
}