#pragma once

namespace SistemaCinesModel {
	using namespace System;

	public ref class Proveedor {
	public:
		int codigo;
		String^ RazonSocial;
		String^ RUC;
		String^ producto;
		String^ telefono;
		String^ correo;
	public:
		Proveedor();
		Proveedor(int codigo, String^ RazonSocial, String^ RUC, String^ producto, String^ telefono, String^ correo);
	};
}