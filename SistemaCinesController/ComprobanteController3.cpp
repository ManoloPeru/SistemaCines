#include "ComprobanteController3.h"

using namespace SistemaCinesController;
using namespace System::IO;

ComprobanteController3::ComprobanteController3() {

}
List<Comprobante^>^ ComprobanteController3::buscarAll() {
	List<Comprobante^>^ listaComprobanteEncontrados = gcnew List<Comprobante^>();
	array<String^>^ lineas = File::ReadAllLines("registroCompras.txt");
	String^ separadores = ";";

	for each (String ^ lineaInsumo in lineas) {
		array<String^>^ datos = lineaInsumo->Split(separadores->ToCharArray());

		DateTime fechahora = Convert::ToDateTime(datos[0]);
		String^ nombreCliente = datos[1];
		String^ DocIdent = datos[2];
		String^ mododepago = datos[3];
		int cantidad = Convert::ToInt32(datos[4]);
		String^ descripcion = datos[5];
		double importe = Convert::ToDouble(datos[6]);
		Comprobante^ objComprobante = gcnew Comprobante(fechahora, nombreCliente, DocIdent, mododepago, cantidad, descripcion, importe);
		listaComprobanteEncontrados->Add(objComprobante);
	}
	return listaComprobanteEncontrados;

}
void ComprobanteController3::AgregarPeliculaReporte(DateTime fechaHora, String^ nombre, String^ nTarjeta, int cantidad, String^ Descripcion, int Total) {
	
	List<Comprobante^>^ listaCompras = buscarAll();
	String^ modoPago = "VISA";
	Comprobante^ objCompra = gcnew Comprobante(fechaHora, nombre, nTarjeta, modoPago, cantidad, Descripcion, Total);
	listaCompras->Add(objCompra);

	escribirArchivoPeliculas(listaCompras);
}
void ComprobanteController3::escribirArchivoPeliculas(List<Comprobante^>^ listaComprobante) {

	array<String^>^ lineasArchivo = gcnew array<String^>(listaComprobante->Count);
	for (int i = 0; i < listaComprobante->Count; i++) {
		Comprobante^ objComprobante = listaComprobante[i];
		lineasArchivo[i] = objComprobante->fechahora + ";" + objComprobante->nombreCliente + ";" + objComprobante->DocIdent + ";" + objComprobante->mododepago + ";" + objComprobante->cantidad + ";" + objComprobante->descripcion + ";" + objComprobante->importe;
	}
	File::WriteAllLines("registroCompras.txt", lineasArchivo);

}