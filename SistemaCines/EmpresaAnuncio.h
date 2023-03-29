#pragma once

namespace SistemaCinesModel {
	using namespace System;
	public ref class EmpresaAnuncio {
	public:
		String^ ruc;
		String^ contacto;
		String^ razonSocial;
	public:
		EmpresaAnuncio();
		EmpresaAnuncio(String^ ruc, String^ contacto, String^ razonSocial);
	};
}