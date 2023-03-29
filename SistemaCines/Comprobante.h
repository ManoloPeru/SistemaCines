#pragma once
using namespace System;

namespace SistemaCinesModel {
	public ref class Comprobante {
	public:
		DateTime fechahora;
		String^ nombreCliente;
		String^ DocIdent;
		String^ mododepago;
		int cantidad;
		String^ descripcion;
		double importe;
	public:
		Comprobante();
		Comprobante(DateTime fechahora, String^ nombreCliente, String^ DocIdent, String^ mododepago, int cantidad, String^ descripcion, double importe);

	};


}
