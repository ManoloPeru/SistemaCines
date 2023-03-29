#pragma once

namespace SistemaCinesModel {
	using namespace System;

	public ref class DetalleComprobante {
	private:
		String^ codigoQR;
		String^ detalles;
		double precio;
	public:
		DetalleComprobante();
		DetalleComprobante(String^ codigoQR, String^ detalles, double precio);
	};
}