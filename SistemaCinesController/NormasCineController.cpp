#include "NormasCineController.h"

using namespace SistemaCinesController;
using namespace System::IO;

NormasCineController::NormasCineController() {

}

List<NormasCine^>^ NormasCineController::buscarNormaCine(String^ tipoNorma) {
	List<NormasCine^>^ listaNormasEncontradas = gcnew List<NormasCine^>();
	array<String^>^ lineas = File::ReadAllLines("normasCine.txt");
	String^ separadores = ";";
	for each (String ^ lineaNormaCine in lineas) {
		array<String^>^ datos = lineaNormaCine->Split(separadores->ToCharArray());
		String^ resolucionNormativaCine = datos[0];
		String^ tipoNormaCine = datos[1];
		String^ descripcionCine = datos[2];
		String^ plandeAccionCine = datos[3];
		if (tipoNormaCine->Contains(tipoNorma)) {
			NormasCine^ objNormaCine = gcnew NormasCine(resolucionNormativaCine, tipoNormaCine, descripcionCine, plandeAccionCine);
			listaNormasEncontradas->Add(objNormaCine);
		}
	}
	return listaNormasEncontradas;
}

List<NormasCine^>^ NormasCineController::buscarAll() {
	List<NormasCine^>^ listaNormasEncontradas = gcnew List<NormasCine^>();
	array<String^>^ lineas = File::ReadAllLines("normasCine.txt");
	String^ separadores = ";";
	for each (String ^ lineaNormaCine in lineas) {
		array<String^>^ datos = lineaNormaCine->Split(separadores->ToCharArray());
		String^ resolucionNormativaCine = datos[0];
		String^ tipoNormaCine = datos[1];
		String^ descripcionCine = datos[2];
		String^ plandeAccionCine = datos[3];
		NormasCine^ objNormaCine = gcnew NormasCine(resolucionNormativaCine, tipoNormaCine, descripcionCine, plandeAccionCine);
		listaNormasEncontradas->Add(objNormaCine);
	}
	return listaNormasEncontradas;
}

void NormasCineController::eliminarNormaCine(String^ resolucionNormativa) {
	List<NormasCine^>^ listaNormasCine = buscarAll();
	for (int i = 0; i < listaNormasCine->Count; i++) {
		if (listaNormasCine[i]->resolucionNormativa == resolucionNormativa) {
			listaNormasCine->RemoveAt(i);
			break;
		}
	}
	escribirArchivo(listaNormasCine);
}

void NormasCineController::escribirArchivo(List<NormasCine^>^ listaNormasCine) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaNormasCine->Count);
	for (int i = 0; i < listaNormasCine->Count; i++) {
		NormasCine^ objtNormasCine = listaNormasCine[i];
		lineasArchivo[i] = objtNormasCine->resolucionNormativa + ";" + objtNormasCine->tipoNorma + ";" + objtNormasCine->descripcion + ";" + objtNormasCine->plandeAccion;
	}
	File::WriteAllLines("normasCine.txt", lineasArchivo);
}

void NormasCineController::agregarNorma(String^ resolucionNormativa, String^ tipoNorma, String^ descripcion, String^ plandeAccion) {
	List<NormasCine^>^ listaNormasCine = buscarAll();
	NormasCine^ objNormasCine = gcnew NormasCine(resolucionNormativa, tipoNorma, descripcion, plandeAccion);
	listaNormasCine->Add(objNormasCine);
	escribirArchivo(listaNormasCine);
}

void NormasCineController::actualizarNorma(NormasCine^ objNormasCine) {
	List<NormasCine^>^ listaNormasCine = buscarAll();
	for (int i = 0; i < listaNormasCine->Count; i++) {
		if (listaNormasCine[i]->resolucionNormativa == objNormasCine->resolucionNormativa) {
			listaNormasCine[i]->tipoNorma = objNormasCine->tipoNorma;
			listaNormasCine[i]->descripcion = objNormasCine->descripcion;
			listaNormasCine[i]->plandeAccion = objNormasCine->plandeAccion;
			break;
		}
	}
	escribirArchivo(listaNormasCine);
}

NormasCine^ NormasCineController::buscarNormaCinexResolucion(String^ resolucionNormativa) {
	NormasCine^ objNormasCines = nullptr;
	array<String^>^ lineas = File::ReadAllLines("normasCine.txt");
	String^ separadores = ";";
	for each (String ^ lineaNormaCine in lineas) {
		array<String^>^ datos = lineaNormaCine->Split(separadores->ToCharArray());
		String^ resolucionNormativaCine = datos[0];
		String^ tipoNormaCine = datos[1];
		String^ descripcionNorma = datos[2];
		String^ plandeAccionNorma = datos[3];
		if (resolucionNormativaCine->Contains(resolucionNormativa)) {
			objNormasCines = gcnew NormasCine(resolucionNormativaCine, tipoNormaCine, descripcionNorma, plandeAccionNorma);
			break;
		}
	}
	return objNormasCines;
}