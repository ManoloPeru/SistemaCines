#pragma once

namespace SistemaCinesController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SistemaCinesModel;

	public ref class NormasCineController2 {
	public:
		NormasCineController2();
		List<NormasCine^>^ buscarNormaCine(String^ tipoNorma);
		void eliminarNormaCine(String^ resolucionNormativa);
		List<NormasCine^>^ buscarAll();
		void escribirArchivo(List<NormasCine^>^ listaNormasCine);
		void agregarNorma(String^ resolucionNormativa, String^ tipoNorma, String^ descripcion, String^ plandeAccion);
		NormasCine^ buscarNormaCinexResolucion(String^ resolucionNormativa);
		void actualizarNorma(NormasCine^ objNormasCine);
	};

}