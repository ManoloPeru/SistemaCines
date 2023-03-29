#pragma once

namespace SistemaCinesController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SistemaCinesModel;

	public ref class LugaresdeAtencionController {
	public:
		LugaresdeAtencionController();
		List<LugaresdeAtencion^>^ buscarLugardeAtencion(String^ nombre);
		void eliminarLugardeAtencion(String^ nombre);
		List<LugaresdeAtencion^>^ buscarAll();
		void escribirArchivo(List<LugaresdeAtencion^>^ listaLugaresdeAtencion);
		void agregarLugardeAtencion(String^ nombre, int numerodePersonal);
		LugaresdeAtencion^ buscarLugardeAtencionxNombre(String^ nombre);
		void actualizarLugardeAtencion(LugaresdeAtencion^ objtLugardeAtencion);
	};

}