#pragma once

namespace SistemaCinesController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SistemaCinesModel;

	public ref class AnuncioController {
		public:
			AnuncioController();
			List<Anuncio^>^ buscarAnuncios(String^ tipo);
			void eliminarAnuncio(int codigo);
			List<Anuncio^>^ buscarAll();
			void escribirArchivo(List<Anuncio^>^ listaAnuncios);
			void agregarNuevoAnuncioAnuncio(int idAnuncio, String^ duracion, String^ tipo, String^ fechaInicio, String^ fechaFin, String^ contenido, int importe);
			Anuncio^ buscarAnuncioxCodigo(int id);
			void actualizarAnuncio(Anuncio^ objAnuncio);
	};

}