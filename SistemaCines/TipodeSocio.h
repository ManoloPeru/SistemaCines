#pragma once
#include "Beneficios.h"

namespace SistemaCinesModel {
	using namespace System;
	using namespace System::Collections::Generic;
	public ref class TipodeSocio {
	public:
		int codigo;
		String^ usuario;
		String^ contrasena;
		String^ fechaEmision;
		String^ fechaVencimiento;
		String^ claseSocio;
	public:
		TipodeSocio();
		TipodeSocio(int codigo, String^ usuario, String^ contrasena, String^ fechaEmision, String^ fechaVencimiento, String^ claseSocio);
	};
}
