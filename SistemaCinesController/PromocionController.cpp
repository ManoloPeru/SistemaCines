#include "PromocionController.h"

using namespace SistemaCinesController;
using namespace System::IO;

PromocionController::PromocionController() {

}

List<Promociones^>^ PromocionController::buscarPromocion(int idPromocion, String^ tipoPromocion) {
	List<Promociones^>^ listaPromocionesEncontradas = gcnew List<Promociones^>();
	array<String^>^ lineas = File::ReadAllLines("promociones.txt");
	String^ separadores = ";";
	for each (String ^ lineaPromocion in lineas) {
		array<String^>^ datos = lineaPromocion->Split(separadores->ToCharArray());
		int codigo = Convert::ToInt32(datos[0]);
		String^ fechaInicioPromocion = datos[1];
		String^ fechaFinPromocion = datos[2];
		String^ restriccionesPromocion = datos[3];
		String^ tipodePromocion = datos[4];
		if (codigo==idPromocion && tipodePromocion->Contains(tipoPromocion)){
			Promociones^ objPromociones = gcnew Promociones(codigo, fechaInicioPromocion, fechaFinPromocion, restriccionesPromocion, tipodePromocion);
			listaPromocionesEncontradas->Add(objPromociones);
		}
	}
	return listaPromocionesEncontradas;
}

List<Promociones^>^ PromocionController::buscarAll() {
	List<Promociones^>^ listaPromocionesEncontradas = gcnew List<Promociones^>();
	array<String^>^ lineas = File::ReadAllLines("promociones.txt");
	String^ separadores = ";";
	for each (String ^ lineaPromocion in lineas) {
		array<String^>^ datos = lineaPromocion->Split(separadores->ToCharArray());
		int codigo = Convert::ToInt32(datos[0]);
		String^ fechaInicioPromocion = datos[1];
		String^ fechaFinPromocion = datos[2];
		String^ restriccionesPromocion = datos[3];
		String^ tipodePromocion = datos[4];
		Promociones^ objPromociones = gcnew Promociones(codigo, fechaInicioPromocion, fechaFinPromocion, restriccionesPromocion, tipodePromocion);
		listaPromocionesEncontradas->Add(objPromociones);
	}
	return listaPromocionesEncontradas;
}

void PromocionController::eliminarPromocion(int codigo) {
	List<Promociones^>^ listaPromocion = buscarAll();
	for (int i = 0; i < listaPromocion->Count; i++) {
		if (listaPromocion[i]->codigo == codigo) {
			listaPromocion->RemoveAt(i);
			break;
		}
	}
	escribirArchivo(listaPromocion);
}

void PromocionController::escribirArchivo(List<Promociones^>^ listaPromocion) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaPromocion->Count);
	for (int i = 0; i < listaPromocion->Count; i++) {
		Promociones^ objtPromocion = listaPromocion[i];
		lineasArchivo[i] = objtPromocion->codigo + ";" + objtPromocion->fechaInicio + ";" + objtPromocion->fechaFin + ";"+ objtPromocion->restricciones+";"+ objtPromocion->tipoPromocion;
	}
	File::WriteAllLines("promociones.txt", lineasArchivo);
}

void PromocionController::agregarNuevaPromocion(int codigo, String^ fechaInicio, String^ fechaFin, String^ restricciones, String^ tipoPromocion) {
	List<Promociones^>^ listapromociones = buscarAll();
	Promociones^ objPromocion = gcnew Promociones(codigo, fechaInicio, fechaFin, restricciones, tipoPromocion);
	listapromociones->Add(objPromocion);
	escribirArchivo(listapromociones);
}
Promociones^ PromocionController::buscarPromocionxCodigo(int codigo) {
	Promociones^ objPromocionEncontrada = nullptr; //va a iiniciar vacio
	array<String^>^ lineas = File::ReadAllLines("promociones.txt");
	String^ separadores = ";";
	//va linea por linea 
	// lineaPlan es el nombre que le estoy dando a cada linea cada vez
	for each (String ^ lineaAnuncio in lineas) {
		array<String^>^ datos = lineaAnuncio->Split(separadores->ToCharArray());
		int codigoPromocion = Convert::ToInt32(datos[0]);
		String^ fechaInicio = datos[1];
		String^ fechaFin = datos[2];
		String^ restricciones = datos[3];
		String^ tipoPromocion = datos[4];



		if (codigo == codigoPromocion) {
			objPromocionEncontrada = gcnew Promociones(codigoPromocion, fechaInicio, fechaFin, restricciones, tipoPromocion);
			break;
		}
	}
	return objPromocionEncontrada;
}
void PromocionController::actualizarPromocion(Promociones^ objPromocion) {
	List<Promociones^>^ lineaPromocion = buscarAll();
	for (int i = 0; i < lineaPromocion->Count; i++) {
		if (lineaPromocion[i]->codigo == objPromocion->codigo) {
			lineaPromocion[i]->fechaInicio = objPromocion->fechaInicio;
			lineaPromocion[i]->fechaFin = objPromocion->fechaFin;
			lineaPromocion[i]->restricciones = objPromocion->restricciones;
			lineaPromocion[i]->tipoPromocion = objPromocion->tipoPromocion;
			
			break;
		}
	}
	escribirArchivo(lineaPromocion);
}