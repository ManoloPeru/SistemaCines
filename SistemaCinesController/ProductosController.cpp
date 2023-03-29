#include "ProductosController.h"

using namespace SistemaCinesController;
using namespace System::IO;

ProductosController::ProductosController() {

}

List<Productos^>^ ProductosController::buscarProducto(String^ nombre, String^ tipoProducto) {
	List<Productos^>^ listaProductosEncontrados = gcnew List<Productos^>();
	array<String^>^ lineas = File::ReadAllLines("productos.txt");
	String^ separadores = ";";
	for each (String ^ lineaProducto in lineas) {
		array<String^>^ datos = lineaProducto->Split(separadores->ToCharArray());
		String^ codigoProducto = datos[0];
		String^ nombreProducto = datos[1];
		String^ FechaEmision = datos[2];
		String^ FechaVencimiento = datos[3];
		String^ tipodeProducto = datos[4];
		int stockProducto = Convert::ToInt32(datos[5]);
		int precioProducto = Convert::ToInt32(datos[6]);
		if (tipodeProducto->Contains(tipoProducto)&& nombreProducto->Contains(nombre)) {
			Productos^ objProductos = gcnew Productos(Convert::ToInt32(codigoProducto), nombreProducto, FechaEmision, FechaVencimiento, tipodeProducto, stockProducto, precioProducto);
			listaProductosEncontrados->Add(objProductos);
		}
	}
	return listaProductosEncontrados;
}
Productos^ ProductosController::buscarProductoxCodigo(int codigo) {
	Productos^ ProductoEncontrado = nullptr;
	array<String^>^ lineas = File::ReadAllLines("productos.txt");
	String^ separadores = ";";
	for each (String ^ lineaProducto in lineas) {
		array<String^>^ datos = lineaProducto->Split(separadores->ToCharArray());
		int codigoProducto = Convert::ToInt32(datos[0]);
		String^ nombreProducto = datos[1];
		String^ FechaEmision = datos[2];
		String^ FechaVencimiento = datos[3];
		String^ tipodeProducto = datos[4];
		int stockProducto = Convert::ToInt32(datos[5]);
		int precioProducto = Convert::ToInt32(datos[6]);
		if (codigo == codigoProducto) {
			ProductoEncontrado = gcnew Productos(Convert::ToInt32(codigoProducto), nombreProducto, FechaEmision, FechaVencimiento, tipodeProducto, stockProducto, precioProducto);
		}
	}
	return ProductoEncontrado;
}

List<Productos^>^ ProductosController::buscarAll() {
	List<Productos^>^ listaProductosEncontrados = gcnew List<Productos^>();
	array<String^>^ lineas = File::ReadAllLines("productos.txt");
	String^ separadores = ";";
	for each (String ^ lineaProducto in lineas) {
		array<String^>^ datos = lineaProducto->Split(separadores->ToCharArray());
		String^ codigoProducto = datos[0];
		String^ nombreProducto = datos[1];
		String^ FechaEmision = datos[2];
		String^ FechaVencimiento = datos[3];
		String^ tipodeProducto = datos[4];
		int stockProducto = Convert::ToInt32(datos[5]);
		int precioProducto = Convert::ToInt32(datos[6]);
		Productos^ objProductos = gcnew Productos(Convert::ToInt32(codigoProducto), nombreProducto, FechaEmision, FechaVencimiento, tipodeProducto, stockProducto, precioProducto);
		listaProductosEncontrados->Add(objProductos);
	}
	return listaProductosEncontrados;
}

void ProductosController::eliminarProducto(String^ codigo) {
	List<Productos^>^ listaProductos = buscarAll();
	for (int i = 0; i < listaProductos->Count; i++) {
		if (listaProductos[i]->codigo == Convert::ToInt32(codigo)) {
			listaProductos->RemoveAt(i);
			break;
		}
	}
	escribirArchivo(listaProductos);
}

void ProductosController::escribirArchivo(List<Productos^>^ listaProductos) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaProductos->Count);
	for (int i = 0; i < listaProductos->Count; i++) {
		Productos^ objtProductos = listaProductos[i];
		lineasArchivo[i] = objtProductos->codigo + ";" + objtProductos->nombre + ";" + objtProductos->fechaEmision + ";" + objtProductos->fechaEmision + ";" + objtProductos->tipodeProducto + ";" + objtProductos->stock;
	}
	File::WriteAllLines("productos.txt", lineasArchivo);
}