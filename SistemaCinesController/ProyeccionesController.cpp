#include "ProyeccionesController.h"

using namespace SistemaCinesController;
using namespace System::IO;

ProyeccionesController::ProyeccionesController() {

}
//clase :: metodo
List<Proyeccion^>^ ProyeccionesController::buscarProyeccionxNombre(String^ nombre) {

	List<Proyeccion^>^ listaProyecciones = gcnew List<Proyeccion^>();

	array <String^>^ lineas = File::ReadAllLines("proyecciones.txt");
	String^ separadores = ";";

	for each (String ^ lineaProyeccion in lineas) {

		array<String^>^ datos = lineaProyeccion->Split(separadores->ToCharArray());
		//datos
		int codigoProyeccion = Convert::ToInt32(datos[0]);
		String^ nombrePelicula = datos[1];
		int salaP = Convert::ToInt32(datos[2]);
		DateTime horaP = Convert::ToDateTime(datos[3]);
	
		if (nombrePelicula->Contains(nombre)) {

			Proyeccion^ objProyeccion = gcnew Proyeccion(codigoProyeccion, nombrePelicula, salaP, horaP);
			listaProyecciones->Add(objProyeccion);
		}
	}
	return listaProyecciones;
}
