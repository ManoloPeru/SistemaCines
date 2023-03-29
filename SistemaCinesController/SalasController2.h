#pragma once

namespace SistemaCinesController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SistemaCinesModel;

	public ref class SalasController2 {
	public:
		SalasController2();
		List<Salas^>^ buscarSala(String^ numerodeSala, String^ cine);
		void eliminarSala(int codigo);
		List<Salas^>^ buscarAll();
		void escribirArchivo(List<Salas^>^ listaSalas);
	};

}