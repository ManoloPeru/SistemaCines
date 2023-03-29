#pragma once

namespace SistemaCinesModel {
	using namespace System;

	public ref class LugaresdeAtencion {
	public:
		String^ nombre;
		int numerodePersonal;
	public:
		LugaresdeAtencion();
		LugaresdeAtencion(String^ nombre,int numerodePersonal);
	};
}