#include "AnuncioController2.h"

using namespace SistemaCinesController;
using namespace System::IO;

AnuncioController2::AnuncioController2() {

}

List<Anuncio^>^ AnuncioController2::buscarAnuncios( String^ tipo) {
	List<Anuncio^>^ listaAnunciosEncontrados = gcnew List<Anuncio^>();
	array<String^>^ lineas = File::ReadAllLines("anuncios.txt");
	String^ separadores = ";";
	for each (String ^ lineaAnuncio in lineas) {
		array<String^>^ datos = lineaAnuncio->Split(separadores->ToCharArray());
		int idAnuncio = Convert::ToInt32(datos[0]);
		String^ duracionAnuncio = datos[1];
		String^ tipoAnuncio = datos[2];
		String^ fechaInicio = datos[3];
		String^ fechaFin = datos[4];
		String^ contenidoAnuncio = datos[5];
		double importeAnuncio = Convert::ToDouble(datos[6]);
		if (tipoAnuncio->Contains(tipo)) {
			Anuncio^ objAnuncio = gcnew Anuncio(idAnuncio, duracionAnuncio, tipoAnuncio, fechaInicio, fechaFin, contenidoAnuncio, importeAnuncio);
			listaAnunciosEncontrados->Add(objAnuncio);
		}
	}
	return listaAnunciosEncontrados;
}

List<Anuncio^>^ AnuncioController2::buscarAll() {
	List<Anuncio^>^ listaAnunciosEncontrados = gcnew List<Anuncio^>();
	array<String^>^ lineas = File::ReadAllLines("anuncios.txt");
	String^ separadores = ";";
	for each (String ^ lineaAnuncio in lineas) {
		array<String^>^ datos = lineaAnuncio->Split(separadores->ToCharArray());
		int idAnuncio = Convert::ToInt32(datos[0]);
		String^ duracionAnuncio = datos[1];
		String^ tipoAnuncio = datos[2];
		String^ fechaInicio = datos[3];
		String^ fechaFin = datos[4];
		String^ contenidoAnuncio = datos[5];
		double importeAnuncio = Convert::ToDouble(datos[6]);
		Anuncio^ objAnuncio = gcnew Anuncio(idAnuncio, duracionAnuncio, tipoAnuncio, fechaInicio, fechaFin, contenidoAnuncio, importeAnuncio);
		listaAnunciosEncontrados->Add(objAnuncio);
	}
	return listaAnunciosEncontrados;
}

void AnuncioController2::eliminarAnuncio(int codigo) {
	List<Anuncio^>^ listaAnuncios = buscarAll();
	for (int i = 0; i < listaAnuncios->Count; i++) {
		if (listaAnuncios[i]->idAnuncio == codigo) {
			listaAnuncios->RemoveAt(i);
			break;
		}
	}
	escribirArchivo(listaAnuncios);
}

void AnuncioController2::escribirArchivo(List<Anuncio^>^ listaAnuncios) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaAnuncios->Count);
	for (int i = 0; i < listaAnuncios->Count; i++) {
		Anuncio^ objtAnuncio = listaAnuncios[i];
		lineasArchivo[i] = objtAnuncio->idAnuncio + ";" + objtAnuncio->duracion + ";" + objtAnuncio->tipo + ";" + objtAnuncio->fechaInicio + ";" + objtAnuncio->fechaFin + ";" + objtAnuncio->contenido + ";" + objtAnuncio->importe;
	}
	File::WriteAllLines("anuncios.txt", lineasArchivo);
}

void AnuncioController2::agregarNuevoAnuncioAnuncio(int idAnuncio, String^ duracion, String^ tipo, String^ fechaInicio, String^ fechaFin, String^ contenido, int importe) {
	List<Anuncio^>^ listaAnuncio = buscarAll();
	Anuncio^ objAnuncio = gcnew Anuncio( idAnuncio, duracion, tipo, fechaInicio,  fechaFin, contenido,  importe);
	listaAnuncio->Add(objAnuncio);
	escribirArchivo(listaAnuncio);
}
Anuncio^ AnuncioController2::buscarAnuncioxCodigo(int id) {
	Anuncio^ objAnuncioEncontrado = nullptr; //va a iiniciar vacio
	array<String^>^ lineas = File::ReadAllLines("anuncios.txt");
	String^ separadores = ";";
	//va linea por linea 
	// lineaPlan es el nombre que le estoy dando a cada linea cada vez
	for each (String ^ lineaAnuncio in lineas) {
		array<String^>^ datos = lineaAnuncio->Split(separadores->ToCharArray());
		int idAnuncio = Convert::ToInt32(datos[0]);
		String^ duracion = datos[1];
		String^ tipo = datos[2];
		String^ fechaInicio = datos[3];
		String^ fechaFin = datos[4];
		String^ contenido = datos[5];
		int importe = Convert::ToInt32(datos[6]);


		if (idAnuncio == id) {
			objAnuncioEncontrado = gcnew Anuncio(idAnuncio, duracion, tipo, fechaInicio, fechaFin, contenido, importe);
			break;
		}
	}
	return objAnuncioEncontrado;
}
void AnuncioController2::actualizarAnuncio(Anuncio^ objAnuncio) {
	List<Anuncio^>^ lineaAnuncio = buscarAll();
	for (int i = 0; i < lineaAnuncio->Count; i++) {
		if (lineaAnuncio[i]->idAnuncio == objAnuncio->idAnuncio) {
			lineaAnuncio[i]->duracion = objAnuncio->duracion;
			lineaAnuncio[i]->tipo = objAnuncio->tipo;
			lineaAnuncio[i]->fechaInicio = objAnuncio->fechaInicio;
			lineaAnuncio[i]->fechaFin = objAnuncio->fechaFin;
			lineaAnuncio[i]->importe = objAnuncio->importe;
			lineaAnuncio[i]->contenido = objAnuncio->contenido;
			break;
		}
	}
	escribirArchivo(lineaAnuncio);
}