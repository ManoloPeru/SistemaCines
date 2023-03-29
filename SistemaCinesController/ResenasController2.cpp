#include "ResenasController2.h"

using namespace SistemaCinesController;
using namespace System::IO;

ResenasController2::ResenasController2() {

}

List<Resena^>^ ResenasController2::buscarResena(String^ autor) {
	List<Resena^>^ listaResenasEncontradas = gcnew List<Resena^>();
	array<String^>^ lineas = File::ReadAllLines("resenas.txt");
	String^ separadores = ";";
	for each (String ^ lineaResena in lineas) {
		array<String^>^ datos = lineaResena->Split(separadores->ToCharArray());
		int codigoResena = Convert::ToInt32(datos[0]);
		String^ autorResena = datos[1];
		String^ correoResena = datos[2];
		String^ descripcionResena = datos[3];
		if (autorResena->Contains(autor)) {
			Resena^ objResena = gcnew Resena(codigoResena, autorResena, correoResena, descripcionResena);
			listaResenasEncontradas->Add(objResena);
		}
	}
	return listaResenasEncontradas;
}

List<Resena^>^ ResenasController2::buscarAll() {
	List<Resena^>^ listaResenasEncontradas = gcnew List<Resena^>();
	array<String^>^ lineas = File::ReadAllLines("resenas.txt");
	String^ separadores = ";";
	for each (String ^ lineaResena in lineas) {
		array<String^>^ datos = lineaResena->Split(separadores->ToCharArray());
		int codigoResena = Convert::ToInt32(datos[0]);
		String^ autorResena = datos[1];
		String^ correoResena = datos[2];
		String^ descripcionResena = datos[3];
		Resena^ objResena = gcnew Resena(codigoResena, autorResena, correoResena, descripcionResena);
		listaResenasEncontradas->Add(objResena);
	}
	return listaResenasEncontradas;
}

void ResenasController2::eliminarResena(int codigo) {
	List<Resena^>^ listaResenas = buscarAll();
	for (int i = 0; i < listaResenas->Count; i++) {
		if (listaResenas[i]->codigo == codigo) {
			listaResenas->RemoveAt(i);
			break;
		}
	}
	escribirArchivo(listaResenas);
}

void ResenasController2::escribirArchivo(List<Resena^>^ listaResenas) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaResenas->Count);
	for (int i = 0; i < listaResenas->Count; i++) {
		Resena^ objtResena = listaResenas[i];
		lineasArchivo[i] = objtResena->codigo + ";" + objtResena->autor + ";" + objtResena->correo + ";" + objtResena->descripcion;
	}
	File::WriteAllLines("resenas.txt", lineasArchivo);
}

void ResenasController2::agregarResena(int codigo, String^ autor, String^ correo, String^ descripcion) {
	List<Resena^>^ listaResenas = buscarAll();
	Resena^ objResena = gcnew Resena(codigo, autor, correo, descripcion);
	listaResenas->Add(objResena);
	escribirArchivo(listaResenas);
}

void ResenasController2::actualizarResena(Resena^ objResena) {
	List<Resena^>^ listaResenas = buscarAll();
	for (int i = 0; i < listaResenas->Count; i++) {
		if (listaResenas[i]->codigo == objResena->codigo) {
			listaResenas[i]->autor = objResena->autor;
			listaResenas[i]->correo = objResena->correo;
			listaResenas[i]->descripcion = objResena->descripcion;
			break;
		}
	}
	escribirArchivo(listaResenas);
}

Resena^ ResenasController2::buscarResenaxCodigo(int codigo) {
	Resena^ objResenaEncontrada = nullptr;
	array<String^>^ lineas = File::ReadAllLines("resenas.txt");
	String^ separadores = ";";
	for each (String ^ lineaDistribuidor in lineas) {
		array<String^>^ datos = lineaDistribuidor->Split(separadores->ToCharArray());
		int codigoResena = Convert::ToInt32(datos[0]);
		String^ autorResena = datos[1];
		String^ correoResena = datos[2];
		String^ descripcionResena = datos[3];
		if (codigoResena == codigo) {
			objResenaEncontrada = gcnew Resena(codigoResena, autorResena, correoResena, descripcionResena);
			break;
		}
	}
	return objResenaEncontrada;
}