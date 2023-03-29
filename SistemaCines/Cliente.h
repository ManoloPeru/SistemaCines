#pragma once

using namespace System;

namespace SistemaCinesModel {
	
	public ref class Cliente {
	
	public:
		int codigo;
		String^ nombre;
		String^ apellidoPaterno;
		String^ apellidoMaterno;
		String^ tipoDocumento;
		String^ nroDocumento;
		String^ correo;
		String^ celular;
	public:
		Cliente();
		Cliente(int codigo, String^ nombre, String^ apellidoPaterno,  String^ apellidoMaterno, String^ tipoDocumento, String^ nroDocumento, String^ correo, String^ celular);
	};
}
