#pragma once

namespace SistemaCinesController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SistemaCinesModel;

	public ref class ProductosController2 {
	public:
		ProductosController2();
		List<Productos^>^ buscarProducto(String^ nombre, String^ tipoNorma);
		void eliminarProducto(int codigo);
		List<Productos^>^ buscarAll();
		void escribirArchivo(List<Productos^>^ listaProductos);
		Productos^ buscarProductoxCodigo(int codigo);
		void agregarProducto(int codigo, String^ nombre, String^ fechaVencimiento, String^ fechaEmision, String^ tipodeProducto, int stock, int precio);
		Productos^ buscarProductoxCodigo1(int codigo);
		void actualizarProducto(Productos^ objProd);
	};

}