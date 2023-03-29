#include "LugaresdeAtencionController.h"

using namespace SistemaCinesController;
using namespace System::IO;

LugaresdeAtencionController::LugaresdeAtencionController() {

}

List<LugaresdeAtencion^>^ LugaresdeAtencionController::buscarLugardeAtencion(String^ nombre) {
	List<LugaresdeAtencion^>^ listaLugaresdeAtencionEncontrados = gcnew List<LugaresdeAtencion^>();
	array<String^>^ lineas = File::ReadAllLines("lugaresDeAtencion.txt");
	String^ separadores = ";";
	for each (String ^ lineaLugardeAtencion in lineas) {
		array<String^>^ datos = lineaLugardeAtencion->Split(separadores->ToCharArray());
		String^ nombreLugar = datos[0];
		int numerodePersonalLugar = Convert::ToInt32(datos[1]);
		if (nombreLugar->Contains(nombre)) {
			LugaresdeAtencion^ objLugardeAtencion = gcnew LugaresdeAtencion(nombreLugar, numerodePersonalLugar);
			listaLugaresdeAtencionEncontrados->Add(objLugardeAtencion);
		}
	}
	return listaLugaresdeAtencionEncontrados;
}

List<LugaresdeAtencion^>^ LugaresdeAtencionController::buscarAll() {
	List<LugaresdeAtencion^>^ listaLugaresdeAtencionEncontrados = gcnew List<LugaresdeAtencion^>();
	array<String^>^ lineas = File::ReadAllLines("lugaresDeAtencion.txt");
	String^ separadores = ";";
	for each (String ^ lineaLugardeAtencion in lineas) {
		array<String^>^ datos = lineaLugardeAtencion->Split(separadores->ToCharArray());
		String^ nombreLugar = datos[0];
		int numerodePersonalLugar = Convert::ToInt32(datos[1]);
		LugaresdeAtencion^ objLugardeAtencion = gcnew LugaresdeAtencion(nombreLugar, numerodePersonalLugar);
		listaLugaresdeAtencionEncontrados->Add(objLugardeAtencion);
	}
	return listaLugaresdeAtencionEncontrados;
}

void LugaresdeAtencionController::eliminarLugardeAtencion(String^ nombre) {
	List<LugaresdeAtencion^>^ listaLugaresdeAtencion = buscarAll();
	for (int i = 0; i < listaLugaresdeAtencion->Count; i++) {
		if (listaLugaresdeAtencion[i]->nombre == nombre) {
			listaLugaresdeAtencion->RemoveAt(i);
			break;
		}
	}
	escribirArchivo(listaLugaresdeAtencion);
}

void LugaresdeAtencionController::escribirArchivo(List<LugaresdeAtencion^>^ listaLugaresdeAtencion) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaLugaresdeAtencion->Count);
	for (int i = 0; i < listaLugaresdeAtencion->Count; i++) {
		LugaresdeAtencion^ objtLugardeAtencion = listaLugaresdeAtencion[i];
		lineasArchivo[i] = objtLugardeAtencion->nombre + ";" + objtLugardeAtencion->numerodePersonal;
	}
	File::WriteAllLines("lugaresDeAtencion.txt", lineasArchivo);
}

void LugaresdeAtencionController::agregarLugardeAtencion(String^ nombre, int numerodePersonal) {
	List<LugaresdeAtencion^>^ listaLugaresdeAtencion = buscarAll();
	LugaresdeAtencion^ objtLugardeAtencion = gcnew LugaresdeAtencion(nombre, numerodePersonal);
	listaLugaresdeAtencion->Add(objtLugardeAtencion);
	escribirArchivo(listaLugaresdeAtencion);
}

void LugaresdeAtencionController::actualizarLugardeAtencion(LugaresdeAtencion^ objtLugardeAtencion) {
	List<LugaresdeAtencion^>^ listaLugaresdeAtencion = buscarAll();
	for (int i = 0; i < listaLugaresdeAtencion->Count; i++) {
		if (listaLugaresdeAtencion[i]->nombre == objtLugardeAtencion-> nombre) {
			listaLugaresdeAtencion[i]->nombre = objtLugardeAtencion->nombre;
			listaLugaresdeAtencion[i]->numerodePersonal = objtLugardeAtencion->numerodePersonal;
			break;
		}
	}
	escribirArchivo(listaLugaresdeAtencion);
}

LugaresdeAtencion^ LugaresdeAtencionController::buscarLugardeAtencionxNombre(String^ nombre) {
	LugaresdeAtencion^ objLugardeAtencionEncontrado = nullptr;
	array<String^>^ lineas = File::ReadAllLines("lugaresdeatencion.txt");
	String^ separadores = ";";
	for each (String ^ lineaEmpresaAnuncio in lineas) {
		array<String^>^ datos = lineaEmpresaAnuncio->Split(separadores->ToCharArray());
		String^ nombreLugar = datos[0];
		int numerodePersonalLugar = Convert::ToInt32(datos[1]);
		if (nombreLugar->Contains(nombre)) {
			objLugardeAtencionEncontrado = gcnew LugaresdeAtencion(nombreLugar, numerodePersonalLugar);
			break;
		}
	}
	return objLugardeAtencionEncontrado;
}