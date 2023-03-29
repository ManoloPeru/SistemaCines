#include "SalasController.h"

using namespace SistemaCinesController;
using namespace System::IO;

SalasController::SalasController() {

}

List<Salas^>^ SalasController::buscarSala(String^ numerodeSala, String^ cine) {
	List<Salas^>^ listaSalasEncontradas = gcnew List<Salas^>();
	array<String^>^ lineas = File::ReadAllLines("salas.txt");
	String^ separadores = ";";
	for each (String ^ lineaSala in lineas) {
		array<String^>^ datos = lineaSala->Split(separadores->ToCharArray());
		int codigoSala = Convert::ToInt32(datos[0]);
		String^ numeroSala = datos[1];
		String^ peliculaSala = datos[2];
		int aforoSala = Convert::ToInt32(datos[3]);
		String^ cineSala = datos[4];
		if (numeroSala->Contains(numerodeSala) && cineSala->Contains(cine)) {
			Salas^ objSalas = gcnew Salas(codigoSala, numeroSala, peliculaSala, aforoSala, cineSala);
			listaSalasEncontradas->Add(objSalas);
		}
	}
	return listaSalasEncontradas;
}

List<Salas^>^ SalasController::buscarAll() {
	List<Salas^>^ listaSalasEncontradas = gcnew List<Salas^>();
	array<String^>^ lineas = File::ReadAllLines("salas.txt");
	String^ separadores = ";";
	for each (String ^ lineaSala in lineas) {
		array<String^>^ datos = lineaSala->Split(separadores->ToCharArray());
		int codigoSala = Convert::ToInt32(datos[0]);
		String^ numeroSala = datos[1];
		String^ peliculaSala = datos[2];
		int aforoSala = Convert::ToInt32(datos[3]);
		String^ cineSala = datos[4];
		Salas^ objSalas = gcnew Salas(codigoSala, numeroSala, peliculaSala, aforoSala, cineSala);
		listaSalasEncontradas->Add(objSalas);
	}
	return listaSalasEncontradas;
}

void SalasController::eliminarSala(int codigo) {
	List<Salas^>^ listaSalas = buscarAll();
	for (int i = 0; i < listaSalas->Count; i++) {
		if (listaSalas[i]->codigo == codigo) {
			listaSalas->RemoveAt(i);
			break;
		}
	}
	escribirArchivo(listaSalas);
}

void SalasController::escribirArchivo(List<Salas^>^ listaSalas) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaSalas->Count);
	for (int i = 0; i < listaSalas->Count; i++) {
		Salas^ objtSalas = listaSalas[i];
		lineasArchivo[i] = objtSalas->codigo + ";" + objtSalas->numerodeSala + ";" + objtSalas->pelicula + ";" + objtSalas->aforo + ";" + objtSalas->cine ;
	}
	File::WriteAllLines("salas.txt", lineasArchivo);
}

Salas^ SalasController::buscarSalaxCodigo(String^ numerodeSala) {
	Salas^ objSalaEncontrada = nullptr;
	array<String^>^ lineas = File::ReadAllLines("salas.txt");
	String^ separadores = ";";
	for each (String ^ lineaSala in lineas) {
		array<String^>^ datos = lineaSala->Split(separadores->ToCharArray());
		int codigoSala = Convert::ToInt32(datos[0]);
		String^ numeroSala = datos[1];
		String^ peliculaSala = datos[2];
		int aforoSala = Convert::ToInt32(datos[3]);
		String^ cineSala = datos[4];
		if (numeroSala->Contains(numerodeSala)) {
			objSalaEncontrada = gcnew Salas(codigoSala, numeroSala, peliculaSala, aforoSala, cineSala);
			break;
		}
	}
	return objSalaEncontrada;
}