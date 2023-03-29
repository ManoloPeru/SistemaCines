#pragma once

namespace SistemaCinesModel {
	
	using namespace System;
	using namespace System::Collections::Generic;

	public ref class Cine {
	public:
		int codigo;
		String^ departamento;
		String^ provincia;
		String^ distrito;
		String^ dirección;
		String^ horaInicio;
		String^ horaFin;

	public:
		Cine();
		Cine(int codigo, String^ departamento, String^ provincia, String^ distrito, String^ dirección, String^ horaInicio, String^ horaFin);
	};
}