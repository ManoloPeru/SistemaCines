#include "TipodeSocioController.h"
using namespace SistemaCinesController;
using namespace System::IO;

TipodeSocioController::TipodeSocioController() {

}

List<TipodeSocio^>^ TipodeSocioController::BuscarTipodeSocioxUsuarrio_Clase(String^ usuario, String^ claseSocio) {

	List<TipodeSocio^>^ listaTipodeSocioEncontrados = gcnew List<TipodeSocio^>();
	array <String^>^ lineas = File::ReadAllLines("tipodesocio.txt");
	String^ separadores = ";";
	for each (String ^ listaTipodeSocio in lineas) {
		array<String^>^ datos = listaTipodeSocio->Split(separadores->ToCharArray());
		//datos
		int codigoSocio1 = Convert::ToInt32(datos[0]);
		String^ usuario1 = datos[1];
		String^ contraseña1 = datos[2];
		String^ fechaemision1 = datos[3];
		String^ fechaven1 = datos[4];
		String^ clase = datos[5];

		//Convert::ToString(codigo) -> Contains( Convert::ToString(codigo))
		if (usuario1->Contains(usuario) && clase->Contains(claseSocio)) {

			TipodeSocio^ objTipodeSocio = gcnew TipodeSocio(codigoSocio1, usuario1, contraseña1, fechaemision1, fechaven1, clase);
		
			listaTipodeSocioEncontrados->Add(objTipodeSocio);
		}
	}
	return listaTipodeSocioEncontrados;
}
///uwwwwwwwwwwwwwwwwwwwwwwww
List<TipodeSocio^>^ TipodeSocioController::buscarAll() {
	List<TipodeSocio^>^ listaTipodeSocioEncontrados = gcnew List<TipodeSocio^>();

	array <String^>^ lineas = File::ReadAllLines("tipodesocio.txt");
	String^ separadores = ";";
	for each (String ^ listaTipodeSocio in lineas) {
		array<String^>^ datos = listaTipodeSocio->Split(separadores->ToCharArray());
		//datos
		int codigoSocio1 = Convert::ToInt32(datos[0]);
		String^ usuario1 = datos[1];
		String^ contraseña1 = datos[2];
		String^ fechaemision1 = datos[3];
		String^ fechaven1 = datos[4];
		String^ clase = datos[5];
		TipodeSocio^ objTipodeSocio = gcnew TipodeSocio(codigoSocio1, usuario1, contraseña1, fechaemision1, fechaven1, clase);

		listaTipodeSocioEncontrados->Add(objTipodeSocio);
	}
	return listaTipodeSocioEncontrados;
}

void TipodeSocioController::eliminarTipodeSocio(int codigo) {

	List<TipodeSocio^>^ listaTipodeSocio = buscarAll();
	for (int i = 0; i < listaTipodeSocio->Count; i++) {
		if (listaTipodeSocio[i]->codigo == codigo) {
			listaTipodeSocio->RemoveAt(i);
			break;
		}
	}
	escribirArchivo(listaTipodeSocio);
}
void TipodeSocioController::escribirArchivo(List<TipodeSocio^>^ listaTipodeSocio) {

	array<String^>^ lineasArchivo = gcnew array<String^>(listaTipodeSocio->Count);
	for (int i = 0; i < listaTipodeSocio->Count; i++) {
		TipodeSocio^ objTipodeSocio = listaTipodeSocio[i];
		lineasArchivo[i] = objTipodeSocio->codigo + ";" + objTipodeSocio->usuario + ";" + objTipodeSocio->contrasena + ";" + objTipodeSocio->fechaEmision + ";" + objTipodeSocio->fechaVencimiento + ";" + objTipodeSocio->claseSocio;
	}
	File::WriteAllLines("tipodesocio.txt", lineasArchivo);

}

void TipodeSocioController::agregarTipodeSocio(int codigo, String^ usuario, String^ contrasena, String^ fechaEmision, String^ fechaVencimiento, String^ claseSocio) {
	List<TipodeSocio^>^ listaTipodeSocio = buscarAll();
	TipodeSocio^ objTipodeSocio = gcnew TipodeSocio(codigo, usuario, contrasena, fechaEmision, fechaVencimiento, claseSocio);
	listaTipodeSocio->Add(objTipodeSocio);
	escribirArchivo(listaTipodeSocio);
}

TipodeSocio^ TipodeSocioController::buscartipodeSocioxCodigo(int codigo) {

	TipodeSocio^ objTipodeSocioEncontrados = nullptr;
	array <String^>^ lineas = File::ReadAllLines("tipodesocio.txt");
	String^ separadores = ";";

	for each (String ^ listaTipodeSocio in lineas) {
		array<String^>^ datos = listaTipodeSocio->Split(separadores->ToCharArray());
		//datos
		int codigoSocio1 = Convert::ToInt32(datos[0]);
		String^ usuario1 = datos[1];
		String^ contraseña1 = datos[2];
		String^ fechaemision1 = datos[3];
		String^ fechaven1 = datos[4];
		String^ clase = datos[5];

		//Convert::ToString(codigo) -> Contains( Convert::ToString(codigo))
		if (codigoSocio1==codigo) {

			objTipodeSocioEncontrados = gcnew TipodeSocio(codigoSocio1, usuario1, contraseña1, fechaemision1, fechaven1, clase);
			break;
		}
	}
	return objTipodeSocioEncontrados;
}
void  TipodeSocioController::actualizarTipodeSocio(TipodeSocio^ objTipodeSocio) {
	List<TipodeSocio^>^ listaTipodeSocio = buscarAll();
	for (int i = 0; i < listaTipodeSocio->Count; i++) {
		if (listaTipodeSocio[i]->codigo == objTipodeSocio->codigo) {
			listaTipodeSocio[i]->usuario = objTipodeSocio->usuario;
			listaTipodeSocio[i]->contrasena= objTipodeSocio->contrasena;
			listaTipodeSocio[i]->fechaEmision = objTipodeSocio->fechaEmision;
			listaTipodeSocio[i]->fechaVencimiento = objTipodeSocio->fechaVencimiento;
			listaTipodeSocio[i]->claseSocio = objTipodeSocio->claseSocio;
			break;
		}
	}
	escribirArchivo(listaTipodeSocio);

}