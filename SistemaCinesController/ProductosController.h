#pragma once

namespace SistemaCinesController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SistemaCinesModel;

	public ref class ProductosController {
	public:
		ProductosController();
		Productos^ buscarProductoxCodigo(int codigo);
		List<Productos^>^ buscarProducto(String^ nombre, String^ tipoNorma);
		void eliminarProducto(String^ codigo);
		List<Productos^>^ buscarAll();
		void escribirArchivo(List<Productos^>^ listaProductos);
	};

}