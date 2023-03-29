#pragma once
namespace SistemaCinesController {

	using namespace System;//cuando el string te sale error
	using namespace System::Collections::Generic;// lista
	using namespace SistemaCinesModel;//<Benefcios>

	public ref class TipodeSocioController {
	public:
		TipodeSocioController();

		//lista-metodo
		//lista-metodo 
		List<TipodeSocio^>^ BuscarTipodeSocioxUsuarrio_Clase(String^ usuario, String^ claseSocio);
		void eliminarTipodeSocio(int codigo);
		List<TipodeSocio^>^ buscarAll();
		void escribirArchivo(List<TipodeSocio^>^ listaTipodeSocio);
		void agregarTipodeSocio(int codigo, String^ usuario, String^ contrasena, String^ fechaEmision, String^ fechaVencimiento, String^ claseSocio);
		TipodeSocio^ buscartipodeSocioxCodigo(int codigo);
		void actualizarTipodeSocio(TipodeSocio^ objTipodeSocio);
	};

}