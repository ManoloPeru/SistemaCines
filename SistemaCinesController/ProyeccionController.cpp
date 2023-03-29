#include "ProyeccionController.h"

using namespace SistemaCinesController;
using namespace System::IO;

ProyeccionController::ProyeccionController() {

}
/*
List<Proyeccion^>^ ProyeccionController::BuscarProyeccionxFecha(String^ fecha, Pelicula^ objpelicula) {

	List<Proyeccion^>^ listaProyeccionEncontrados = gcnew List<Proyeccion^>();
	array<String^>^ lineas = File::ReadAllLines("Proyeccion.txt");
	String^ separadores = ";";

	for each (String ^ lineaProyeccion in lineas) {
		array<String^>^ datos = lineaProyeccion->Split(separadores->ToCharArray());

		int codigo = Convert::ToInt32(datos[0]);
		String^ peliculam = datos[1];
		int sala = Convert::ToInt32(datos[2]);
		int butaca = Convert::ToInt32(datos[3]);
		String^ hora = datos[4];
		String^ fecham = datos[5];


		if (fecham ==fecha && peliculam->Contains(objpelicula->nombre)) {

			Proyeccion^ objProyeccion = gcnew Proyeccion(codigo, peliculam, sala, butaca, hora,fecha);
			listaProyeccionEncontrados->Add(objProyeccion);
		}
	}
	return listaProyeccionEncontrados;
}
*/
List<ProyeccionCliente^>^ ProyeccionController::BuscarProyeccionxFecha(String^ fecha, String^ nombre) {

	List<ProyeccionCliente^>^ listaProyeccionEncontrados = gcnew List<ProyeccionCliente^>();
	array<String^>^ lineas = File::ReadAllLines("Proyeccion.txt");
	String^ separadores = ";";

	for each (String ^ lineaProyeccion in lineas) {
		array<String^>^ datos = lineaProyeccion->Split(separadores->ToCharArray());

		int codigo = Convert::ToInt32(datos[0]);
		String^ peliculam = datos[1];
		int sala = Convert::ToInt32(datos[2]);
		int butaca = Convert::ToInt32(datos[3]);
		String^ hora = datos[4];
		String^ fecham = datos[5];


		if (fecham-> Contains(fecha) && peliculam->Contains(nombre)) {

			ProyeccionCliente^ objProyeccion = gcnew ProyeccionCliente(codigo, peliculam, sala, butaca, hora, fecham);
			listaProyeccionEncontrados->Add(objProyeccion);
		}
	}
	return listaProyeccionEncontrados;
}

ProyeccionCliente^ ProyeccionController::buscarProyeccionxCodigo(int codigo) {
	ProyeccionCliente^ objProyeccionEncontrado = nullptr; //va a iiniciar vacio
	array<String^>^ lineas = File::ReadAllLines("Proyeccion.txt");
	String^ separadores = ";";
	
	for each (String ^ lineaProyeccion in lineas) {
		array<String^>^ datos = lineaProyeccion->Split(separadores->ToCharArray());
		int codigoProyeccion = Convert::ToInt32(datos[0]);
		String^ peliculaPro = datos[1];
		int salaProyeccion = Convert::ToInt32(datos[2]);
		int butacaProyeccion = Convert::ToInt32(datos[3]);
		String^ horaProy = datos[4];
		String^ fechaProy = datos[5];

		if (codigo == codigoProyeccion) {
			objProyeccionEncontrado = gcnew ProyeccionCliente(codigoProyeccion, peliculaPro, salaProyeccion, butacaProyeccion, horaProy, fechaProy);
			break;
		}
	}
	return objProyeccionEncontrado;
}