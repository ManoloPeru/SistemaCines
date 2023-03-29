#include "PropietarioController.h"

using namespace SistemaCinesController;
using namespace System::IO;

PropietarioController::PropietarioController() {

}

List<Propietario^>^ PropietarioController::buscarAll() {
	List<Propietario^>^ listaPropietarioEncontrado = gcnew List<Propietario^>();
	array<String^>^ lineas = File::ReadAllLines("propietario.txt");
	String^ separadores = ";";
	for each (String ^ lineaLugardeAtencion in lineas) {
		array<String^>^ datos = lineaLugardeAtencion->Split(separadores->ToCharArray());
		String^ RucPropietario = datos[0];
		String^ razonSocialPropietario = datos[1];
		String^ contactoPropietario = datos[2];
		Propietario^ objPropietarioEncontrado = gcnew Propietario(RucPropietario, razonSocialPropietario, contactoPropietario);
		listaPropietarioEncontrado->Add(objPropietarioEncontrado);
	}
	return listaPropietarioEncontrado;
}

Propietario^ PropietarioController::buscarPropietario() {
	Propietario^ objPropietarioEncontrado = nullptr;
	array<String^>^ lineas = File::ReadAllLines("propietario.txt");
	String^ separadores = ";";
	for each (String ^ lineaPropietario in lineas) {
		array<String^>^ datos = lineaPropietario->Split(separadores->ToCharArray());
		String^ rucPropietario = datos[0];
		String^ razonSocialPropietario = datos[1];
		String^ contactoPropietario = datos[2];
		objPropietarioEncontrado = gcnew Propietario(rucPropietario, razonSocialPropietario, contactoPropietario);
	}
	return objPropietarioEncontrado;
}

void PropietarioController::escribirArchivo(List<Propietario^>^ listaPropietario) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaPropietario->Count);
	for (int i = 0; i < listaPropietario->Count; i++) {
		Propietario^ objtPropietario = listaPropietario[i];
		lineasArchivo[i] = objtPropietario->ruc + ";" + objtPropietario->razonSocial + ";" + objtPropietario->contacto;
	}
	File::WriteAllLines("propietario.txt", lineasArchivo);
}

void PropietarioController::actualizarPropietario(Propietario^ objPropietario) {
	List<Propietario^>^ listaPropietario = buscarAll();
	for (int i = 0; i < listaPropietario->Count; i++) {
		if (listaPropietario[i]->ruc == objPropietario->ruc) {
			listaPropietario[i]->razonSocial = objPropietario->razonSocial;
			listaPropietario[i]->contacto = objPropietario->contacto;
			break;
		}
	}
	escribirArchivo(listaPropietario);
}