#pragma once

namespace SistemaCinesController {
	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SistemaCinesModel;

	public ref class ButacasController3 {
	public:
		ButacasController3();

		void ActualizarButacasxAux(int codigoProyeccion,int  auxA1, int auxA2, int auxA3, int auxA4, int auxA5, int auxA6, int auxA7, int auxA8, int auxA9, int auxA10);
		List<ButacasCliente^>^ buscarAll();
		void escribirArchivo(List<ButacasCliente^>^ listaButacas);
		ButacasCliente^ BuscarButacasxCodigo(int codigoProyeccion);
	};


}