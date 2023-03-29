#include "DistribuidorController.h"

using namespace SistemaCinesController;
using namespace System::IO;

DistribuidorController::DistribuidorController() {

}

List<Distribuidor^>^ DistribuidorController::buscarDistribuidor(String^ ruc, String^ contacto, String^ razonSocial) {
	List<Distribuidor^>^ listaDistribuidoresEncontrados = gcnew List<Distribuidor^>();
	array<String^>^ lineas = File::ReadAllLines("distribuidores.txt");
	String^ separadores = ";";
	for each (String ^ lineaDistribuidor in lineas) {
		array<String^>^ datos = lineaDistribuidor->Split(separadores->ToCharArray());
		String^ rucDistribuidor = datos[0];
		int contactoDistribuidor = Convert::ToInt32(datos[1]);
		String^ razonSocialDistribuidor = datos[2];
		if (rucDistribuidor->Contains(ruc) && Convert::ToString(contactoDistribuidor)->Contains(contacto) && razonSocialDistribuidor->Contains(razonSocial)) {
			Distribuidor^ objDistribuidor = gcnew Distribuidor(rucDistribuidor, contactoDistribuidor, razonSocialDistribuidor);
			listaDistribuidoresEncontrados->Add(objDistribuidor);
		}
	}
	return listaDistribuidoresEncontrados;
}

List<Distribuidor^>^ DistribuidorController::buscarAll() {
	List<Distribuidor^>^ listaDistribuidoresEncontrados = gcnew List<Distribuidor^>();
	array<String^>^ lineas = File::ReadAllLines("distribuidores.txt");
	String^ separadores = ";";
	for each (String ^ lineaDistribuidor in lineas) {
		array<String^>^ datos = lineaDistribuidor->Split(separadores->ToCharArray());
		String^ rucDistribuidor = datos[0];
		int contactoDistribuidor = Convert::ToInt32(datos[1]);
		String^ razonSocialDistribuidor = datos[2];
		Distribuidor^ objDistribuidor = gcnew Distribuidor(rucDistribuidor, contactoDistribuidor, razonSocialDistribuidor);
		listaDistribuidoresEncontrados->Add(objDistribuidor);
	}
	return listaDistribuidoresEncontrados;
}

void DistribuidorController::eliminarDistribuidor(String^ rucDistribuidor) {
	List<Distribuidor^>^ listaDistribuidor = buscarAll();
	for (int i = 0; i < listaDistribuidor->Count; i++) {
		if (listaDistribuidor[i]->ruc == rucDistribuidor) {
			listaDistribuidor->RemoveAt(i);
			break;
		}
	}
	escribirArchivo(listaDistribuidor);
}

void DistribuidorController::escribirArchivo(List<Distribuidor^>^ listaDistribuidor) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaDistribuidor->Count);
	for (int i = 0; i < listaDistribuidor->Count; i++) {
		Distribuidor^ objtDistribuidor = listaDistribuidor[i];
		lineasArchivo[i] = objtDistribuidor->ruc + ";" + objtDistribuidor->contacto + ";" + objtDistribuidor->razonSocial;
	}
	File::WriteAllLines("distribuidores.txt", lineasArchivo);
}

void DistribuidorController::agregarDistribuidor(String^ ruc, int contacto, String^ razonSocial) {
	List<Distribuidor^>^ listaDistribuidor = buscarAll();
	Distribuidor^ objDistribuidor = gcnew Distribuidor(ruc, contacto, razonSocial);
	listaDistribuidor->Add(objDistribuidor);
	escribirArchivo(listaDistribuidor);
}

void DistribuidorController::actualizarDistribuidor(Distribuidor^ objDistribuidor) {
	List<Distribuidor^>^ listaDistribuidor = buscarAll();
	for (int i = 0; i < listaDistribuidor->Count; i++) {
		if (listaDistribuidor[i]->ruc == objDistribuidor->ruc) {
			listaDistribuidor[i]->contacto = objDistribuidor->contacto;
			listaDistribuidor[i]->razonSocial = objDistribuidor->razonSocial;
			break;
		}
	}

	escribirArchivo(listaDistribuidor);
}

Distribuidor^ DistribuidorController::buscarDistribuidorxRuc(String^ ruc) {
	Distribuidor^ objDistribuidorEncontrado = nullptr;
	array<String^>^ lineas = File::ReadAllLines("distribuidores.txt");
	String^ separadores = ";";
	for each (String ^ lineaDistribuidor in lineas) {
		array<String^>^ datos = lineaDistribuidor->Split(separadores->ToCharArray());
		String^ rucDistribuidor = datos[0];
		int contactoDistribuidor = Convert::ToInt32(datos[1]);
		String^ razonSocialDistribuidor = datos[2];
		if (rucDistribuidor->Contains(ruc)) {
			objDistribuidorEncontrado = gcnew Distribuidor(rucDistribuidor, contactoDistribuidor, razonSocialDistribuidor);
			break;
		}
	}
	return objDistribuidorEncontrado;
}