#pragma once
namespace SistemaCinesController {

	using namespace System;//cuando el string te sale error
	using namespace System::Collections::Generic;// lista
	using namespace SistemaCinesModel;//<Benefcios>

	public ref class ProyeccionesController {
	public:
		ProyeccionesController();
		//funciones
		List<Proyeccion^>^ buscarProyeccionxNombre(String^ nombre);
	};
}