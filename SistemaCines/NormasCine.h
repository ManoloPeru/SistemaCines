#pragma once

namespace SistemaCinesModel {
	using namespace System;

	public ref class NormasCine{
	public:
		String^ tipoNorma;
		String^ descripcion;
		String^ resolucionNormativa;
		String^ plandeAccion;
	public:
		NormasCine();
		NormasCine(String^ resolucionNormativa, String^ tipoNorma,String^ descripcion, String^ plandeAccion);
	};
}