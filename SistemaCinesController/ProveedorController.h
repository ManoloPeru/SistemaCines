#pragma once
namespace SistemaCinesController {

	using namespace System;//cuando el string te sale error
	using namespace System::Collections::Generic;// lista
	using namespace SistemaCinesModel;//<Benefcios>

	public ref class ProveedorController {
	public:
		ProveedorController();
		//funciones
		List<Proveedor^>^ BuscarProveedorxRazonSocial_RUC(String^ RazonSocial, String^ RUC);
		void eliminarProveedor(int codigo);
		List<Proveedor^>^ buscarAll();
		void escribirArchivo(List<Proveedor^>^ listaProveedor);
		void agregarProveedor(int codigo, String^ RazonSocial, String^ RUC, String^ producto, String^ telefono, String^ correo);
		Proveedor^ BuscarProveedorxCodigo(int codigo);
		void actualizarProveedor(Proveedor^ objProveedor);

	};
}