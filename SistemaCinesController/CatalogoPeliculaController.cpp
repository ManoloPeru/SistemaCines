#include "CatalogoPeliculaController.h"
#include "PeliculasController.h";

using namespace SistemaCinesController;
using namespace System::IO;

CatalogoPeliculaController::CatalogoPeliculaController() {

}

List<Cartelera^>^ CatalogoPeliculaController::buscarAll() {
	List<Cartelera^>^ listaCartelera = gcnew List<Cartelera^>();
	array<String^>^ lineas = File::ReadAllLines("cartelera.txt");
	String^ separadores = ";";
	for each (String ^ lineaCartelera in lineas) {
		array<String^>^ datos = lineaCartelera->Split(separadores->ToCharArray());
		int codigoPelicula = Convert::ToInt32(datos[0]);
		String^ fechainicioPelicula = datos[1];
		String^ fechafinPelicula = datos[2];
		PeliculasController^ objPeliculasController = gcnew PeliculasController();
		Pelicula^ PeliculaEncontrada = objPeliculasController->buscarPeliculaxCodigo(codigoPelicula);
		Cartelera^ objCartelera = gcnew Cartelera(codigoPelicula, fechainicioPelicula, fechafinPelicula, PeliculaEncontrada);
		listaCartelera->Add(objCartelera);
	}
	return listaCartelera;
}
