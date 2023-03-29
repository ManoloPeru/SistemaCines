#pragma once

namespace SistemaCinesController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SistemaCinesModel;

	public ref class EmpresaAnuncioController2 {
	public:
		EmpresaAnuncioController2();
		List<EmpresaAnuncio^>^ buscarEmpresaAnuncio(String^ ruc, String^ contacto, String^ razonSocial);
		void eliminarEmpresaAnuncio(String^ ruc);
		List<EmpresaAnuncio^>^ buscarAll();
		void escribirArchivo(List<EmpresaAnuncio^>^ listaEmpresasAnuncios);
		void agregarEmpresaAnuncio(String^ ruc, String^ contacto, String^ razonSocial);
		EmpresaAnuncio^ buscarEmpresaAnuncioxRuc(String^ ruc);
		void actualizarEmpresaAnuncio(EmpresaAnuncio^ objEmpresaAnuncio);
	};

}