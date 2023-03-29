#include "ButacasController.h"

using namespace SistemaCinesController;
using namespace System::IO;

ButacasController::ButacasController() {

}

List<Butacas^>^ ButacasController::buscarAll() {
	List<Butacas^>^ listaButacasEncontradas = gcnew List<Butacas^>();
	array <String^>^ lineas = File::ReadAllLines("butacas.txt");
	String^ separadores = ";";
	for each (String ^ lineaBeneficio in lineas) {
		array<String^>^ datos = lineaBeneficio->Split(separadores->ToCharArray());
		//datos
		int salaCodigo = Convert::ToInt32(datos[0]);
		DateTime horarioButacas = Convert::ToDateTime(datos[1]);
		int butaca1 = Convert::ToInt32(datos[2]);
		int butaca2 = Convert::ToInt32(datos[3]);
		int butaca3 = Convert::ToInt32(datos[4]);
		int butaca4 = Convert::ToInt32(datos[5]);
		int butaca5 = Convert::ToInt32(datos[6]);
		int butaca6 = Convert::ToInt32(datos[7]);
		int butaca7 = Convert::ToInt32(datos[8]);
		int butaca8 = Convert::ToInt32(datos[9]);
		int butaca9 = Convert::ToInt32(datos[10]);
		int butaca10 = Convert::ToInt32(datos[11]);
		Butacas ^ objEncontrado = gcnew Butacas(salaCodigo, horarioButacas, butaca1, butaca2, butaca3, butaca4, butaca5, butaca6, butaca7, butaca8, butaca9, butaca10);
		listaButacasEncontradas->Add(objEncontrado);
	}
	return listaButacasEncontradas;

}

Butacas^ ButacasController::buscarxSalaxHorario(int Sala, DateTime Horario) {
	Butacas^ objEncontrado = nullptr;
	array<String^>^ lineas = File::ReadAllLines("butacas.txt");
	String^ separadores = ";";
	for each (String ^ lineaButaca in lineas) {
		array<String^>^ datos = lineaButaca->Split(separadores->ToCharArray());
		int salaCodigo = Convert::ToInt32(datos[0]);
		DateTime horarioButacas = Convert::ToDateTime(datos[1]);
		int butaca1 = Convert::ToInt32(datos[2]);
		int butaca2 = Convert::ToInt32(datos[3]);
		int butaca3 = Convert::ToInt32(datos[4]);
		int butaca4 = Convert::ToInt32(datos[5]);
		int butaca5 = Convert::ToInt32(datos[6]);
		int butaca6 = Convert::ToInt32(datos[7]);
		int butaca7 = Convert::ToInt32(datos[8]);
		int butaca8 = Convert::ToInt32(datos[9]);
		int butaca9 = Convert::ToInt32(datos[10]);
		int butaca10 = Convert::ToInt32(datos[11]);
		if (Sala == salaCodigo && Horario == horarioButacas) {
			objEncontrado = gcnew Butacas(salaCodigo, horarioButacas, butaca1, butaca2, butaca3, butaca4, butaca5, butaca6, butaca7, butaca8, butaca9, butaca10);
			break;
		}
	}
	return objEncontrado;
}

