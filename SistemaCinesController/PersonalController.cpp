#include "PersonalController.h"

using namespace SistemaCinesController;
using namespace System::IO;

PersonalController::PersonalController() {

}

List<Personal^>^ PersonalController::BuscarPersonalxnombre_apellido(String^ nombre, String^ apellido) {

	List<Personal^>^ listaPersonalEncontrados = gcnew List<Personal^>();

	array <String^>^ lineas = File::ReadAllLines("personal.txt");
	String^ separadores = ";";

	for each (String ^ lineaPersonal in lineas) {

		array<String^>^ datos = lineaPersonal->Split(separadores->ToCharArray());
		//datos
		int codigo1 = Convert::ToInt32(datos[0]);
		String^ nombre1 = datos[1];
		String^ apellido1 = datos[2];
		String^ correo1 = datos[3];
		String^ contraseña1 = datos[4];
		String^ tipodePersona1 = datos[5];
		//Convert::ToString(codigo) -> Contains( Convert::ToString(codigo))
		//if (codigo==idPromocion && tipodePromocion->Contains(tipoPromocion)){
		if (nombre1->Contains(nombre) && apellido1->Contains(apellido)) {

			Personal^ objPersonal = gcnew Personal(codigo1, nombre1, apellido1, correo1, contraseña1, tipodePersona1);
			listaPersonalEncontrados->Add(objPersonal);
		}
	}
	return listaPersonalEncontrados;
}

List<Personal^>^ PersonalController::buscarAll() {
	List<Personal^>^ listaPersonalEncontrados = gcnew List<Personal^>();

	array <String^>^ lineas = File::ReadAllLines("personal.txt");
	String^ separadores = ";";

	for each (String ^ lineaPersonal in lineas) {

		array<String^>^ datos = lineaPersonal->Split(separadores->ToCharArray());
		//datos
		int codigo1 = Convert::ToInt32(datos[0]);
		String^ nombre1 = datos[1];
		String^ apellido1 = datos[2];
		String^ correo1 = datos[3];
		String^ contraseña1 = datos[4];
		String^ tipodePersona1 = datos[5];
		Personal^ objPersonal = gcnew Personal(codigo1, nombre1, apellido1, correo1, contraseña1, tipodePersona1);
		listaPersonalEncontrados->Add(objPersonal);
	}
	return listaPersonalEncontrados;
}
void PersonalController::eliminarPersonal(int codigo) {
	List<Personal^>^ listaPersonal = buscarAll();
	for (int i = 0; i < listaPersonal->Count; i++) {
		if (listaPersonal[i]->codigo == codigo) {
			listaPersonal->RemoveAt(i);
			break;
		}
	}
	escribirArchivo(listaPersonal);
}
void PersonalController::escribirArchivo(List<Personal^>^ listaPersonal) {

	array<String^>^ lineasArchivo = gcnew array<String^>(listaPersonal->Count);
	for (int i = 0; i < listaPersonal->Count; i++) {
		Personal^ objPersonal = listaPersonal[i];
		lineasArchivo[i] = objPersonal->codigo + ";" + objPersonal->nombre + ";" + objPersonal->apellido + ";" + objPersonal->correo + ";" + objPersonal->contraseña + ";" + objPersonal->tipodePersona;
	}
	File::WriteAllLines("personal.txt", lineasArchivo);

}

void PersonalController::agregarPersonal(int codigo, String^ nombre, String^ apellido, String^ correo, String^ contraseña, String^ tipodePersona) {
	List<Personal^>^ listaPersonal = buscarAll();
	Personal^ objPersonal = gcnew Personal(codigo, nombre, apellido, correo, contraseña, tipodePersona);
	listaPersonal->Add(objPersonal);
	escribirArchivo(listaPersonal);
}
Personal^ PersonalController::buscarPersonalxCodigo(int codigo) {
	Personal^ objPersonalEncontrados = nullptr;
	array <String^>^ lineas = File::ReadAllLines("personal.txt");
	String^ separadores = ";";

	for each (String ^ lineaPersonal in lineas) {

		array<String^>^ datos = lineaPersonal->Split(separadores->ToCharArray());
		//datos
		int codigo1 = Convert::ToInt32(datos[0]);
		String^ nombre1 = datos[1];
		String^ apellido1 = datos[2];
		String^ correo1 = datos[3];
		String^ contraseña1 = datos[4];
		String^ tipodePersona1 = datos[5];
		//Convert::ToString(codigo) -> Contains( Convert::ToString(codigo))
		//if (codigo==idPromocion && tipodePromocion->Contains(tipoPromocion)){
		if (codigo1 == codigo) {

			objPersonalEncontrados = gcnew Personal(codigo1, nombre1, apellido1, correo1, contraseña1, tipodePersona1);
			break;
		}
	}
	return objPersonalEncontrados;


}
void PersonalController::actualizarPersonal(Personal^ objPersonal) {
	List<Personal^>^ listaPersonal = buscarAll();
	for (int i = 0; i < listaPersonal->Count; i++) {
		if (listaPersonal[i]->codigo == objPersonal->codigo) {
			listaPersonal[i]->nombre = objPersonal->nombre;
			listaPersonal[i]->apellido = objPersonal->apellido;
			listaPersonal[i]->correo = objPersonal->correo;
			listaPersonal[i]->contraseña = objPersonal->contraseña;
			listaPersonal[i]->tipodePersona = objPersonal->tipodePersona;
			break;
		}
	}
	escribirArchivo(listaPersonal);
}