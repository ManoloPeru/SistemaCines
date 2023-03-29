#pragma once

namespace SistemaCinesModel {
	using namespace System;
	public ref class Distribuidor {
	public:
		String^ ruc;
		int contacto;
		String^ razonSocial;
	public:
		Distribuidor();
		Distribuidor(String^ ruc, int contacto, String^ razonSocial);
	};
}