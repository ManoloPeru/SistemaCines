#include "ProveedorController2.h"

using namespace SistemaCinesController;
using namespace System::IO;

ProveedorController2::ProveedorController2() {

}
//clase :: metodo
List<Proveedor^>^ ProveedorController2::BuscarProveedorxRazonSocial_RUC(String^ RazonSocial, String^ RUC) {

	List<Proveedor^>^ listaProveedorEncontrados = gcnew List<Proveedor^>();

	array <String^>^ lineas = File::ReadAllLines("proveedores.txt");
	String^ separadores = ";";

	for each (String ^ lineaProveedor in lineas) {

		array<String^>^ datos = lineaProveedor->Split(separadores->ToCharArray());
		//datos
		int codigoProveedor = Convert::ToInt32(datos[0]);
		String^ RazonSocial1 = datos[1];
		String^ RUC1 = datos[2];
		String^ producto1 = datos[3];
		String^ telefono1 = datos[4];
		String^ correo1 = datos[5];
		//Convert::ToString(codigo) -> Contains( Convert::ToString(codigo))
		//if (codigo==idPromocion && tipodePromocion->Contains(tipoPromocion)){
		if (RazonSocial1-> Contains(RazonSocial) && RUC1->Contains(RUC)) {

			Proveedor^ objProveedor = gcnew Proveedor( codigoProveedor, RazonSocial1, RUC1, producto1, telefono1, correo1);
			listaProveedorEncontrados->Add(objProveedor);
		}
	}
	return listaProveedorEncontrados;
}

List<Proveedor^>^ ProveedorController2::buscarAll() {

	List<Proveedor^>^ listaProveedorEncontrados = gcnew List<Proveedor^>();

	array <String^>^ lineas = File::ReadAllLines("proveedores.txt");
	String^ separadores = ";";

	for each (String ^ lineaProveedor in lineas) {

		array<String^>^ datos = lineaProveedor->Split(separadores->ToCharArray());
		//datos
		int codigoProveedor = Convert::ToInt32(datos[0]);
		String^ RazonSocial1 = datos[1];
		String^ RUC1 = datos[2];
		String^ producto1 = datos[3];
		String^ telefono1 = datos[4];
		String^ correo1 = datos[5];
		Proveedor^ objProveedor = gcnew Proveedor(codigoProveedor, RazonSocial1, RUC1, producto1, telefono1, correo1);
		listaProveedorEncontrados->Add(objProveedor);
	}
	return listaProveedorEncontrados;
}
void ProveedorController2::escribirArchivo(List<Proveedor^>^ listaProveedor) {

	array<String^>^ lineasArchivo = gcnew array<String^>(listaProveedor->Count);
	for (int i = 0; i < listaProveedor->Count; i++) {
		Proveedor^ objProveedor = listaProveedor[i];
		lineasArchivo[i] = objProveedor->codigo + ";" + objProveedor->RazonSocial + ";" + objProveedor->RUC + ";" + objProveedor->producto + ";" + objProveedor->telefono + ";" + objProveedor->correo ;
	}
	File::WriteAllLines("proveedores.txt", lineasArchivo);

}
void ProveedorController2::eliminarProveedor(int codigo) {
	List<Proveedor^>^ listaProveedor = buscarAll();
	for (int i = 0; i < listaProveedor->Count; i++) {
		if (listaProveedor[i]->codigo == codigo) {
			listaProveedor->RemoveAt(i);
			break;
		}
	}
	escribirArchivo(listaProveedor);
}

void ProveedorController2::agregarProveedor(int codigo, String^ RazonSocial, String^ RUC, String^ producto, String^ telefono, String^ correo) {
	List<Proveedor^>^ listaProveedor = buscarAll();
	Proveedor^ objProveedor = gcnew Proveedor(codigo, RazonSocial, RUC, producto, telefono, correo);
	listaProveedor->Add(objProveedor);
	escribirArchivo(listaProveedor);
}

Proveedor^ ProveedorController2::BuscarProveedorxCodigo(int codigo) {
	Proveedor^ objProveedorEncontrado = nullptr;

	array <String^>^ lineas = File::ReadAllLines("proveedores.txt");
	String^ separadores = ";";

	for each (String ^ lineaProveedor in lineas) {

		array<String^>^ datos = lineaProveedor->Split(separadores->ToCharArray());
		//datos
		int codigoProveedor = Convert::ToInt32(datos[0]);
		String^ RazonSocial1 = datos[1];
		String^ RUC1 = datos[2];
		String^ producto1 = datos[3];
		String^ telefono1 = datos[4];
		String^ correo1 = datos[5];
		//Convert::ToString(codigo) -> Contains( Convert::ToString(codigo))
		//if (codigo==idPromocion && tipodePromocion->Contains(tipoPromocion)){
		if (codigoProveedor== codigo){
			objProveedorEncontrado = gcnew Proveedor(codigoProveedor, RazonSocial1, RUC1, producto1, telefono1, correo1);
			break;
		}
	}
	return objProveedorEncontrado;
}

void ProveedorController2::actualizarProveedor(Proveedor^ objProveedor) {
	List<Proveedor^>^ listaProveedor = buscarAll();
	for (int i = 0; i < listaProveedor->Count; i++) {
		if (listaProveedor[i]->codigo == objProveedor->codigo) {
			listaProveedor[i]->RazonSocial= objProveedor->RazonSocial;
			listaProveedor[i]->RUC = objProveedor->RUC;
			listaProveedor[i]->producto = objProveedor->producto;
			listaProveedor[i]->telefono = objProveedor->telefono;
			listaProveedor[i]->correo = objProveedor->correo;
			break;
		}
	}
	escribirArchivo(listaProveedor);
}