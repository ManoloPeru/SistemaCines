#pragma once
namespace SistemaCinesController {
	using namespace System;//cuando el string te sale error
	using namespace System::Collections::Generic;// lista
	using namespace SistemaCinesModel;//<Propietario>
	//solo editar
	public ref class PropietarioController2 {
	public:
		PropietarioController2();
		List<Propietario^>^ buscarAll();
		Propietario^ buscarPropietario();
		void escribirArchivo(List<Propietario^>^ listaPropietario);
		void actualizarPropietario(Propietario^ objPropietario);
	};
}
