#include "ClienteController.h"

using namespace SistemaCinesController;
using namespace System::IO;

ClienteController::ClienteController() {

}

List<Cliente^>^ ClienteController::BuscarClientexnombre_ndocumento(String^ nombre, String^ ndocumento) {

	List<Cliente^>^ listaClienteEncontrados = gcnew List<Cliente^>();

	array <String^>^ lineas = File::ReadAllLines("clientes.txt");
	String^ separadores = ";";

	for each (String ^ lineaCliente in lineas) {

		array<String^>^ datos = lineaCliente->Split(separadores->ToCharArray());
		//datos
		int codigoCliente = Convert::ToInt32(datos[0]);
		String^ nombre1 = datos[1];
		String^ aPaterno1 = datos[2];
		String^ aMaterno1 = datos[3];
		String^ tipodoc = datos[4];
		String^ ndoc = datos[5];
		String^ correo = datos[6];
		String^ celular = datos[7];
		//Convert::ToString(codigo) -> Contains( Convert::ToString(codigo))
		//if (codigo==idPromocion && tipodePromocion->Contains(tipoPromocion)){
		if (nombre1->Contains(nombre) && ndoc->Contains(ndocumento)) {

			Cliente^ objCliente = gcnew Cliente(codigoCliente, nombre1, aPaterno1, aMaterno1, tipodoc, ndoc, correo, celular);
			listaClienteEncontrados->Add(objCliente);
		}
	}
	return listaClienteEncontrados;
}

List<Cliente^>^ ClienteController::buscarAll() {
	List<Cliente^>^ listaClienteEncontrados = gcnew List<Cliente^>();

	array <String^>^ lineas = File::ReadAllLines("clientes.txt");
	String^ separadores = ";";

	for each (String ^ lineaCliente in lineas) {

		array<String^>^ datos = lineaCliente->Split(separadores->ToCharArray());
		//datos
		int codigoCliente = Convert::ToInt32(datos[0]);
		String^ nombre1 = datos[1];
		String^ aPaterno1 = datos[2];
		String^ aMaterno1 = datos[3];
		String^ tipodoc = datos[4];
		String^ ndoc = datos[5];
		String^ correo = datos[6];
		String^ celular = datos[7];
		Cliente^ objCliente = gcnew Cliente(codigoCliente, nombre1, aPaterno1, aMaterno1, tipodoc, ndoc, correo, celular);
		listaClienteEncontrados->Add(objCliente);
	}
	return listaClienteEncontrados;
}
void ClienteController:: eliminarCliente(int codigo) {
	List<Cliente^>^ listaCliente= buscarAll();
	for (int i = 0; i < listaCliente->Count; i++) {
		if (listaCliente[i]->codigo == codigo) {
			listaCliente->RemoveAt(i);
			break;
		}
	}
	escribirArchivo(listaCliente);
}
void ClienteController::escribirArchivo(List<Cliente^>^ listaCliente) {
	
	array<String^>^ lineasArchivo = gcnew array<String^>(listaCliente->Count);
	for (int i = 0; i < listaCliente->Count; i++) {
			Cliente^ objCliente = listaCliente[i];
		lineasArchivo[i] = objCliente->codigo + ";" + objCliente->nombre + ";" + objCliente->apellidoPaterno + ";" + objCliente->apellidoMaterno + ";" + objCliente-> tipoDocumento + ";" + objCliente-> nroDocumento + ";" + objCliente->correo + ";" + objCliente->celular;
	}
	File::WriteAllLines("clientes.txt", lineasArchivo);

}

void ClienteController::agregarCliente(int codigo, String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ tipoDocumento, String^ nroDocumento, String^ correo, String^ celular) {
	List<Cliente^>^ listaCliente = buscarAll();
	Cliente^ objCliente = gcnew Cliente(codigo, nombre, apellidoPaterno, apellidoMaterno, tipoDocumento, nroDocumento, correo, celular);;
	listaCliente->Add(objCliente);
	escribirArchivo(listaCliente);
}
Cliente^ ClienteController::buscarClientexCodigo(int codigo) {
	Cliente^ objClienteEncontrados = nullptr;
	array <String^>^ lineas = File::ReadAllLines("clientes.txt");
	String^ separadores = ";";

	for each (String ^ lineaCliente in lineas) {

		array<String^>^ datos = lineaCliente->Split(separadores->ToCharArray());
		//datos
		int codigoCliente = Convert::ToInt32(datos[0]);
		String^ nombre1 = datos[1];
		String^ aPaterno1 = datos[2];
		String^ aMaterno1 = datos[3];
		String^ tipodoc = datos[4];
		String^ ndoc = datos[5];
		String^ correo = datos[6];
		String^ celular = datos[7];
		//Convert::ToString(codigo) -> Contains( Convert::ToString(codigo))
		//if (codigo==idPromocion && tipodePromocion->Contains(tipoPromocion)){
		if (codigoCliente==codigo) {

			objClienteEncontrados = gcnew Cliente(codigoCliente, nombre1, aPaterno1, aMaterno1, tipodoc, ndoc, correo, celular);
			break;
		}
	}
	return objClienteEncontrados;


}
void ClienteController::actualizarCliente(Cliente^ objCliente) {
	List<Cliente^>^ listaCliente = buscarAll();
	for (int i = 0; i < listaCliente->Count; i++) {
		if (listaCliente[i]->codigo == objCliente->codigo) {
			listaCliente[i]->nombre = objCliente->nombre;
			listaCliente[i]->apellidoPaterno = objCliente->apellidoPaterno;
			listaCliente[i]->apellidoMaterno = objCliente->apellidoMaterno;
			listaCliente[i]->tipoDocumento = objCliente->tipoDocumento;
			listaCliente[i]->nroDocumento = objCliente->nroDocumento;
			listaCliente[i]->correo = objCliente->correo;
			listaCliente[i]->celular = objCliente->celular;
			break;
		}
	}
	escribirArchivo(listaCliente);
}