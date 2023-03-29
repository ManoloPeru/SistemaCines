#pragma once

namespace SistemaCinesModel {

	using namespace System;

	public ref class Personal {

	public:
		int codigo;
		String^ nombre;
		String^ apellido;
		String^ correo;
		String^ contraseña;
		String^ tipodePersona;

	public:
		Personal();
		Personal(int codigo, String^ nombre, String^ apellido, String^ correo, String^ contraseña, String^ tipodePersona);

	};
}
