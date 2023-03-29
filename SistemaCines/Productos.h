#pragma once

namespace SistemaCinesModel {

	using namespace System;

	public ref class Productos {
		
	public:
		int codigo;
		String^ nombre;
		String^ fechaVencimiento;
		String^ fechaEmision;
		String^ tipodeProducto;
		int stock;
		int precio;

	public:
		Productos();
		Productos(int codigo, String^ nombre, String^ fechaVencimiento, String^ fechaEmision, String^ tipodeProducto, int stock, int precio);
	};
}