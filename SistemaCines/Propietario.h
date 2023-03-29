#pragma once
using namespace System;

namespace SistemaCinesModel {
	public ref class Propietario {
	public:
		String^ ruc;
		String^ razonSocial;
		String^ contacto;
		
	public:
		Propietario();
		Propietario(String^ ruc, String^ razonSocial, String^ contacto);

	};


}
