#pragma once


namespace SistemaCinesModel {
	using namespace System;

	public ref class Resena {
	public:
		int codigo;
		String^ autor;
		String^ correo;
		String^ descripcion;
	public:
		Resena();
		Resena(int codigo, String^ autor, String^ correo, String^ descripcion);
	};
}
