#pragma once

namespace SistemaCinesModel {
	
	using namespace System;

	public ref class Pedido {
	
	private:
		String^ codigo;
		String^ fecha;
		double precio;
		String^ comidas;

	public:
		Pedido();
		Pedido(String^ codigo, String^ fecha, double precio, String^ comidas);

	};
}