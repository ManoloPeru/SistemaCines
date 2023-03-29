#pragma once

namespace SistemaCinesModel {
	using namespace System;
	public ref class Reclamos {
	private:
		String^ codigo;
		String^ tipodeBien;
		String^ tipodeReclamo;
		String^ detalle;
		String^ pedido;
		String^ fecha;
	public:
		Reclamos();
		Reclamos(String^ codigo, String^ tipodeBien, String^ tipodeReclamo, String^ detalle, String^ pedido, String^ fecha);
	};
}