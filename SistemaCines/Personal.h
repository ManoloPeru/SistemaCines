#pragma once

namespace SistemaCinesModel {

	using namespace System;

	public ref class Personal {

	public:
		int codigo;
		String^ nombre;
		String^ apellido;
		String^ correo;
		String^ contrase�a;
		String^ tipodePersona;

	public:
		Personal();
		Personal(int codigo, String^ nombre, String^ apellido, String^ correo, String^ contrase�a, String^ tipodePersona);

	};
}
