#pragma once
namespace SistemaCinesController {

	using namespace System;//cuando el string te sale error
	using namespace System::Collections::Generic;// lista
	using namespace SistemaCinesModel;//<Benefcios>

	public ref class PersonalController {
	public:
		PersonalController();
		//funciones
		List<Personal^>^ BuscarPersonalxnombre_apellido(String^ nombre, String^ apellido);
		void eliminarPersonal(int codigo);
		List<Personal^>^ buscarAll();
		void escribirArchivo(List<Personal^>^ listaPersonal);
		void agregarPersonal(int codigo, String^ nombre, String^ apellido, String^ correo, String^ contraseña, String^ tipodePersona);
		Personal^ buscarPersonalxCodigo(int codigo);
		void actualizarPersonal(Personal^ objPersonal);
	};
}