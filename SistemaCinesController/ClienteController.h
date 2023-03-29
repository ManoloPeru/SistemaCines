#pragma once
namespace SistemaCinesController {

	using namespace System;//cuando el string te sale error
	using namespace System::Collections::Generic;// lista
	using namespace SistemaCinesModel;//<Benefcios>

	public ref class ClienteController {
	public:
		ClienteController();
		//funciones
		List<Cliente^>^ BuscarClientexnombre_ndocumento(String^ nombre, String^ ndocumento);
		void eliminarCliente(int codigo);
		List<Cliente^>^ buscarAll();
		void escribirArchivo(List<Cliente^>^ listaCliente);
		void agregarCliente(int codigo, String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ tipoDocumento, String^ nroDocumento, String^ correo, String^ celular);
		Cliente^ buscarClientexCodigo(int codigo);
		void actualizarCliente(Cliente^ objCliente);
	};
}