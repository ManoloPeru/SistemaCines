#include "ButacasController3.h"

using namespace SistemaCinesController;
using namespace System::IO;

ButacasController3::ButacasController3() {

}
ButacasCliente^ ButacasController3::BuscarButacasxCodigo(int codigoProyeccion) {
	ButacasCliente^ objButacasEncontrados = nullptr;
	array<String^>^ lineas = File::ReadAllLines("butacasCliente.txt");
	String^ separadores = ";";

	for each (String ^ lineaButacas in lineas) {
		array<String^>^ datos = lineaButacas->Split(separadores->ToCharArray());

		int codigoPro = Convert::ToInt32(datos[0]);
		int A1 = Convert::ToInt32(datos[1]);
		int A2 = Convert::ToInt32(datos[2]);
		int A3 = Convert::ToInt32(datos[3]);
		int A4 = Convert::ToInt32(datos[4]);
		int A5 = Convert::ToInt32(datos[5]);
		int A6 = Convert::ToInt32(datos[6]);
		int A7 = Convert::ToInt32(datos[7]);
		int A8 = Convert::ToInt32(datos[8]);
		int A9 = Convert::ToInt32(datos[9]);
		int A10 = Convert::ToInt32(datos[10]);

		if (codigoPro== codigoProyeccion) {
			objButacasEncontrados = gcnew ButacasCliente(codigoPro, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10);
			break;
		}
	}
	return objButacasEncontrados;
}
List<ButacasCliente^>^ ButacasController3::buscarAll() {

	List<ButacasCliente^>^ listaButacasEncontrados = gcnew List<ButacasCliente^>();
	array<String^>^ lineas = File::ReadAllLines("butacasCliente.txt");
	String^ separadores = ";";

	for each (String ^ lineaButaca in lineas) {
		array<String^>^ datos = lineaButaca->Split(separadores->ToCharArray());

		int codigo = Convert::ToInt32(datos[0]);
		int A1 = Convert::ToInt32(datos[1]);
		int A2 = Convert::ToInt32(datos[2]);
		int A3 = Convert::ToInt32(datos[3]);
		int A4 = Convert::ToInt32(datos[4]);
		int A5 = Convert::ToInt32(datos[5]);
		int A6 = Convert::ToInt32(datos[6]);
		int A7 = Convert::ToInt32(datos[7]);
		int A8 = Convert::ToInt32(datos[8]);
		int A9 = Convert::ToInt32(datos[9]);
		int A10 = Convert::ToInt32(datos[10]);

		ButacasCliente^ objButacas = gcnew ButacasCliente(codigo,A1, A2, A3,A4,A5,A6,A7,A8,A9,A10);
		listaButacasEncontrados->Add(objButacas);

	}
	return listaButacasEncontrados;

}
void ButacasController3::escribirArchivo(List<ButacasCliente^>^ listaButacas) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaButacas->Count);
	for (int i = 0; i < listaButacas->Count; i++) {
		ButacasCliente^ objButacas = listaButacas[i];
		lineasArchivo[i] = objButacas->CodigoProyeccion + ";" + objButacas->butaca1 + ";" + objButacas->butaca2 + ";" + objButacas->butaca3 + ";" + objButacas->butaca4 + ";" + objButacas->butaca5 + ";" + objButacas->butaca6 + ";" + objButacas->butaca7 + ";" + objButacas->butaca8 + ";" + objButacas->butaca9 + ";" + objButacas->butaca10;
	}
	File::WriteAllLines("butacasCliente.txt", lineasArchivo);
}
void ButacasController3::ActualizarButacasxAux(int codigoProyeccion, int  auxA1, int auxA2, int auxA3, int auxA4, int auxA5, int auxA6, int auxA7, int auxA8, int auxA9, int auxA10) {
	List<ButacasCliente^>^ listaButacas = buscarAll();
	for (int i = 0; i < listaButacas->Count; i++) {
		if (listaButacas[i]->CodigoProyeccion == codigoProyeccion) {
			
			if (listaButacas[i]->butaca1 == 0) {
				listaButacas[i]->butaca1 = auxA1;
			}
			if (listaButacas[i]->butaca2 == 0) {
				listaButacas[i]->butaca2 = auxA2;
			}
			if (listaButacas[i]->butaca3 == 0) {
				listaButacas[i]->butaca3 = auxA3;
			}
			if (listaButacas[i]->butaca4 == 0) {
				listaButacas[i]->butaca4 = auxA4;
			}
			if (listaButacas[i]->butaca5 == 0) {
				listaButacas[i]->butaca5 = auxA5;
			}
			if (listaButacas[i]->butaca6 == 0) {
				listaButacas[i]->butaca6 = auxA6;
			}
			if (listaButacas[i]->butaca7 == 0) {
				listaButacas[i]->butaca7 = auxA7;
			}
			if (listaButacas[i]->butaca8 == 0) {
				listaButacas[i]->butaca8 = auxA8;
			}
			if (listaButacas[i]->butaca9 == 0) {
				listaButacas[i]->butaca9 = auxA9;
			}
			if (listaButacas[i]->butaca10 == 0) {
				listaButacas[i]->butaca10 = auxA10;
			}
			break;
		}
	}
	escribirArchivo(listaButacas);
}
