#pragma once
namespace SistemaCinesController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SistemaCinesModel;

	public ref class ProyeccionController {
	public:
		ProyeccionController();
		//List<Proyeccion^>^ BuscarProyeccionxFecha(String^ fecha,Pelicula^ objpelicula);
		List<ProyeccionCliente^>^ BuscarProyeccionxFecha(String^ fecha, String^ nombre);
		ProyeccionCliente^ buscarProyeccionxCodigo(int codigo);
	};

}