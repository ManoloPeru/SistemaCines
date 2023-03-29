#pragma once
namespace SistemaCinesController {
	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SistemaCinesModel;

	public ref class DetallePedidoController {
	public:
		DetallePedidoController();
		List<DetallePedido^>^ buscarAll();
		void escribirArchivo(List<DetallePedido^>^ listaPedido);
		void agregarPedido(int codigoPedido, String^ nombrePedido, int cantidadSeleccionada,int precio);
		void eliminarALL();
	};


}