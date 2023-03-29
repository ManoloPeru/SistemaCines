#include "BeneficiosController2.h"

using namespace SistemaCinesController;
using namespace System::IO;

BeneficiosController2 :: BeneficiosController2() {

}

List<Beneficios^>^ BeneficiosController2 :: BuscarBeneficiosxCodigo (int codigo) {
	List<Beneficios^>^ listaBeneficiosEncontrados = gcnew List<Beneficios^>();
	array <String^>^ lineas = File::ReadAllLines("beneficios.txt");
	String^ separadores = ";";
	for each (String ^ lineaBeneficio in lineas) {
		array<String^>^ datos = lineaBeneficio->Split(separadores->ToCharArray());
		//datos
		int codigoBeneficio = Convert::ToInt32( datos[0]);
		String^ puntos1 = datos[1];
		String^ descuentos1 = datos[2];
		String^ fechaInicio1 = datos[3];
		String^ fechaFin1 = datos[4];
		String^ beneficio11 = datos[5];
		String^ beneficio211 = datos[6];
		String^ beneficio31 = datos[7];
		//Convert::ToString(codigo) -> Contains( Convert::ToString(codigo))
		if (Convert::ToString(codigoBeneficio)->Contains(Convert::ToString(codigo))) {

			Beneficios^ objBeneficio = gcnew Beneficios(codigoBeneficio , Convert::ToInt32(puntos1), descuentos1, fechaInicio1, fechaFin1, beneficio11, beneficio211, beneficio31);
			listaBeneficiosEncontrados->Add(objBeneficio);
		}
	}
	return listaBeneficiosEncontrados;
}
List<Beneficios^>^ BeneficiosController2::buscarAll() {
	List<Beneficios^>^ listaBeneficiosEncontrados = gcnew List<Beneficios^>();
	array <String^>^ lineas = File::ReadAllLines("beneficios.txt");
	String^ separadores = ";";
	for each (String ^ lineaBeneficio in lineas) {
		array<String^>^ datos = lineaBeneficio->Split(separadores->ToCharArray());
		//datos
		int codigoBeneficio = Convert::ToInt32(datos[0]);
		String^ puntos1 = datos[1];
		String^ descuentos1 = datos[2];
		String^ fechaInicio1 = datos[3];
		String^ fechaFin1 = datos[4];
		String^ beneficio11 = datos[5];
		String^ beneficio211 = datos[6];
		String^ beneficio31 = datos[7];
		Beneficios^ objBeneficio = gcnew Beneficios(codigoBeneficio, Convert::ToInt32(puntos1), descuentos1, fechaInicio1, fechaFin1, beneficio11, beneficio211, beneficio31);
		listaBeneficiosEncontrados->Add(objBeneficio);
	}
	return listaBeneficiosEncontrados;

}
void BeneficiosController2::eliminarBeneficios(int codigo) {
	List<Beneficios^>^ listaBeneficios = buscarAll();
	for (int i = 0; i < listaBeneficios->Count; i++) {
		if (listaBeneficios[i]->codigo == codigo) {
			listaBeneficios->RemoveAt(i);
			break;
		}
	}
	escribirArchivo(listaBeneficios);
}
void BeneficiosController2::escribirArchivo(List<Beneficios^>^ listaBeneficios) {

	array<String^>^ lineasArchivo = gcnew array<String^>(listaBeneficios->Count);
	for (int i = 0; i < listaBeneficios->Count; i++) {
		Beneficios^ objBeneficios = listaBeneficios[i];
		lineasArchivo[i] = objBeneficios->codigo + ";" + objBeneficios->puntos + ";" + objBeneficios->descuentos + ";" + objBeneficios->fechaInicio + ";" + objBeneficios->fechaFin + ";" + objBeneficios->beneficio1+ ";" + objBeneficios->beneficio2 + ";" + objBeneficios->beneficio3;
	}
	File::WriteAllLines("beneficios.txt", lineasArchivo);

}
void BeneficiosController2::agregarBeneficio(int codigo, int puntos, String^ descuentos, String^ fechaInicio, String^ fechaFin, String^ beneficio1, String^ beneficio2, String^ beneficio3) {
	List<Beneficios^>^ listaBeneficios = buscarAll();
	Beneficios^ objBeneficio = gcnew Beneficios(codigo,puntos, descuentos, fechaInicio, fechaFin, beneficio1, beneficio2, beneficio3);
	listaBeneficios->Add(objBeneficio);
	escribirArchivo(listaBeneficios);
}
Beneficios^ BeneficiosController2::BuscarBeneficiosxCodigos(int codigo) {
	Beneficios^ objBeneficioEncontrado =nullptr;
	array <String^>^ lineas = File::ReadAllLines("beneficios.txt");
	String^ separadores = ";";
	for each (String ^ lineaBeneficio in lineas) {
		array<String^>^ datos = lineaBeneficio->Split(separadores->ToCharArray());
		//datos
		int codigoBeneficio = Convert::ToInt32(datos[0]);
		String^ puntos1 = datos[1];
		String^ descuentos1 = datos[2];
		String^ fechaInicio1 = datos[3];
		String^ fechaFin1 = datos[4];
		String^ beneficio11 = datos[5];
		String^ beneficio211 = datos[6];
		String^ beneficio31 = datos[7];
		//Convert::ToString(codigo) -> Contains( Convert::ToString(codigo))
		if (codigo==codigoBeneficio) {
			objBeneficioEncontrado = gcnew Beneficios(codigoBeneficio, Convert::ToInt32(puntos1), descuentos1, fechaInicio1, fechaFin1, beneficio11, beneficio211, beneficio31);
		 break;
		}
	}
	return objBeneficioEncontrado;
}

void BeneficiosController2::actualizarBeneficios(Beneficios^ objBeneficio) {
	List<Beneficios^>^ listaBeneficios = buscarAll();
	for (int i = 0; i < listaBeneficios->Count; i++) {
		if (listaBeneficios[i]->codigo == objBeneficio->codigo) {
			listaBeneficios[i]->puntos = objBeneficio->puntos;
			listaBeneficios[i]->descuentos = objBeneficio->descuentos;
			listaBeneficios[i]->fechaInicio = objBeneficio->fechaInicio;
			listaBeneficios[i]->fechaFin = objBeneficio->fechaFin;
			listaBeneficios[i]->beneficio1 = objBeneficio->beneficio1;
			listaBeneficios[i]->beneficio2 = objBeneficio->beneficio2;
			listaBeneficios[i]->beneficio3 = objBeneficio->beneficio3;
			break;
		}
	}
	escribirArchivo(listaBeneficios);
}