#pragma once

namespace SistemaCinesModel {
	using namespace System;

	public ref class DetallePedido {
	public:
		int codigo;
		String^ productos;
		int cantPedidos;
		int precioUnit;
	public:
		DetallePedido();
		DetallePedido(int codigo, String^ productos, int cantPedidos, int precioUnit);
	};
}