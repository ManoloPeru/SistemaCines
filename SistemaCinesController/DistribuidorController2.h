#pragma once

namespace SistemaCinesController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SistemaCinesModel;

	public ref class DistribuidorController2 {
	public:
		DistribuidorController2();
		List<Distribuidor^>^ buscarDistribuidor(String^ ruc, String^ contacto, String^ razonSocial);
		void eliminarDistribuidor(String^ ruc);
		List<Distribuidor^>^ buscarAll();
		void escribirArchivo(List<Distribuidor^>^ listaDistribuidores);
		void agregarDistribuidor(String^ ruc, int contacto, String^ razonSocial);
		Distribuidor^ buscarDistribuidorxRuc(String^ ruc);
		void actualizarDistribuidor(Distribuidor^ objDistribuidor);
	};

}