void ButacasController::actualizarButacas(int butaca, int Sala, DateTime Horario) {
	Butacas^ objButaca = buscarxSalaxHorario(Sala, Horario);
	if (butaca == 1) {
		objButaca->butaca1 = 1;
	}
	else {
		if (butaca == 2) {
			objButaca->butaca2 = 1;
		}
		else {
			if (butaca == 3) {
				objButaca->butaca3 = 1;
			}
			else {
				if (butaca == 4) {
					objButaca->butaca4 = 1;
				}
				else {
					if (butaca == 5) {
						objButaca->butaca5 = 1;
					}
					else {
						if (butaca == 6) {
							objButaca->butaca6 = 1;
						}
						else {
							if (butaca == 7) {
								objButaca->butaca7 = 1;
							}
							else {
								if (butaca == 8) {
									objButaca->butaca8 = 1;
								}
								else {
									if (butaca == 9) {
										objButaca->butaca9 = 1;
									}
									else {
										if (butaca == 10) {
											objButaca->butaca10 = 1;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	List<Butacas^>^ listaButacas = buscarAll();
	for (int i = 0; i < listaButacas->Count; i++) {
		if (listaButacas[i]->salaCodigo == objButaca->salaCodigo && listaButacas[i]->horarioButacas == objButaca->horarioButacas) {
			listaButacas[i]->butaca1 = objButaca->butaca1;
			listaButacas[i]->butaca2 = objButaca->butaca2;
			listaButacas[i]->butaca3 = objButaca->butaca3;
			listaButacas[i]->butaca4 = objButaca->butaca4;
			listaButacas[i]->butaca5 = objButaca->butaca5;
			listaButacas[i]->butaca6 = objButaca->butaca6;
			listaButacas[i]->butaca7 = objButaca->butaca7;
			listaButacas[i]->butaca8 = objButaca->butaca8;
			listaButacas[i]->butaca9 = objButaca->butaca9;
			listaButacas[i]->butaca10 = objButaca->butaca10;
			break;
		}
	}
	escribirArchivo(listaButacas);
}

void ButacasController::actualizarperoButacaxCodigo(int butaca, int Sala, DateTime Horario) {
	Butacas^ objButaca = buscarxSalaxHorario(Sala, Horario);
	if (butaca == 1) {
		objButaca->butaca1 = 0;
	}
	else {
		if (butaca == 2) {
			objButaca->butaca2 = 0;
		}
		else {
			if (butaca == 3) {
				objButaca->butaca3 = 0;
			}
			else {
				if (butaca == 4) {
					objButaca->butaca4 = 0;
				}
				else {
					if (butaca == 5) {
						objButaca->butaca5 = 0;
					}
					else {
						if (butaca == 6) {
							objButaca->butaca6 = 0;
						}
						else {
							if (butaca == 7) {
								objButaca->butaca7 = 0;
							}
							else {
								if (butaca == 8) {
									objButaca->butaca8 = 0;
								}
								else {
									if (butaca == 9) {
										objButaca->butaca9 = 0;
									}
									else {
										if (butaca == 10) {
											objButaca->butaca10 = 0;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	List<Butacas^>^ listaButacas = buscarAll();
	for (int i = 0; i < listaButacas->Count; i++) {
		if (listaButacas[i]->salaCodigo == objButaca->salaCodigo && listaButacas[i]->horarioButacas == objButaca->horarioButacas) {
			listaButacas[i]->butaca1 = objButaca->butaca1;
			listaButacas[i]->butaca2 = objButaca->butaca2;
			listaButacas[i]->butaca3 = objButaca->butaca3;
			listaButacas[i]->butaca4 = objButaca->butaca4;
			listaButacas[i]->butaca5 = objButaca->butaca5;
			listaButacas[i]->butaca6 = objButaca->butaca6;
			listaButacas[i]->butaca7 = objButaca->butaca7;
			listaButacas[i]->butaca8 = objButaca->butaca8;
			listaButacas[i]->butaca9 = objButaca->butaca9;
			listaButacas[i]->butaca10 = objButaca->butaca10;
			break;
		}
	}
	escribirArchivo(listaButacas);
}

void ButacasController::escribirArchivo(List<Butacas^>^ listaButacas) {

	array<String^>^ lineasArchivo = gcnew array<String^>(listaButacas->Count);
	for (int i = 0; i < listaButacas->Count; i++) {
		Butacas^ objButacas = listaButacas[i];
		lineasArchivo[i] = objButacas->salaCodigo + ";" + objButacas->horarioButacas + ";" + objButacas->butaca1 + ";" + objButacas->butaca2 + ";" + objButacas->butaca3 + ";" + objButacas->butaca4 + ";" + objButacas->butaca5 + ";" + objButacas->butaca6 + ";" + objButacas->butaca7 + ";" + objButacas->butaca8 + ";" + objButacas->butaca9 + ";" + objButacas->butaca10 ;
	}
	File::WriteAllLines("butacas.txt", lineasArchivo);

}

void ButacasController::compararButaca(Butacas^ objButacaAntes, int Sala, DateTime Horario) {
	Butacas^ objButaca = buscarxSalaxHorario(Sala, Horario);
	List<Butacas^>^ listaButacas = buscarAll();
	for (int i = 0; i < listaButacas->Count; i++) {
		if (listaButacas[i]->salaCodigo == objButaca->salaCodigo && listaButacas[i]->horarioButacas == objButaca->horarioButacas) {
			if (objButacaAntes->butaca1 != objButaca->butaca1) {
				listaButacas[i]->butaca1 = objButacaAntes->butaca1;
			}
			if (objButacaAntes->butaca2 != objButaca->butaca2) {
				listaButacas[i]->butaca2 = objButacaAntes->butaca2;
			}
			if (objButacaAntes->butaca3 != objButaca->butaca3) {
				listaButacas[i]->butaca3 = objButacaAntes->butaca3;
			}
			if (objButacaAntes->butaca4 != objButaca->butaca4) {
				listaButacas[i]->butaca4 = objButacaAntes->butaca4;
			}
			if (objButacaAntes->butaca5 != objButaca->butaca5) {
				listaButacas[i]->butaca5 = objButacaAntes->butaca5;
			}
			if (objButacaAntes->butaca6 != objButaca->butaca6) {
				listaButacas[i]->butaca6 = objButacaAntes->butaca6;
			}
			if (objButacaAntes->butaca7 != objButaca->butaca7) {
				listaButacas[i]->butaca7 = objButacaAntes->butaca7;
			}
			if (objButacaAntes->butaca8 != objButaca->butaca8) {
				listaButacas[i]->butaca8 = objButacaAntes->butaca8;
			}
			if (objButacaAntes->butaca9 != objButaca->butaca9) {
				listaButacas[i]->butaca9 = objButacaAntes->butaca9;
			}
			if (objButacaAntes->butaca10 != objButaca->butaca10) {
				listaButacas[i]->butaca10 = objButacaAntes->butaca10;
			}
			break;
		}
	}
	escribirArchivo(listaButacas);
}