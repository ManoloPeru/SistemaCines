#include "ComprobanteController.h"

using namespace SistemaCinesController;
using namespace System::IO;

ComprobanteController::ComprobanteController() {

}

List<Comprobante^>^ ComprobanteController::buscarAllPeliculas() {
	List<Comprobante^>^ listaComprasEncontradas = gcnew List<Comprobante^>();
	array <String^>^ lineas = File::ReadAllLines("registroCompras.txt");
	String^ separadores = ";";
	for each (String ^ lineaComprobante in lineas) {
		array<String^>^ datos = lineaComprobante->Split(separadores->ToCharArray());
		//datos
		DateTime fechahora = Convert::ToDateTime(datos[0]);
		String^ nombreCliente = datos[1];
		String^ DocIdent = datos[2];
		String^ mododepago = datos[3];
		int cantidad = Convert::ToInt32(datos[4]);
		String^ descripcion = datos[5];
		double importe = Convert::ToDouble(datos[6]);
		Comprobante^ objEncontrado = gcnew Comprobante(fechahora, nombreCliente, DocIdent, mododepago, cantidad, descripcion, importe);
		listaComprasEncontradas->Add(objEncontrado);
	}
	return listaComprasEncontradas;

}
List<Comprobante^>^ ComprobanteController::buscarAllComidas() {
	List<Comprobante^>^ listaComprasEncontradas = gcnew List<Comprobante^>();
	array <String^>^ lineas = File::ReadAllLines("registroComprasComida.txt");
	String^ separadores = ";";
	for each (String ^ lineaComprobante in lineas) {
		array<String^>^ datos = lineaComprobante->Split(separadores->ToCharArray());
		//datos
		DateTime fechahora = Convert::ToDateTime(datos[0]);
		String^ nombreCliente = datos[1];
		String^ DocIdent = datos[2];
		String^ mododepago = datos[3];
		int cantidad = Convert::ToInt32(datos[4]);
		String^ descripcion = datos[5];
		double importe = Convert::ToDouble(datos[6]);
		Comprobante^ objEncontrado = gcnew Comprobante(fechahora, nombreCliente, DocIdent, mododepago, cantidad, descripcion, importe);
		listaComprasEncontradas->Add(objEncontrado);
	}
	return listaComprasEncontradas;

}

void ComprobanteController::guardarreportePelicula(DateTime fechaHora, String^ nombreCliente, String^ docIdent, String^ modoPago, int cant, String^ descripcion, double importeTotal) {
	
	List<Comprobante^>^ listaCompras = buscarAllPeliculas();
	Comprobante^ objCompra = gcnew Comprobante(fechaHora, nombreCliente, docIdent, modoPago, cant, descripcion, importeTotal);
	listaCompras->Add(objCompra);
	escribirArchivoPeliculas(listaCompras);
}

void ComprobanteController::guardarreporteComida(DateTime fechaHora, String^ nombreCliente, String^ docIdent, String^ modoPago, int cant, String^ descripcion, double importeTotal) {

	List<Comprobante^>^ listaCompras = buscarAllComidas();
	Comprobante^ objCompra = gcnew Comprobante(fechaHora, nombreCliente, docIdent, modoPago, cant, descripcion, importeTotal);
	listaCompras->Add(objCompra);
	escribirArchivoComidas(listaCompras);
}

void ComprobanteController::escribirArchivoPeliculas(List<Comprobante^>^ listaComprobante) {
	 
	array<String^>^ lineasArchivo = gcnew array<String^>(listaComprobante->Count);
	for (int i = 0; i < listaComprobante->Count; i++) {
		Comprobante^ objComprobante = listaComprobante[i];
		lineasArchivo[i] = objComprobante->fechahora + ";" + objComprobante->nombreCliente + ";" + objComprobante->DocIdent + ";" + objComprobante->mododepago + ";" + objComprobante->cantidad + ";" + objComprobante->descripcion + ";" + objComprobante->importe;
	}
	File::WriteAllLines("registroCompras.txt", lineasArchivo);

}

void ComprobanteController::escribirArchivoComidas(List<Comprobante^>^ listaComprobante) {

	array<String^>^ lineasArchivo = gcnew array<String^>(listaComprobante->Count);
	for (int i = 0; i < listaComprobante->Count; i++) {
		Comprobante^ objComprobante = listaComprobante[i];
		lineasArchivo[i] = objComprobante->fechahora + ";" + objComprobante->nombreCliente + ";" + objComprobante->DocIdent + ";" + objComprobante->mododepago + ";" + objComprobante->cantidad + ";" + objComprobante->descripcion + ";" + objComprobante->importe;
	}
	File::WriteAllLines("registroComprasComida.txt", lineasArchivo);

}