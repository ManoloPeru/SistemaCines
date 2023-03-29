#include "DetallePedidoController.h"

using namespace SistemaCinesController;
using namespace System::IO;

DetallePedidoController::DetallePedidoController() {

}

void DetallePedidoController::escribirArchivo(List<DetallePedido^>^ listaPedido) {

	array<String^>^ lineasArchivo = gcnew array<String^>(listaPedido->Count);
	for (int i = 0; i < listaPedido->Count; i++) {
		DetallePedido^ objPedido = listaPedido[i];
		lineasArchivo[i] = objPedido->codigo + ";" + objPedido->productos + ";" + objPedido->cantPedidos + ";" + objPedido->precioUnit;
	}
	File::WriteAllLines("pedidoDetalles.txt", lineasArchivo);
}
void DetallePedidoController::agregarPedido(int codigoPedido, String^ nombrePedido, int cantidadSeleccionada,int precio) {

	List<DetallePedido^>^ listaPedido = buscarAll();
	DetallePedido^ objPedido = gcnew DetallePedido(codigoPedido, nombrePedido, cantidadSeleccionada, precio);
		listaPedido->Add(objPedido);
		escribirArchivo(listaPedido);
}

List<DetallePedido^>^ DetallePedidoController::buscarAll() {

	List<DetallePedido^>^ listaPedidos = gcnew List<DetallePedido^>();
	array<String^>^ lineas = File::ReadAllLines("pedidoDetalles.txt");
	String^ separadores = ";";

	for each (String ^ lineaPedido in lineas) {
		array<String^>^ datos = lineaPedido->Split(separadores->ToCharArray());

		int codigo = Convert::ToInt32(datos[0]);
		String^ nombreproductos = datos[1];
		int cant = Convert::ToInt32(datos[2]);
		int precioU= Convert::ToInt32(datos[3]);
		DetallePedido^ objpedido = gcnew DetallePedido(codigo, nombreproductos, cant, precioU);
		listaPedidos->Add(objpedido);

	}
	return listaPedidos;

}

void DetallePedidoController::eliminarALL() {

	List<DetallePedido^>^ listaPedido = buscarAll();

	
	for (int i = 0; i < listaPedido->Count; i++) {

		listaPedido->RemoveAt(i);
	}
	escribirArchivo(listaPedido);
}