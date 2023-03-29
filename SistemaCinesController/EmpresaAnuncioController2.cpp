#include "EmpresaAnuncioController2.h"

using namespace SistemaCinesController;
using namespace System::IO;

EmpresaAnuncioController2::EmpresaAnuncioController2() {

}

List<EmpresaAnuncio^>^ EmpresaAnuncioController2::buscarEmpresaAnuncio(String^ ruc, String^ contacto, String^ razonSocial) {
	List<EmpresaAnuncio^>^ listaEmpresasAnunciosEncontrados = gcnew List<EmpresaAnuncio^>();
	array<String^>^ lineas = File::ReadAllLines("empresasAnuncios.txt");
	String^ separadores = ";";
	for each (String ^ lineaEmpresaAnuncio in lineas) {
		array<String^>^ datos = lineaEmpresaAnuncio->Split(separadores->ToCharArray());
		String^ rucEmpresaAnuncio = datos[0];
		String^ contactoEmpresaAnuncio = datos[1];
		String^ razonSocialEmpresaAnuncio = datos[2];
		if (rucEmpresaAnuncio->Contains(ruc) && Convert::ToString(contactoEmpresaAnuncio)->Contains(contacto) && razonSocialEmpresaAnuncio->Contains(razonSocial)) {
			EmpresaAnuncio^ objEmpresaAnuncio = gcnew EmpresaAnuncio(rucEmpresaAnuncio, contactoEmpresaAnuncio, razonSocialEmpresaAnuncio);
			listaEmpresasAnunciosEncontrados->Add(objEmpresaAnuncio);
		}
	}
	return listaEmpresasAnunciosEncontrados;
}

List<EmpresaAnuncio^>^ EmpresaAnuncioController2::buscarAll() {
	List<EmpresaAnuncio^>^ listaEmpresasAnunciosEncontrados = gcnew List<EmpresaAnuncio^>();
	array<String^>^ lineas = File::ReadAllLines("empresasAnuncios.txt");
	String^ separadores = ";";
	for each (String ^ lineaEmpresaAnuncio in lineas) {
		array<String^>^ datos = lineaEmpresaAnuncio->Split(separadores->ToCharArray());
		String^ rucEmpresaAnuncio = datos[0];
		String^ contactoEmpresaAnuncio = datos[1];
		String^ razonSocialEmpresaAnuncio = datos[2];
		EmpresaAnuncio^ objEmpresaAnuncio = gcnew EmpresaAnuncio(rucEmpresaAnuncio, contactoEmpresaAnuncio, razonSocialEmpresaAnuncio);
		listaEmpresasAnunciosEncontrados->Add(objEmpresaAnuncio);
	}
	return listaEmpresasAnunciosEncontrados;
}

void EmpresaAnuncioController2::eliminarEmpresaAnuncio(String^ rucDistribuidor) {
	List<EmpresaAnuncio^>^ listaEmpresasAnuncios = buscarAll();
	for (int i = 0; i < listaEmpresasAnuncios->Count; i++) {
		if (listaEmpresasAnuncios[i]->ruc == rucDistribuidor) {
			listaEmpresasAnuncios->RemoveAt(i);
			break;
		}
	}
	escribirArchivo(listaEmpresasAnuncios);
}

void EmpresaAnuncioController2::escribirArchivo(List<EmpresaAnuncio^>^ listaDistribuidor) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaDistribuidor->Count);
	for (int i = 0; i < listaDistribuidor->Count; i++) {
		EmpresaAnuncio^ objtEmpresaAnuncio = listaDistribuidor[i];
		lineasArchivo[i] = objtEmpresaAnuncio->ruc + ";" + objtEmpresaAnuncio->contacto + ";" + objtEmpresaAnuncio->razonSocial;
	}
	File::WriteAllLines("empresasAnuncios.txt", lineasArchivo);
}

void EmpresaAnuncioController2::agregarEmpresaAnuncio(String^ ruc, String^ contacto, String^ razonSocial) {
	List<EmpresaAnuncio^>^ listaEmpresasAnuncios = buscarAll();
	EmpresaAnuncio^ objEmpresaAnuncio = gcnew EmpresaAnuncio(ruc,contacto,razonSocial);
	listaEmpresasAnuncios->Add(objEmpresaAnuncio);
	escribirArchivo(listaEmpresasAnuncios);
}

void EmpresaAnuncioController2::actualizarEmpresaAnuncio(EmpresaAnuncio^ objEmpresaAnuncio) {
	List<EmpresaAnuncio^>^ listaEmpresasAnuncios = buscarAll();
	for (int i = 0; i < listaEmpresasAnuncios->Count; i++) {
		if (listaEmpresasAnuncios[i]->ruc == objEmpresaAnuncio->ruc) {
			listaEmpresasAnuncios[i]->contacto = objEmpresaAnuncio->contacto;
			listaEmpresasAnuncios[i]->razonSocial = objEmpresaAnuncio->razonSocial;
			break;
		}
	}
	escribirArchivo(listaEmpresasAnuncios);
}

EmpresaAnuncio^ EmpresaAnuncioController2::buscarEmpresaAnuncioxRuc(String^ ruc) {
	EmpresaAnuncio^ objAnuncioEncontrado = nullptr;
	array<String^>^ lineas = File::ReadAllLines("empresasAnuncios.txt");
	String^ separadores = ";";
	for each (String ^ lineaEmpresaAnuncio in lineas) {
		array<String^>^ datos = lineaEmpresaAnuncio->Split(separadores->ToCharArray());
		String^ rucEmpresa = datos[0];
		String^ contactoEmpresa = datos[1];
		String^ razonSocialEmpresa = datos[2];
		if (rucEmpresa->Contains(ruc)) {
			objAnuncioEncontrado = gcnew EmpresaAnuncio(rucEmpresa, contactoEmpresa, razonSocialEmpresa);
			break;
		}
	}
	return objAnuncioEncontrado;
}