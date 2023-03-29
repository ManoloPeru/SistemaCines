#pragma once

namespace SistemaCinesController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SistemaCinesModel;

	public ref class ResenasController {
	public:
		ResenasController();
		List<Resena^>^ buscarResena(String^ autor);
		void eliminarResena(int codigo);
		List<Resena^>^ buscarAll();
		void escribirArchivo(List<Resena^>^ listaResenas);
		void agregarResena(int codigo, String^ autor, String^ correo, String^ descripcion);
		Resena^ buscarResenaxCodigo(int codigo);
		void actualizarResena(Resena^ objResena);
	};

}