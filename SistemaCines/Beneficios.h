#pragma once

namespace SistemaCinesModel {
	using namespace System;
	public ref class Beneficios {
	public:
		int codigo;
		int puntos;
		String^ descuentos;
		String^ fechaInicio;
		String^ fechaFin;
		String^ beneficio1;
		String^ beneficio2;
		String^ beneficio3;
	public:
		Beneficios();
		Beneficios(int codigo, int puntos, String^ descuentos, String^ fechaInicio, String^ fechaFin, String^ beneficio1, String^ beneficio2, String^ beneficio3);
	};
}