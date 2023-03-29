#include "CinesController.h"

using namespace SistemaCinesController;
using namespace System::IO;

CinesController::CinesController() {

}

List<Cine^>^ CinesController::buscarCinexIDyDepartamento(int codigo, String^ departamento) {
	{
		List<Cine^>^ listaCinesEncontrados = gcnew List<Cine^>();
		array<String^>^ lineas = File::ReadAllLines("cines.txt");
		String^ separadores = ";";

		for each (String ^ lineaCine in lineas) {

			array<String^>^ datos = lineaCine->Split(separadores->ToCharArray());
			int codigoCine = Convert::ToInt32(datos[0]);
			String^ departamentoCine = datos[1];
			String^ provinciaCine = datos[2];
			String^ distritoCine = datos[3];
			String^ dieccionCine = datos[4];
			String^ horaApertura = datos[5];
			String^ horaCierre = datos[6];


			if (codigoCine==(codigo) && departamentoCine->Contains(departamento)) {
				Cine^ objCine = gcnew Cine(codigoCine, departamentoCine, provinciaCine, distritoCine, dieccionCine, horaApertura, horaCierre);
				listaCinesEncontrados->Add(objCine);
			}
		}
		return listaCinesEncontrados;
	}
}
List<Cine^>^ CinesController::buscarAll() {
	List<Cine^>^ listaCinesEncontrados = gcnew List<Cine^>();
	array<String^>^ lineas = File::ReadAllLines("cines.txt");
	String^ separadores = ";";
	for each (String ^ lineaCine in lineas) {
		array<String^>^ datos = lineaCine->Split(separadores->ToCharArray());
		int codigoCine = Convert::ToInt32(datos[0]);
		String^ departamentoCine = datos[1];
		String^ provinciaCine = datos[2];
		String^ distritoCine = datos[3];
		String^ direccionCine = datos[4];
		String^ horaApertura = datos[5];
		String^ horaCierre = datos[6];
		Cine^ objCine = gcnew Cine (codigoCine, departamentoCine, provinciaCine, distritoCine, direccionCine, horaApertura, horaCierre);
		listaCinesEncontrados->Add(objCine);
	}
	return listaCinesEncontrados;
}

void CinesController::eliminarCine(int codigo) {
	List<Cine^>^ listaCines = buscarAll();
	for (int i = 0; i < listaCines->Count; i++) {
		if (listaCines[i]->codigo == codigo) {
			listaCines->RemoveAt(i);
			break;
		}
	}
	escribirArchivo(listaCines);
}

void CinesController::escribirArchivo(List<Cine^>^ listaCines) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaCines->Count);
	for (int i = 0; i < listaCines->Count; i++) {
		Cine^ objtCine = listaCines[i];
		lineasArchivo[i] = objtCine->codigo + ";" + objtCine->departamento + ";" + objtCine->provincia + ";" + objtCine->distrito + ";" + objtCine->dirección + ";" + objtCine->horaInicio + ";" + objtCine->horaFin;
	}
	File::WriteAllLines("cines.txt", lineasArchivo);
}

void CinesController::agregarCine(int codigo, String^ departamento, String^ provincia, String^ distrito, String^ direccion, String^ horaInicio, String^ horaFin) {
	List<Cine^>^ listaCines = buscarAll();
	Cine^ objCine = gcnew Cine (codigo, departamento, provincia, distrito, direccion, horaInicio, horaFin);
	listaCines->Add(objCine);
	escribirArchivo(listaCines);
}

Cine^ CinesController::buscarCinexCodigo(int codigo) {
	Cine^ objCineEncontrado = nullptr; 
	array<String^>^ lineas = File::ReadAllLines("cines.txt");
	String^ separadores = ";";
	for each (String ^ lineaCine in lineas) {
		array<String^>^ datos = lineaCine->Split(separadores->ToCharArray());
		int codigoCine = Convert::ToInt32(datos[0]);
		String^ departamentoCine = datos[1];
		String^ provinciaCine = datos[2];
		String^ distritoCine = datos[3];
		String^ direccionCine = datos[4];
		String^ horaApertura = datos[5];
		String^ horaCierre = datos[6];
		if (codigo == codigoCine) {
			objCineEncontrado= gcnew Cine(codigoCine, departamentoCine, provinciaCine, distritoCine, direccionCine, horaApertura, horaCierre);
			break; 
		}
	}
	return objCineEncontrado;
}

void CinesController::actualizarCine(Cine^ objCine) {
	List<Cine^>^ listaCines = buscarAll(); 
	for (int i = 0; listaCines->Count; i++) {
		if (listaCines[i]->codigo == objCine->codigo) {
			listaCines[i]->departamento = objCine->departamento;
			listaCines[i]->provincia = objCine->provincia;
			listaCines[i]->distrito = objCine->distrito;
			listaCines[i]->dirección = objCine->dirección;
			listaCines[i]->horaInicio = objCine->horaInicio;
			listaCines[i]->horaFin = objCine->horaFin;
			break;	
		}
	}
	escribirArchivo(listaCines);
}