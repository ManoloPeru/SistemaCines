#pragma once

namespace SistemaCinesController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SistemaCinesModel;

	public ref class PromocionController {
	public:
		PromocionController();
		List<Promociones^>^ buscarPromocion(int codigo, String^ tipoPromocion);
		void eliminarPromocion(int idPromocion);
		List<Promociones^>^ buscarAll();
		void escribirArchivo(List<Promociones^>^ listaPromociones);
		void agregarNuevaPromocion(int codigo, String^ fechaInicio, String^ fechaFin, String^ restricciones, String^ tipoPromocion);
		Promociones^ buscarPromocionxCodigo(int codigo);
		void actualizarPromocion(Promociones^ objPromocion);
	};

}