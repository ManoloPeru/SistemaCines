#pragma once

namespace SistemaCinesModel {
	using namespace System;
	public ref class Promociones {
	public:
		int codigo;
		String^ fechaInicio;
		String^ fechaFin;
		String^ restricciones;
		String^ tipoPromocion;
	public:
		Promociones();
		Promociones(int codigo, String^ fechaInicio, String^ fechaFin, String^ restricciones, String^ tipoPromocion);
	};
}
