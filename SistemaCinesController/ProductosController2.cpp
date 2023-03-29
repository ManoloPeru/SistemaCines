#include "ProductosController2.h"

using namespace SistemaCinesController;
using namespace System::IO;

ProductosController2::ProductosController2() {

}

List<Productos^>^ ProductosController2::buscarProducto(String^ nombre, String^ tipoProducto) {
	List<Productos^>^ listaProductosEncontrados = gcnew List<Productos^>();
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
		if (tipodeProducto->Contains(tipoProducto) && nombreProducto->Contains(nombre)) {
			Productos^ objProductos = gcnew Productos(codigoProducto, nombreProducto, FechaEmision, FechaVencimiento, tipodeProducto, stockProducto, precioProducto);
			listaProductosEncontrados->Add(objProductos);
		}
	}
	return listaProductosEncontrados;
}
Productos^ ProductosController2::buscarProductoxCodigo(int codigo) {
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
			ProductoEncontrado = gcnew Productos(codigoProducto, nombreProducto, FechaEmision, FechaVencimiento, tipodeProducto, stockProducto, precioProducto);
		}
	}
	return ProductoEncontrado;
}
List<Productos^>^ ProductosController2::buscarAll() {
	List<Productos^>^ listaProductosEncontrados = gcnew List<Productos^>();
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
		Productos^ objProductos = gcnew Productos(codigoProducto, nombreProducto, FechaEmision, FechaVencimiento, tipodeProducto, stockProducto, precioProducto);
		listaProductosEncontrados->Add(objProductos);
	}
	return listaProductosEncontrados;
}

void ProductosController2::eliminarProducto(int codigo) {
	List<Productos^>^ listaProductos = buscarAll();
	for (int i = 0; i < listaProductos->Count; i++) {
		if (listaProductos[i]->codigo == codigo) {
			listaProductos->RemoveAt(i);
			break;
		}
	}
	escribirArchivo(listaProductos);
}

void ProductosController2::escribirArchivo(List<Productos^>^ listaProductos) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaProductos->Count);
	for (int i = 0; i < listaProductos->Count; i++) {
		Productos^ objtProductos = listaProductos[i];
		lineasArchivo[i] = objtProductos->codigo + ";" + objtProductos->nombre + ";" + objtProductos->fechaEmision + ";" + objtProductos->fechaEmision + ";" + objtProductos->tipodeProducto + ";" + objtProductos->stock;
	}
	File::WriteAllLines("productos.txt", lineasArchivo);
}

void ProductosController2::agregarProducto(int codigo, String^ nombre, String^ fechaVencimiento, String^ fechaEmision, String^ tipodeProducto, int stock, int precio) {
	List<Productos^>^ listaProductos = buscarAll();
	Productos^ objProductos = gcnew Productos(codigo, nombre, fechaVencimiento, fechaEmision, tipodeProducto, stock, precio);
	listaProductos->Add(objProductos);
	escribirArchivo(listaProductos);
}

Productos^ ProductosController2::buscarProductoxCodigo1(int codigo) {
	Productos^ objProductosEncontrados = nullptr;
	array <String^>^ lineas = File::ReadAllLines("productos.txt");
	String^ separadores = ";";

	for each (String ^ lineaProductos in lineas) {

		array<String^>^ datos = lineaProductos->Split(separadores->ToCharArray());
		//datos
		int codigoprod = Convert::ToInt32(datos[0]);
		String^ nombre1 = datos[1];
		String^ fecha1 = datos[2];
		String^ fecha2 = datos[3];
		String^ tipoprod = datos[4];
		int stock1 = Convert::ToInt32(datos[5]);
		int precio1 = Convert::ToInt32(datos[6]);
		//Convert::ToString(codigo) -> Contains( Convert::ToString(codigo))
		//if (codigo==idPromocion && tipodePromocion->Contains(tipoPromocion)){
		if (codigoprod == codigo) {

			objProductosEncontrados = gcnew Productos(codigoprod, nombre1, fecha1, fecha2, tipoprod, stock1, precio1);
			break;
		}
	}
	return objProductosEncontrados;


}

void ProductosController2::actualizarProducto(Productos^ objProd) {
	List<Productos^>^ listaProductos = buscarAll();
	for (int i = 0; i < listaProductos->Count; i++) {
		if (listaProductos[i]->codigo == objProd->codigo) {
			listaProductos[i]->nombre = objProd->nombre;
			listaProductos[i]->fechaVencimiento = objProd->fechaVencimiento;
			listaProductos[i]->fechaEmision = objProd->fechaEmision;
			listaProductos[i]->tipodeProducto = objProd->tipodeProducto;
			listaProductos[i]->stock = objProd->stock;
			listaProductos[i]->precio = objProd->precio;
			break;
		}
	}
	escribirArchivo(listaProductos);
}