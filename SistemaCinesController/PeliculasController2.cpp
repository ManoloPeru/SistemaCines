#include "PeliculasController2.h"

using namespace SistemaCinesController;
using namespace System::IO;

PeliculasController2::PeliculasController2() {

}

List<Pelicula^>^ PeliculasController2::buscarPelicula(String^ nombre, String^ genero) {
	List<Pelicula^>^ listaPeliculasEncontradas = gcnew List<Pelicula^>();
	array<String^>^ lineas = File::ReadAllLines("peliculas.txt");
	String^ separadores = ";";
	for each (String ^ lineaPelicula in lineas) {
		array<String^>^ datos = lineaPelicula->Split(separadores->ToCharArray());
		int codigoPelicula = Convert::ToInt32(datos[0]);
		String^ nombrePelicula = datos[1];
		String^ duracionPelicula = datos[2];
		String^ generoPelicula = datos[3];
		String^ fechaEstrenoPelicula = datos[4];
		String^ restriccionPelicula = datos[5];
		String^ sinopsisPelicula = datos[6];
		if (nombrePelicula->Contains(nombre) && generoPelicula->Contains(genero)) {
			Pelicula^ objPeliculas = gcnew Pelicula(codigoPelicula, nombrePelicula, duracionPelicula, generoPelicula, fechaEstrenoPelicula, restriccionPelicula, sinopsisPelicula);
			listaPeliculasEncontradas->Add(objPeliculas);
		}
	}
	return listaPeliculasEncontradas;
}

List<Pelicula^>^ PeliculasController2::buscarAll() {
	List<Pelicula^>^ listaPeliculasEncontradas = gcnew List<Pelicula^>();
	array<String^>^ lineas = File::ReadAllLines("peliculas.txt");
	String^ separadores = ";";
	for each (String ^ lineaPelicula in lineas) {
		array<String^>^ datos = lineaPelicula->Split(separadores->ToCharArray());
		int codigoPelicula = Convert::ToInt32(datos[0]);
		String^ nombrePelicula = datos[1];
		String^ duracionPelicula = datos[2];
		String^ generoPelicula = datos[3];
		String^ fechaEstrenoPelicula = datos[4];
		String^ restriccionPelicula = datos[5];
		String^ sinopsisPelicula = datos[6];
		Pelicula^ objPeliculas = gcnew Pelicula(codigoPelicula, nombrePelicula, duracionPelicula, generoPelicula, fechaEstrenoPelicula, restriccionPelicula, sinopsisPelicula);
		listaPeliculasEncontradas->Add(objPeliculas);
	}
	return listaPeliculasEncontradas;
}

void PeliculasController2::eliminarPelicula(String^ nombre) {
	List<Pelicula^>^ listaPelicula = buscarAll();
	for (int i = 0; i < listaPelicula->Count; i++) {
		if (listaPelicula[i]->nombre == nombre) {
			listaPelicula->RemoveAt(i);
			break;
		}
	}
	escribirArchivo(listaPelicula);
}

void PeliculasController2::escribirArchivo(List<Pelicula^>^ listaPeliculas) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaPeliculas->Count);
	for (int i = 0; i < listaPeliculas->Count; i++) {
		Pelicula^ objtPelicula = listaPeliculas[i];
		lineasArchivo[i] = objtPelicula->codigo + ";" + objtPelicula->nombre + ";" + objtPelicula->genero + ";" + objtPelicula->fechaestreno + ";" + objtPelicula->restriccion + ";" + objtPelicula->sinopsis + ";" + objtPelicula->duracion;
	}
	File::WriteAllLines("peliculas.txt", lineasArchivo);
}

Pelicula^ PeliculasController2::buscarPeliculaxCodigo(int codigo) {
	Pelicula^ objPeliculaEncontrada = nullptr;
	array<String^>^ lineas = File::ReadAllLines("peliculas.txt");
	String^ separadores = ";";
	for each (String ^ lineaPelicula in lineas) {
		array<String^>^ datos = lineaPelicula->Split(separadores->ToCharArray());
		int codigoPelicula = Convert::ToInt32(datos[0]);
		String^ nombrePelicula = datos[1];
		String^ generoPelicula = datos[2];
		String^ fechaEstrenoPelicula = datos[3];
		String^ restriccionPelicula = datos[4];
		String^ sinopsisPelicula = datos[5];
		String^ duracionPelicula = datos[6];
		if (codigoPelicula==codigo) {
			objPeliculaEncontrada = gcnew Pelicula(codigoPelicula, nombrePelicula, generoPelicula, fechaEstrenoPelicula, restriccionPelicula, sinopsisPelicula, duracionPelicula);
			break; 
		}
	}
	return objPeliculaEncontrada;
}

void PeliculasController2::actualizarPelicula(Pelicula^ objPelicula) {
	List<Pelicula^>^ listPeliculas = buscarAll();
	for (int i = 0; i < listPeliculas->Count; i++) {
		if (listPeliculas[i]->codigo == objPelicula->codigo) {
			listPeliculas[i]->nombre = objPelicula->nombre;
			listPeliculas[i]->genero = objPelicula->genero;
			listPeliculas[i]->duracion = objPelicula->duracion;
			listPeliculas[i]->sinopsis = objPelicula->sinopsis;
			listPeliculas[i]->restriccion = objPelicula->restriccion; 

			break;
		}
	}
	escribirArchivo(listPeliculas);
}

void PeliculasController2::agregarPelicula(int codigo, String^ nombre, String^ genero, String^ fechaestreno, String^ restriccion, String^ sinopsis, String^ duracion) {
	List<Pelicula^>^ listaPelicula = buscarAll();
	Pelicula^ objInsumo = gcnew Pelicula(codigo, nombre, genero, fechaestreno, restriccion, sinopsis, duracion);
	listaPelicula->Add(objInsumo);
	escribirArchivo(listaPelicula);

}